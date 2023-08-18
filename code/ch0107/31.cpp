/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 31:字符串p型编码
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个完全由数字字符（'0','1','2',…,'9'）构成的字符串str，请写出str的p型编码串。
 *      例如：字符串122344111可被描述为"1个1、2个2、1个3、2个4、3个1"，因此我们说122344111的p型编码串为1122132431；
 *      类似的道理，编码串101可以用来描述1111111111；00000000000可描述为"11个0"，因此它的p型编码串即为110；
 *      100200300可描述为"1个1、2个0、1个2、2个0、1个3、2个0"，因此它的p型编码串为112012201320。

 *
 * 输入
 *     输入仅一行，包含字符串str。每一行字符串最多包含1000个数字字符。
 *
 * 输出
 *     输出该字符串对应的p型编码串。
 *
 * 样例输入
 *     122344111

 *
 * 样例输出
 *     1122132431

 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    getline(cin, str);
    int count = 1;
    int i;
    for (i = 0; i < str.length()-1;i++){
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            cout << count << str[i];
            count = 1;
        }
    }
    cout << count << str[i] << endl;
}