// 1106. Parsing A Boolean Expression

class Solution
{
public:
    char solveOp(char exp, vector<char> vec)
    {
        if (exp == '!')
        {
            return vec[0] == 't' ? 'f' : 't';
        }
        if (exp == '&')
        {
            for (auto &ch : vec)
            {
                if (ch == 'f')
                {
                    return 'f';
                }
            }
            return 't';
        }
        if (exp == '|')
        {
            for (auto &ch : vec)
            {
                if (ch == 't')
                {
                    return 't';
                }
            }
            return 'f';
        }
        return 't';
    }

    bool parseBoolExpr(string expression)
    {

        int n = expression.size();

        stack<char> st; // store char in expression

        for (int i = 0; i < n; i++)
        {
            if (expression[i] == ',')
                continue;

            if (expression[i] == ')')
            {
                vector<char> vec;
                while (st.top() != '(')
                {

                    vec.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char exp = st.top();
                st.pop();

                st.push(solveOp(exp, vec));
            }
            else
            {
                st.push(expression[i]);
            }
        }
        return (st.top() == 't') ? true : false;
    }
};