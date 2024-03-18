// LC->Evaluate Reverse Polish Notation

class Solution
{
public:
    int operation(int a, int b, string token)
    {
        if (token == "+")
        {
            return a + b;
        }
        if (token == "-")
        {
            return a - b;
        }
        if (token == "*")
        {
            return a * b;
        }

        return a / b;
    }

    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (string token : tokens)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int res = operation(a, b, token);
                st.push(res);
            }
            else
            {
                st.push(stoi(token)); // stoi convert string to integer....
            }
        }
        return st.top();
    }
};