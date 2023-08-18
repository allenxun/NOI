/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 05:计算鞍点
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
        鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
        例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
        11 3 5 6 9
        12 4 7 8 10
        10 5 6 9 11
        8  6 4 7 2
        15 10 11 20 25

 *
 * 输入
 *     输入包含一个5行5列的矩阵
 *
 * 输出
 *     如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
 *
 * 样例输入
 *     11 3 5 6 9
        12 4 7 8 10
        10 5 6 9 11
        8  6 4 7 2
        15 10 11 20 25
 *
 * 样例输出
 *     4 1 8
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int a[5][5];
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 5;j++){
            cin >> a[i][j];
        }
    }
    int max[5], min[5], col[5]={0};
    for (int i = 0; i < 5; i++)
    {
        max[i] = a[i][0];
        min[i] = a[0][i];
        for (int j = 0; j < 5;j++){
            if(a[i][j]>max[i]){
                max[i] = a[i][j];
                col[i] = j;
            }
        }
        for (int j = 0; j < 5;j++){
            if(a[j][i]<min[i]){
                min[i] = a[j][i];
            }
        }
    }

    for(int i=0;i<5;i++){
        if(max[i]==min[col[i]]){
            cout << i + 1 << " " << col[i] + 1 << " " << max[i] << endl;
            return 0;
        }
    }
    cout << "not found" << endl;
    return 0;
}

