/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 26:字符串最大跨距
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     有三个字符串S,S1,S2，其中，S长度不超过300，S1和S2的长度不超过10。
 *     想检测S1和S2是否同时在S中出现，且S1位于S2的左边，并在S中互不交叉（即，S1的右边界点在S2的左边界点的左侧）。
 *     计算满足上述条件的最大跨距（即，最大间隔距离：最右边的S2的起始点与最左边的S1的终止点之间的字符数目）。如果没有满足条件的S1，S2存在，则输出-1。
 *     例如，S = "abcd123ab888efghij45ef67kl", S1="ab", S2="ef"，其中，S1在S中出现了2次，S2也在S中出现了2次，
 *     最大跨距为：18。
 * 输入
 *     三个串：S, S1, S2，其间以逗号间隔（注意，S, S1, S2中均不含逗号和空格）；
 *
 * 输出
 *     S1和S2在S最大跨距；若在S中没有满足条件的S1和S2，则输出-1。
 *
 * 样例输入
 *     abcd123ab888efghij45ef67kl,ab,ef
 *
 * 样例输出
 *     18
 *
 * 提示
 *
 */

// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;
 
// int main(){
//     string str1,str2;
//     getline(cin, str1);

//     string s1, s2, s3;
//     for (int i= 0; i < str1.length(); i++) {
//         if (str1[i] == ',') {
//             s1 = str1.substr(0, i);
//             str2 = str1.substr(i + 1, str1.length() - i - 1);
//             break;
//         }
//     }
//     for (int i = 0; i < str2.length(); i++) {
//         if (str2[i] == ',') {
//             s2 = str2.substr(0, i);
//             s3 = str2.substr(i + 1, str2.length() - i - 1);
//             break;
//         }
//     }

//     int s2p=0, s3p=0;
//     if(s1.find(s2) == string::npos || s1.find(s3) == string::npos){
//         cout << -1 << endl;
//     }else{
//         s2p=s1.find_first_of(s2)+s2.length()-1;
//         s3p=s1.find_last_of(s3)-s3.length()+1;
//         if(s2p >= s3p){
//             cout << -1 << endl;
//         }else{
//             cout << s3p-s2p-1 << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[305], s1[15], s2[15];
int main()
{
    char c;
    int len = 0, len1 = 0, len2 = 0;
    while ((c = getchar()) && c != ',')
        s[len++] = c; // 输入字符数组s
    while ((c = getchar()) && c != ',')
        s1[len1++] = c; // 输入字符数组s1
    while ((c = getchar()) && c != EOF)
        s2[len2++] = c; // 输入字符数组s2
    int i, j = len2 - 2, k = 0, ans = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == s1[k])
            k++; 
        else
        {
            k = 0; 
            if (s[i] == s1[k])
                k++; 
        }
        if (k == len1)
        {                       
            ans = ans - (i + 1); 
            break; 
        }
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] == s2[j])
            j--; 
        else
        {
            j = len2 - 2; 
            if (s[i] == s2[j])
                j--;
        }
        if (j == 0)
        {                     
            ans = ans + (i - 1); 
            break;
        }
    }
    if (ans >= 0)
        cout << ans; 
    else
        cout << "-1"; 
    return 0;
}