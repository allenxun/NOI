/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 08:白细胞计数
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     医院采样了某临床病例治疗期间的白细胞数量样本n份，用于分析某种新抗生素对该病例的治疗效果。为了降低分析误差，要先从这n份样本中去除一个数值最大的
        样本和一个数值最小的样本，然后将剩余n-2个有效样本的平均值作为分析指标。同时，为了观察该抗生素的疗效是否稳定，还要给出该平均值的误差，即所有有
        效样本（即不包括已扣除的两个样本）与该平均值之差的绝对值的最大值。


        现在请你编写程序，根据提供的n个样本值，计算出该病例的平均白细胞数量和对应的误差。

 *
 * 输入
 *     输入的第一行是一个正整数n（2 < n = 300），表明共有n个样本。
    以下共有n行，每行为一个浮点数，为对应的白细胞数量，其单位为10^9/L。数与数之间以一个空格分开。
 *
 * 输出
 *     输出为两个浮点数，中间以一个空格分开。分别为平均白细胞数量和对应的误差，单位也是10^9/L。计算结果需保留到小数点后2位。
 *
 * 样例输入
 *     5
12.0
13.0
11.0
9.0
10.0
 *
 * 样例输出
 *     11.00 1.00
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <iomanip>
#include <cfloat>
#include <cmath>

using namespace std;
 
int main(){
    int n;
    cin >> n;
    double a[n];
    double max ,min,sum=0;
    int maxflag=0, minflag=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i==0){
            max = a[i];
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
            maxflag = i;
        }
        if (a[i] < min){
            min = a[i];
            minflag = i;
        }
        sum=sum+a[i];
    }

    sum = sum - max - min;

    double avg = sum / (n - 2);

    double err = 0;
    for (int i = 0; i < n; i++){
        double temp = 0;
       
        if (i == maxflag || i == minflag)
        {
            continue;
        }
        if (a[i] != 0){
            if (a[i] > avg){
                temp = a[i] - avg;
            }
            else{
                temp = avg - a[i];
            }
        }
        if(err<temp){
            err = temp;
        }
    }
    cout << fixed << setprecision(2) << avg << " " << err << endl;
    return 0;
}