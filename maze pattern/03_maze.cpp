#include <bits/stdc++.h>
using namespace std;

void check(string p, int row, int col, int r, int c)
{

    if (r == row - 1 && c == col - 1)
    {
        cout << p << " ";
        return;
    }
    bool flag = 0;
    if (r < row && c < col)
    {
        if (r == row - 1)
        {
            flag = 1;
            check(p + 'R', row, col, r, c + 1);
        }
        else
        {
            check(p + 'R', row, col, r, c + 1);
        }

        if (flag == 0)
        {
            if (c == col - 1)
            {
                check(p + 'D', row, col, r + 1, c);
                flag = 1;
            }
            else
            {
                check(p + 'D', row, col, r + 1, c);
            }
        }
        if (r < row - 1 && c < col - 1)
        {
            check(p + 'd', row, col, r + 1, c + 1);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    string p;
    check(p, 3, 3, 0, 0);

    return 0;
}
