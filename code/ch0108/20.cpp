/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 20:反反复复
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     Mo和Larry发明了一种信息加密方法。他们首先决定好列数，然后将信息（只包含字母）从上往下依次填入各列，并在末尾补充一些随机字母使其成为一个完整的字母矩阵。
 *      例如，若信息是“There's no place like home on a snowy night”并且有5列，Mo会写成：
        t o i o y
        h p k n n
        e l e a i
        r a h s g
        e c o n h
        s e m o t
        n l e w x
        注意Mo只会填入字母，且全部是小写形式。在这个例子中，Mo用字母“x”填充了信息使之成为一个完整的矩阵，当然他使用任何字母都是可以的。
        Mo根据这个矩阵重写信息：首先从左到右写下第一行，然后从右到左写下第二行，再从左到右写下第三行……以此左右交替地从上到下写下各行字母，形成新的字符串。
        这样，例子中的信息就被加密为：toioynnkpheleaigshareconhtomesnlewx。你的工作是帮助Larry从加密后的信息中还原出原始信息（包括填充的字母）。
 *
 * 输入
 *     第一行包含一个整数（范围2到20），表示使用的列数。
        第二行是一个长度不超过200的字符串。
 *
 * 输出
 *     一行，即原始信息。
 *
 * 样例输入
 *     5
        toioynnkpheleaigshareconhtomesnlewx
 *
 * 样例输出
 *     theresnoplacelikehomeonasnowynightx
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <cstring>

using namespace std;
 
int main(){
    int n;
    char str[230];
    cin >> n;
    cin >> str;
    int len = strlen(str);

    int m = len / n;
    char a[30][30],b[30][30];

    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            a[i][j] = str[i * n + j];
        }
    }

    for (int i = 0; i < m;i++){
        if(i%2==1){
            for (int j = n-1; j >=0;j--){
                b[i][n-j-1] = a[i][j];
            }
        }else{
            for (int j = 0; j < n;j++){
                b[i][j] = a[i][j];
            }
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << b[j][i] ;
        }
    }
    return 0;
}