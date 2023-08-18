/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 35:字符串的展开
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *      在初赛普及组的“阅读程序写结果”的问题中，我们曾给出一个字符串展开的例子：
 *      如果在输入的字符串中，含有类似于“d-h”或者“4-8”的字串，我们就把它当作一种简写，输出时，用连续递增的字母获数字串替代其中的减号，
 *      即，将上面两个子串分别输出为“defgh”和“45678”。在本题中，我们通过增加一些参数的设置，使字符串的展开更为灵活。具体约定如下：

        (1) 遇到下面的情况需要做字符串的展开：在输入的字符串中，出现了减号“-”，减号两侧同为小写字母或同为数字，且按照ASCII码的顺序，减号右边的字符严格大于左边的字符。

        (2) 参数p1：展开方式。p1=1时，对于字母子串，填充小写字母；p1=2时，对于字母子串，填充大写字母。这两种情况下数字子串的填充方式相同。p1=3时，不论是字母子串还是数字字串，都用与要填充的字母个数相同的星号“*”来填充。

        (3) 参数p2：填充字符的重复个数。p2=k表示同一个字符要连续填充k个。例如，当p2=3时，子串“d-h”应扩展为“deeefffgggh”。减号两边的字符不变。

        (4) 参数p3：是否改为逆序：p3=1表示维持原来顺序，p3=2表示采用逆序输出，注意这时候仍然不包括减号两端的字符。例如当p1=1、p2=2、p3=2时，子串“d-h”应扩展为“dggffeeh”。

        (5) 如果减号右边的字符恰好是左边字符的后继，只删除中间的减号，例如：“d-e”应输出为“de”，“3-4”应输出为“34”。如果减号右边的字符按照ASCII码的顺序小于或等于左边字符，输出时，要保留中间的减号，例如：“d-d”应输出为“d-d”，“3-1”应输出为“3-1”。
 *
 * 输入
 *     包括两行：
        第1行为用空格隔开的3个正整数，一次表示参数p1，p2，p3。
        第2行为一行字符串，仅由数字、小写字母和减号“-”组成。行首和行末均无空格。

        40%的数据满足：字符串长度不超过5；
        100%的数据满足：1<=p1<=3，1<=p2<=8，1<=p3<=2。字符串长度不超过100。
 *
 * 输出
 *     只有一行，为展开后的字符串。
 *
 * 样例输入
 *     样例 #1：
        1 2 1
        abcs-w1234-9s-4zz

        样例 #2：
        2 3 2
        a-d-d

        样例 #3：
        3 4 2
        di-jkstra2-6

 *
 * 样例输出
 *  样例 #1：
        abcsttuuvvw1234556677889s-4zz

    样例 #2：
        aCCCBBBd-d

    样例 #3：
        dijkstra2************6
 *
 * 提示
 *
 */

#include <iostream>
#include <cstring>
using namespace std;
bool isNumber(char ch)
{
    return ch >= '0' && ch <= '9';
}
bool isLetter(char ch)
{
    return ch >= 'a' && ch <= 'z';
}
void print(char ch, int p1, int p2)
{
    for (int k = 0; k < p2; k++)
    { 
        if (p1 == 3)
            cout << "*";
        else if (isNumber(ch) || p1 == 1)
            cout << ch;
        else
            cout << (char)(ch + ('A' - 'a'));
    }
}
int main()
{
    int p1, p2, p3, i, j;
    char left, right;
    string s;
    cin >> p1 >> p2 >> p3 >> s;
    int size = s.size();
    for (i = 0; i < size; i++)
    {
        if (s[i] == '-')
        {
            left = s[i - 1];
            right = s[i + 1];
            if (left >= right || !((isNumber(left) && isNumber(right)) || (isLetter(left) && isLetter(right))))
                cout << "-";
            else if (left + 1 < right)
            {
                if (p3 == 1)
                { 
                    for (j = left + 1; j < right; j++)
                    { 
                        print(j, p1, p2);
                    }
                }
                else
                { 
                    for (j = right - 1; j > left; j--)
                    { 
                        print(j, p1, p2);
                    }
                }
            }
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}