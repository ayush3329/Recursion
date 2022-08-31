#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> check(vector<int> candidate, int target, vector<int> p, int pointer)
{
    vector<vector<int>> local;
    if (target == 0)
    {
        // cout<<target<<endl;
        local.push_back(p);
        return local;
    }
    else if (target < 0)
    {
        return local;
    }

    vector<int> temp = p;
    for (int i = pointer; i < candidate.size(); i++)
    {
        p = temp;
        p.push_back(candidate[i]);
        vector<vector<int>> tempo = check(candidate, target - candidate[i], p, i);
        int size = tempo.size();
        for (int j = 0; j < size; j++)
        {
            local.push_back(tempo[j]);
        }
    }
    return local;
}

int main()
{
    vector<int> candidate = {2, 3, 5};
    int target = 8;
    vector<int> p;
    vector<vector<int>> ans = check(candidate, target, p, 0);
    int size = ans.size();
    for (int i = 0; i < size; i++)
    {
        int size2 = ans[i].size();
        for (int j = 0; j < size2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
