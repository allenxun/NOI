/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 25:螺旋加密
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     Chip和Dale发明了一种文本信息加密技术。他们事先秘密约定好矩阵的行数和列数。接着，将字符按如下方式编码：

            1. 所有文本只包含大写字母和空格。

            2. 每个字符均赋予一个数值：空格=0，A=1，B=2，……，Y=25，Z=26。

     按照下图所示的方式，将每个字符对应数值的5位二进制数依次填入矩阵。最后用0将矩阵补充完整。例如，对于信息“ACM”，行列数均为4时，矩阵将被填充为：
        0 -> 0 -> 0 -> 0 
                       |
        1 -> 1 -> 0    1
        |         |    |
        0    0 <- 1    0
        |              |
        1 <- 1 <- 0 <- 0 
        A=00001 C=00011 M=01101
     将矩阵中的数字按行连起来形成数字串，完成加密。例子中的信息最终会被加密为：0000110100101100。

 *
 * 输入
 *     一行。首先是两个整数R(1≤R≤20)和C(1≤C≤20)，表示行数和列数。之后是一个只包含大写字母和空格的字符串。字符串的长度≤(R*C)/5。R和C之间以及C和字符串之间均用单个空格隔开。
 *
 * 输出
 *     一行，为加密后的二进制串。注意你可能需要用0将矩阵补充完整。
 *
 * 样例输入
 *     4 4 ACM
 *
 * 样例输出
 *     0000110100101100
 *
 * 提示
 *      
 */
 
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int n,m, nextx = 0, nexty = 0;
int a[25][25];
int dx[5] = {0,1,0,-1}, 
    dy[5] = {1,0,-1,0};

int main() {
    string s; 
    cin >> n >> m;
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) a[i][j] = -1;
    getline (cin, s);
    int cnt = 0, y[10];
    int d = 0; 
    for (int i=1;i<s.length();i++) {
        
        int x;
        if (s[i] == ' ') x = 0;
        else x = s[i] - 'A' + 1;
        for (int j=0;j<5;j++) {
            y[j] = x % 2;
            x /= 2;
        }
        
        for (int j=4;j>=0;j--) {
            a[nextx][nexty] = y[j];
        
            int nextx1 = nextx + dx[d];
            int nexty1 = nexty + dy[d];
        
            if (nextx1 < 0 || nextx1 >= n || nexty1 < 0 || nexty1 >=m || a[nextx1][nexty1] != -1) {
                d = (d+1) % 4;
                nextx = nextx + dx[d];
                nexty = nexty + dy[d];
            } else {
                nextx = nextx1;
                nexty = nexty1;
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (a[i][j] == -1) cout << 0;
            else cout << a[i][j];
        }
    }
}