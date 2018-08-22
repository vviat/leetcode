class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode *root) {
        // write your code here
        string s = "";
        writeTree(s, root);
        return s;
    }

    void writeTree(string &s, TreeNode* root)
    {
        if (root == NULL)
        {
            s += "# ";
            return;
        }
        s += (to_string(root->val) + ' ');
        writeTree(s, root->left);
        writeTree(s, root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data) {
        // write your code here
        int pos = 0;
        return readTree(data, pos);

    }

    TreeNode* readTree(string data, int& pos)
    {
        if (data[pos] == '#')
        {
            pos += 2;
            return NULL;
        }
        int nownum = 0;
        int flag = 1;
        if(data[pos] == '-')
        {
            flag = -1;
            pos++;
        }
        while (data[pos] != ' ')
        {
            nownum = nownum * 10 + (data[pos] - '0');
            pos++;
        }
        pos++;
        TreeNode* nowNode = new TreeNode(nownum * flag);
        nowNode->left = readTree(data, pos);
        nowNode->right = readTree(data, pos);
        return nowNode;
    }
};
