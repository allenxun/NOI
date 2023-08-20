/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 23:二维数组回形遍历
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按回形从外向内顺时针顺序遍历整个数组。
 *
 * 输入
 *     输入的第一行上有两个整数，依次为row和col。
       余下有row行，每行包含col个整数，构成一个二维整数数组。
       （注：输入的row和col保证0 < row < 100, 0 < col < 100）
 *
 * 输出
 *     按遍历顺序输出每个整数。每个整数占一行。
 *
 * 样例输入
 *     4 4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
 *
 * 样例输出
 *     1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int row, col, i, j, k = 1, size = 0, a[100][100] = {0};
    cin >> row >> col;
    for (i = 0; i < row; i++){
        for (j = 0; j < col;j++){
            cin >> a[i][j];
        }
    }

    i = 0;
    j = 0;
    
    size = row * col;
    while (size > 0){
        while (j < col && a[i][j] != -1){
            cout << a[i][j] << endl;
            a[i][j] = -1;
            j++;
            size--;
        }
        j--;
        i++;
        while (i < row && a[i][j] != -1){
            cout << a[i][j] << endl;
            a[i][j] = -1;
            i++;
            size--;
        }
        i--;
        j--;
        while (j >= 0 && a[i][j] != -1){
            cout << a[i][j] << endl;
            a[i][j] = -1;
            j--;
            size--;
        }
        j++;
        i--;
        while (i >= 0 && a[i][j] != -1){
            cout << a[i][j] << endl;
            a[i][j] = -1;
            i--;
            size--;
        }
        i++;
        j++;
    }
    return 0;
}