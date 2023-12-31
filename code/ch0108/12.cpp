/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:变幻的矩阵
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     有一个N x N（N为奇数，且1 <= N <= 10）的矩阵，矩阵中的元素都是字符。这个矩阵可能会按照如下的几种变幻法则之一进行变幻（只会变幻一次）。
        现在给出一个原始的矩阵，和一个变幻后的矩阵，请编写一个程序，来判定原始矩阵是按照哪一种法则变幻为目标矩阵的。
        1. 按照顺时针方向旋转90度；

        如： 
        1 2 3        7 4 1
        4 5 6 变幻为  8 5 2
        7 8 9        9 6 3

        2. 按照逆时针方向旋转90度；

        如：
        1 2 3        3 6 9
        4 5 6 变幻为  2 5 8
        7 8 9        1 4 7 

        3. 中央元素不变（如下例中的 5），其他元素（如下例中的3）与“以中央元素为中心的对应元素”（如下例中的7）互换；

        如：
        1 2 3       9 8 7
        4 5 6 变幻为 6 5 4
        7 8 9       3 2 1 

        4. 保持原始矩阵，不变幻；


        5. 如果 从原始矩阵 到 目标矩阵 的变幻，不符合任何上述变幻，请输出5

 *
 * 输入
 *     第一行：矩阵每行/列元素的个数 N；
        第二行到第N+1行：原始矩阵，共N行，每行N个字符；
        第N+2行到第2*N+1行：目标矩阵，共N行，每行N个字符；
 *
 * 输出
 *     只有一行，从原始矩阵 到 目标矩阵 的所采取的 变幻法则的编号。
 *
 * 样例输入
 *     5
a b c d e
f g h i j
k l m n o
p q r s t
u v w x y
y x w v u
t s r q p
o n m l k
j i h g f
e d c b a
 *
 * 样例输出
 *     3
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;

int change_01(char a[11][11], char b[11][11], int n){
    int i,j;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++){
            if (a[i][j] != b[j][n - 1 - i]){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0){
        return 1;
    }else{
        return 0;
    }
}

int change_02(char a[11][11], char b[11][11], int n){
    int i,j;
    int flag = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] != b[n - 1 - j][i]){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0){
        return 2;
    }else{
        return 0;
    } 
}

int change_03(char a[11][11], char b[11][11], int n){
    int i,j;
    int flag = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] != b[n - 1 - i][n - 1 - j]){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0){
        return 3;
    }else{
        return 0;
    } 
}
int change_04(char a[11][11], char b[11][11], int n){
    int i,j;
    int flag = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] != b[i][j]){
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0){
        return 4;
    }else{
        return 0;
    } 
}
int main(){
    int n;
    cin >> n;
    char a[11][11], b[11][11];
    
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
            
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> b[i][j];
    
    int flag = 0;

    flag = change_01(a, b, n)+change_02(a,b,n)+change_03(a,b,n)+change_04(a,b,n);

    if(flag==0){
        cout << 5 << endl;
    }else{
        cout << flag << endl;
    }

    return 0;
}