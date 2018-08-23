typedef struct UnionSet {
    int *f, *size;
    int n;
} UnionSet;

UnionSet *init(int n) {
    UnionSet *u = (UnionSet *)malloc(sizeof(UnionSet));
    u->f = (int *)malloc(sizeof(int) * n);
    u->size = (int *)malloc(sizeof(int) *n);
    for (int i = 0; i < n; i++) {
        u->f[i] = i;
        u->size[i] = 1;
    }
    return u;
}

void clear(UnionSet *u) {
    if (u == NULL) return ;
    free(u->f);
    free(u->size);
    free(u);
    return ;
}

int find(UnionSet *u, int ind) {
    if (u->f[ind] == ind) return ind;
    return (u->f[ind] = find(u, u->f[ind]));
}

int merge(UnionSet *u, int a, int b) {
    int fa = find(u, a), fb = find(u, b);
    if (fa == fb) return 0;
    if (u->size[fa] > u->size[fb]) {
        u->f[fb] = fa;
        u->size[fa] += u->size[fb];
    } else {
        u->f[fa] = fb;
        u->size[fb] += u->size[fa];    
    }
    return 1;
}

int ind(int x, int y, int m) {
    return x * m + y + 1;
}

void solve(char** board, int boardRowSize, int boardColSize) {
    int n = boardRowSize, m = boardColSize;
    int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
    UnionSet *u = init(n * m + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'X') continue;
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    merge(u, 0, ind(i, j, m));
            }
            for (int k = 0; k < 2; k++) {
                int dx = i + dir[k][0];
                int dy = j + dir[k][1];
                if (dx < 0 || dx >= n) continue;
                if (dy < 0 || dy >= m) continue;
                if (board[dx][dy] == 'X') continue;
                merge(u, ind(i, j, m), ind(dx, dy, m));
            }
        }
    }
    int f0 = find(u, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (find(u, ind(i, j, m)) == f0) continue;
            board[i][j] = 'X';
        }
    }
    return ;
}
