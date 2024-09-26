// LC->2416. Sum of Prefix Scores of Strings
// TC-> O(N*L) N = LENGTH OF ARRAY->WORD...  L = LENGTH OF TRIE

class Solution
{
public:
    struct trieNode
    {
        int countp;
        trieNode *child[26];
    };

    trieNode *getNode()
    {
        trieNode *newNode = new trieNode();
        newNode->countp = 0;
        for (int i = 0; i < 26; i++)
        {
            newNode->child[i] = NULL;
        }
        return newNode;
    }

    trieNode *root = getNode();

    void insert(string &word, trieNode *root)
    {
        trieNode *crawl = root;
        for (char &ch : word)
        {
            int id = ch - 'a';

            if (crawl->child[id] == NULL)
            {
                crawl->child[id] = getNode();
            }
            crawl->child[id]->countp += 1;
            crawl = crawl->child[id];
        }
    }

    int score(string &word, trieNode *root)
    {
        trieNode *crawl = root;
        int score = 0;
        for (char &ch : word)
        {
            int id = ch - 'a';
            score += crawl->child[id]->countp;
            crawl = crawl->child[id];
        }
        return score;
    }

    vector<int> sumPrefixScores(vector<string> &words)
    {
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            insert(words[i], root);
        }
        vector<int> result(n);

        for (int i = 0; i < n; i++)
        {
            result[i] = score(words[i], root);
        }

        return result;
    }
};