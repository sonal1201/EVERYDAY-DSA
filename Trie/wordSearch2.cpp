// 212. Word Search II

class Solution
{
public:
    vector<string> result;
    int m, n;
    struct trieNode
    {
        bool isEnd;
        string word;
        trieNode *child[26];
    };
    trieNode *getNode()
    {
        trieNode *newNode = new trieNode();
        newNode->isEnd = false;
        newNode->word = "";
        for (int i = 0; i < 26; i++)
        {
            newNode->child[i] = NULL;
        }
        return newNode;
    }

    // Insertin of word in trie
    void insert(string &word, trieNode *root)
    {
        trieNode *crawl = root;
        for (char ch : word)
        {
            int id = ch - 'a';

            if (crawl->child[id] == NULL)
            {
                crawl->child[id] = getNode();
            }
            crawl = crawl->child[id];
        }
        crawl->isEnd = true;
        crawl->word = word;
    }
    vector<vector<int>> dirc{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void searchWord(vector<vector<char>> &board, int i, int j, trieNode *root)
    {
        if (i < 0 || i >= m || j < 0 || j >= n)
        {
            return;
        }

        if (board[i][j] == '$' || root->child[board[i][j] - 'a'] == NULL)
        {
            return;
        }
        root = root->child[board[i][j] - 'a'];
        if (root->isEnd == true)
        {
            result.push_back(root->word);
            root->isEnd = false;
        }
        char temp = board[i][j];
        board[i][j] = '$';

        for (vector<int> &dic : dirc)
        {
            int new_i = i + dic[0];
            int new_j = j + dic[1];
            searchWord(board, new_i, new_j, root);
        }
        board[i][j] = temp;
    }

    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        m = board.size();    // row
        n = board[0].size(); // col

        trieNode *root = getNode();

        // Insert all word in tries DS
        for (string &word : words)
        {
            insert(word, root);
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch = board[i][j];
                int id = ch - 'a';
                if (root->child[id] != NULL)
                {
                    searchWord(board, i, j, root);
                }
            }
        }

        return result;
    }
};