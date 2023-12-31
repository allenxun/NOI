/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 06:笨小猴
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     笨小猴的词汇量很小，所以每次做英语选择题的时候都很头疼。
 *      但是他找到了一种方法，经试验证明，用这种方法去选择选项的时候选对的几率非常大！
 *      这种方法的具体描述如下：假设maxn是单词中出现次数最多的字母的出现次数，minn是单词中出现次数最少的字母的出现次数，如果maxn-minn是一个质数，那么笨小猴就认为这是个Lucky Word，
 *      这样的单词很可能就是正确的答案。

 *
 * 输入
 *     只有一行，是一个单词，其中只可能出现小写字母，并且长度小于100。
 *
 * 输出
 *     共两行，第一行是一个字符串，假设输入的的单词是Lucky Word，那么输出“Lucky Word”，否则输出“No Answer”；
        第二行是一个整数，如果输入单词是Lucky Word，输出maxn-minn的值，否则输出0。
 *
 * 样例输入
 *     样例 #1：
        error

        样例 #2：
        olympic
 *
 * 样例输出
 *     样例 #1：
        Lucky Word
        2

        样例 #2：
        No Answer
        0
 *
 * 提示
 *     单词error中出现最多的字母r出现了3次，出现次数最少的字母出现了1次，3-1=2，2是质数。
        单词olympic中出现最多的字母i出现了2次，出现次数最少的字母出现了1次，2-1=1，1不是质数。
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    int i, len = sqrt(n);
    for (i = 2; i < len; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    int count[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }

    int max = 0, min = 100;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
        if (count[i] < min && count[i] != 0)
        {
            min = count[i];
        }
    }
    int n=max-min;

    if (n > 1 && isPrime(n))
    {
        cout << "Lucky Word" << endl;
        cout << max - min << endl;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }

    return 0;
}