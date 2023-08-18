/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 34:回文子串
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个字符串，输出所有长度至少为2的回文子串。 回文子串即从左往右输出和从右往左输出结果是一样的字符串，比如：abba，cccdeedccc都是回文字符串。

 *
 * 输入
 *     一个字符串，由字母或数字组成。长度500以内。
 *
 * 输出
 *     输出所有的回文子串，每个子串一行。
        子串长度小的优先输出，若长度相等，则出现位置靠左的优先输出。
 *
 * 样例输入
 *     123321125775165561
 *
 * 样例输出
 *     33
        11
        77
        55
        2332
        2112
        5775
        6556
        123321
        165561
 *
 * 提示
 *      
 */
 
// #include <iostream>
// #include <string>
// using namespace std;
 
// int main(){
//     string str;
//     getline(cin, str);
//     string result;
//     for (int i = 2; i < str.length() - 1; i++)
//     {
//         for (int j = 0; j < str.length();j++){
//             string temp = str.substr(j, i);
//             int k;
//             for (k = 0;k<temp.length()/2;k++){
//                 if (temp[k] != temp[temp.length() - 1 - k])
//                     break;
//             }
//             if (k == temp.length() / 2 && temp.length()>=2 && result.find(temp)==-1){
//                 result = result + temp + "\n";
//             }
//         }
//     }
//     cout << result;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
string s;
bool isPalin(string str) 
{
    string s1(str);               
    reverse(s1.begin(), s1.end()); 
    return str == s1;            
}
int main()
{
    cin >> s;
    int len = s.length();
    for (int l = 2; l <= len; ++l) 
    {
        for (int i = 0; i <= len - l; ++i)
        {
            string sub = s.substr(i, l);
            if (isPalin(sub))
                cout << sub << endl;
        }
    }
    return 0;
}
