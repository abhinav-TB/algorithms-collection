class CustomStack
{
public:
        vector<int> s;
        int max;
        CustomStack(int maxSize)
        {
                max = maxSize;
        }

        void push(int x)
        {
                if (s.size() < max)
                {
                        s.push_back(x);
                }
        }

        int pop()
        {
                if (s.size() > 0)
                {
                        int ret = s.back();
                        s.pop_back();
                        return ret;
                }
                else
                {
                        return -1;
                }
        }

        void increment(int k, int val)
        {
                int m = s.size() < k ? s.size() : k;
                for (int i = 0; i < m; i++)
                {
                        s[i] = s[i] + val;
                }
        }
}
