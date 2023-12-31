/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 10:找最大数序列
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     输入n行，每行不超过100个无符号整数，无符号数不超过4位。请输出最大整数以及最大整数所在的行号（行号从1开始）。如果该数据在多个行中出现，则按从小到大输出相应行号，行号之间以一个逗号分开。

 *
 * 输入
 *     一行输入一个正整数n（n <= 30）。
之后的n行，每行包含不超过100个无符号整数，整数之间以一个逗号分开。
 *
 * 输出
 *     第一行：最大整数；
第二行：最大整数所在的行编号，逗号间隔。
 *
 * 样例输入
 *     6
1,3,5,23,6,8,14
20,22,13,4,16
23,12,17,22
2,6,10,9,3,6
22,21,20,8,10
22,1,23,6,8,19,23
 *
 * 样例输出
 *     23
1,3,6
 *
 * 提示
 *      
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void SplitString(const string &s, vector<string> &v, const string &c)
{
    string::size_type pos1, pos2;
    pos2 = s.find(c);
    pos1 = 0;
    while (string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2 - pos1));
        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if (pos1 != s.length())
        v.push_back(s.substr(pos1));
}
int main()
{
    string line;
    int n, i, j, x, max = 0, a[31];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> line;
        vector<string> v;
        SplitString(line, v, ",");
        int maxline = 0;
        for (j = 0; j < v.size(); j++)
        {
            x = std::stoi(v[j]);
            if (x > maxline)
                maxline = x; 
            if (x > max)
                max = x; 
        }
        a[i] = maxline;
    }
    cout << max << endl;
    bool first = true;
    for (i = 1; i <= n; i++)
    {
        if (a[i] == max)
        {
            if (!first)
                cout << ",";
            cout << i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}