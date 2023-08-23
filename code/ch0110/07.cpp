/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 07:合影效果
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     小云和朋友们去爬香山，为美丽的景色所陶醉，想合影留念。
 *      如果他们站成一排，男生全部在左（从拍照者的角度），并按照从矮到高的顺序从左到右排，女生全部在右，并按照从高到矮的顺序从左到右排，
 *      请问他们合影的效果是什么样的（所有人的身高都不同）？

 *
 * 输入
 *     第一行是人数n（2 <= n <= 40，且至少有1个男生和1个女生）。
        后面紧跟n行，每行输入一个人的性别（男male或女female）和身高（浮点数，单位米），两个数据之间以空格分隔。
 *
 * 输出
 *     n个浮点数，模拟站好队后，拍照者眼中从左到右每个人的身高。每个浮点数需保留到小数点后2位，相邻两个数之间用单个空格隔开。
 *
 * 样例输入
 *     6
male 1.72
male 1.78
female 1.61
male 1.65
female 1.70
female 1.56
 *
 * 样例输出
 *     1.65 1.72 1.78 1.70 1.61 1.56
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct student
{
    string sex;
    float height;
}stu[41];

bool operator<(student a, student b){
    if (a.sex.compare("male") == 0 && b.sex.compare("female") == 0 )
        return true;
    else if (a.sex.compare("female") == 0 && b.sex.compare("male") == 0)
        return false;
    else
    {
        if (a.sex.compare("male") == 0 && b.sex.compare("male") == 0)
            return a.height < b.height;
        else
            return a.height > b.height;
    }
}


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> stu[i].sex >> stu[i].height;
    }
    sort(stu,stu+n);
    for (int i = 0; i < n;i++){
        cout << fixed << setprecision(2) << stu[i].height << " ";
    }
        return 0;
}