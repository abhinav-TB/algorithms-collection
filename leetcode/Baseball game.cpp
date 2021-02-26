class Solution{
        public :
            int calPoints(vector<string> & ops){
                int n = ops.size(), last, slast;
stack<int> s;
for (int i = 0; i < n; i++)
{
        if (ops[i] == "C")
                s.pop();
        else if (ops[i] == "D")
                s.push(s.top() * 2);
        else if (ops[i] == "+")
        {
                last = s.top();
                s.pop();
                slast = s.top();
                s.pop();
                s.push(slast);
                s.push(last);
                s.push(last + slast);
        }
        else
                s.push(stoi(ops[i]));
}
int ans = 0;
while (!s.empty())
{
        ans += s.top();
        s.pop();
}
return ans;
}
}
;