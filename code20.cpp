#include <bits/stdc++.h>
using namespace std;

string rearrange(string p, char add, int posi)
{

    int size = p.size();
    string ans;

    for (int i = 0; i < posi; i++)
    {
        ans.push_back(p[i]);
    }

    char temp = p[posi];
    ans.push_back(add);

    if (temp != '\0')
    {
        ans.push_back(temp);
    }

    for (int i = posi + 1; i < size; i++)
    {
        ans.push_back(p[i]);
    }
    return ans;
}

string remoove(string up)
{
    int size = up.size();
    for (int i = 0; i < size; i++)
    {
        up[i] = up[i + 1];
    }
    return up;
}

vector<string> fun(string up, string p)
{

    vector<string> local;

    if (up[0] == '\0')
    {
        local.push_back(p);
        return local;
    }
    int size = p.size();
    string inuse = p;

    for (int i = 0; i <= size; i++)
    {
        p = inuse;
        p = rearrange(p, up[0], i);
        vector<string> ans = fun(remoove(up), p);
        int a = ans.size();
        for (int i = 0; i < a; i++)
        {
            local.push_back(ans[i]);
        }
    }
    return local;
}

int main()
{
    string up = "abc";
    string p;
    vector<string> an = fun(up, p);
    int size = an.size();
    for (int i = 0; i < size; i++)
    {
        cout << an[i] << " ";
    }

    return 0;
}
