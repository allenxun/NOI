/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 15:整理药名
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     医生在书写药品名的时候经常不注意大小写，格式比较混乱。现要求你写一个程序将医生书写混乱的药品名整理成统一规范的格式，即药品名的第一个字符如果是字母要大写，其他字母小写。如将ASPIRIN、aspirin整理成Aspirin。

 *
 * 输入
 *     第一行一个数字n，表示有n个药品名要整理，n不超过100。
        接下来n行，每行一个单词，长度不超过20，表示医生手书的药品名。药品名由字母、数字和-组成。
 *
 * 输出
 *     n行，每行一个单词，对应输入的药品名的规范写法。
 *
 * 样例输入
 *     4
        AspiRin
        cisapride
        2-PENICILLIN
        Cefradine-6
 *
 * 样例输出
 *     Aspirin
        Cisapride
        2-penicillin
        Cefradine-6
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        string s1;
        cin >> s1;
        if (s1[0] >= 'a' && s1[0] <= 'z'){
            s1[0] = 'A' + (s1[0] - 'a');
        }
        for (int j = 1; j < s1.length(); j++){
            if (s1[j] >= 'A' && s1[j] <= 'Z'){
                s1[j] = 'a' + (s1[j] - 'A');
            }
        }
        cout << s1 << endl;
    }
    return 0;
}