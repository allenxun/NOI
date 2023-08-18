/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:加密的病历单
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。
 *      在药房实习期间，小英扎实的专业基础获得了医生的一致好评，得知小英在计算概论中取得过好成绩后，主任又额外交给她一项任务，解密抗战时期被加密过的一些伤员的名单。
 *      经过研究，小英发现了如下加密规律（括号中是一个“原文 -> 密文”的例子）
 *          1.  原文中所有的字符都在字母表中被循环左移了三个位置;（dec  -> abz）
 *          2.  逆序存储;（abcd -> dcba ）
 *          3.  大小写反转（abXY -> ABxy）

 *
 * 输入
 *     一个加密的字符串。（长度小于50且只包含大小写字母）
 *
 * 输出
 *     输出解密后的字符串。
 *
 * 样例输入
 *     GSOOWFASOq
 *
 * 样例输出
 *     Trvdizrrvj
 *
 * 提示
 *
 */

#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s1;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            s1[i] = 'A' + (s1[i] - 'a' + 3) % 26;
        }else if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = 'a' + (s1[i] - 'A' + 3) % 26;
        }
    }
    for (int i = 0; i < s1.length() / 2; i++){
        char temp = s1[i];
        s1[i] = s1[s1.length() - 1 - i];
        s1[s1.length() - 1 - i] = temp;
    }
    cout << s1 << endl;
    return 0;
}