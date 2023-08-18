/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 04:错误探测
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给定n*n由0和1组成的矩阵，如果矩阵的每一行和每一列的1的数量都是偶数，则认为符合条件。
        你的任务就是检测矩阵是否符合条件，或者在仅改变一个矩阵元素的情况下能否符合条件。
        "改变矩阵元素"的操作定义为0变成1或者1变成0。
 *
 * 输入
 *     输入n + 1行，第1行为矩阵的大小n(0 < n < 100)，以下n行为矩阵的每一行的元素，元素之间以一个空格分开。
 *
 * 输出
 *     如果矩阵符合条件，则输出OK；
        如果矩阵仅改变一个矩阵元素就能符合条件，则输出需要改变的元素所在的行号和列号，以一个空格分开。
        如果不符合以上两条，输出Corrupt。
 *
 * 样例输入
 *     样例输入1
        4
        1 0 1 0
        0 0 0 0
        1 1 1 1
        0 1 0 1

        样例输入2
        4
        1 0 1 0
        0 0 1 0
        1 1 1 1
        0 1 0 1

        样例输入3
        4
        1 0 1 0
        0 1 1 0
        1 1 1 1
        0 1 0 1
 *
 * 样例输出
 *     样例输出1
        OK

        样例输出2
        2 3

        样例输出3
        Corrupt
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

bool isright(int *a, int n){
    bool flag= true;
    for (int i = 0; i < n;i++){
        int sum = 0;
        for (int j = 0; j < n;j++){
            sum += a[i * n + j];
        }
        if(sum%2!=0){
            flag = false;
        }
        sum = 0;
        for (int j = 0; j < n;j++){
            sum += a[j * n + i];
        }
        if (sum % 2 != 0)
        {
            flag = false;
        }
    }
    return flag;
}

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    
    if(isright(*a,n)){
        cout << "OK" << endl;
        return 0;
    }else{
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                a[i][j] = !a[i][j];
                if(isright(*a,n)){
                    cout << i + 1 << " " << j + 1 << endl;
                    return 0;
                }
                a[i][j] = !a[i][j];
            }
        }
        cout << "Corrupt" << endl;
    }
    return 0;
}