// Obstacle
#include <bits/stdc++.h>
using namespace std;

void check(string p, int row, int col, int r, int c, int not_row, int not_col, char arr[3][3])
{
    if (arr[r][c] == 'O')
    {
        return;
    }
    if (r == row - 1 && c == col - 1)
    {
        cout << p << " ";
        return;
    }
    bool flag = 0;
    if (arr[r][c] == 'O')
    {
        return;
    }
    if (r < row && c < col)
    {
        if (r == row - 1)
        {
            flag = 1;
            check(p + 'R', row, col, r, c + 1, not_row, not_col, arr);
        }
        else
        {
            check(p + 'R', row, col, r, c + 1, not_row, not_col, arr);
        }
        if (flag == 0)
        {
            if (c == col - 1)
            {
                check(p + 'D', row, col, r + 1, c, not_row, not_col, arr);
                flag = 1;
            }
            else
            {
                check(p + 'D', row, col, r + 1, c, not_row, not_col, arr);
            }
        }
        if (r < row - 1 && c < col - 1)
        {
            check(p + 'd', row, col, r + 1, c + 1, not_row, not_col, arr);
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
    char arr[3][3] = {{'A', 'A', 'O'}, {'A', 'O', 'A'}, {'A', 'A', 'A'}};
    check(p, 3, 3, 0, 0, 1, 1, arr);

    return 0;
}