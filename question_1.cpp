class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>st;
        for(auto s : tokens)
        {
            if( s == "+" || s == "-" || s == "*" || s == "/")
        {
            long a=st.top();
            st.pop();
            long b=st.top();
            st.pop();

            char notations=s[0];
            switch(notations)
            {
                case '+':
                st.push(b+a);
                break;
                case '-':
                st.push(b-a);
                break;
                case '*':
                st.push(b*a);
                break;
                case '/':
                st.push(b/a);
                break;

            }
        }
        else
        {
            st.push(stoi(s));
        }
        }
        return st.top();
    }
};
