void quick_sort(int *nums, int left, int right) {
    if (right - left < 1) return ;
	int x = left, y = right, z = nums[left];
	while (x < y) {
		while (x < y && nums[y] >= z) --y;
		if (x < y) nums[x++] = nums[y];
		while (x < y && nums[x] <= z) ++x;
		if (x < y) nums[y--] = nums[x];
	}
	nums[x] = z;
	quick_sort(nums, left, x - 1);
	quick_sort(nums, x + 1, right);
}

int longestConsecutive(int* nums, int n) {
    if (n == 0) return 0;
    quick_sort(nums, 0, n - 1);
    int ans = 1, ind = 1;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) continue;
        else if (nums[i] == nums[i + 1] - 1) ans++;
        else ans = 1;
        if (ans > ind) ind = ans;
    }
    return ind;
}
