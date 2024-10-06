// 1813. Sentence Similarity III

// pointer Method

class Solution
{

public:
    // pushing every word of sentence in vector
    vector<string> senToWord(string sentence)
    {
        sentence += " ";
        vector<string> ans;

        string word = "";
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
            {
                ans.push_back(word);
                word = "";
            }
            else
            {
                word += sentence[i];
            }
        }

        return ans;
    }
    bool areSentencesSimilar(string sentence1, string sentence2)
    {
        int n = sentence1.length();
        int m = sentence2.length();

        // if s1 word is less than s2 word just swap
        if (n < m)
        {
            swap(sentence1, sentence2);
        }
        vector<string> s1;
        vector<string> s2;

        s1 = senToWord(sentence1);
        s2 = senToWord(sentence2);

        int i = 0;
        int j = s1.size() - 1;
        int k = 0;
        int l = s2.size() - 1;

        //
        while (i < s1.size() && k < s2.size() && s1[i] == s2[k])
        {
            i++;
            k++;
        }

        while (l >= k && s1[j] == s2[l])
        {
            j--;
            l--;
        }

        return l < k;
    }
};

// USING DEQUE

class Solution
{

public:
    deque<string> senToWord(string sentence)
    {
        sentence += " ";
        deque<string> ans;

        string word = "";
        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
            {
                ans.push_back(word);
                word = "";
            }
            else
            {
                word += sentence[i];
            }
        }

        return ans;
    }
    bool areSentencesSimilar(string sentence1, string sentence2)
    {
        int n = sentence1.length();
        int m = sentence2.length();

        if (n < m)
        {
            swap(sentence1, sentence2);
        }
        deque<string> deq1;
        deque<string> deq2;

        deq1 = senToWord(sentence1);
        deq2 = senToWord(sentence2);

        while (!deq1.empty() && !deq2.empty() && deq1.front() == deq2.front())
        {
            deq1.pop_front();
            deq2.pop_front();
        }

        while (!deq1.empty() && !deq2.empty() && deq1.back() == deq2.back())
        {
            deq1.pop_back();
            deq2.pop_back();
        }

        return deq2.empty();
    }
};