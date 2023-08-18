/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 06:图像相似度
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。
        说明：若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点。两幅图像的相似度定义为相同像素点数占总像素点数的百分比。
 *
 * 输入
 *     第一行包含两个整数m和n，表示图像的行数和列数，中间用单个空格隔开。1 <= m <= 100, 1 <= n <= 100。
    之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色。相邻两个数之间用单个空格隔开。
    之后m行，每行n个整数0或1，表示第二幅黑白图像上各像素点的颜色。相邻两个数之间用单个空格隔开。
 *
 * 输出
 *     一个实数，表示相似度（以百分比的形式给出），精确到小数点后两位。
 *
 * 样例输入
 *     3 3
        1 0 1
        0 0 1
        1 1 0
        1 1 0
        0 0 1
        0 0 1

 *
 * 样例输出
 *     44.44
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n], b[m][n];
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            cin >> b[i][j];
        }
    }

    int sum = m * n;
    int count = 0;
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            if (a[i][j] == b[i][j]){
                count++;
            }
        }
    }
    double result = (double)count / sum * 100;
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}

