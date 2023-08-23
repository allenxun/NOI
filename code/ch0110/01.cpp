/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 01:谁考了第k名
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求考第k名学生的学号和成绩。

 *
 * 输入
 *     第一行有两个整数，分别是学生的人数n（1≤n≤100），和求第k名学生的k（1≤k≤n）。
        其后有n行数据，每行包括一个学号（整数）和一个成绩（浮点数），中间用一个空格分隔。
 *
 * 输出
 *     输出第k名学生的学号和成绩，中间用空格分隔。（注：请用%g输出成绩）
 *
 * 样例输入
 *     5 3
90788001 67.8
90788002 90.3
90788003 61
90788004 68.4
90788005 73.9
 *
 * 样例输出
 *     90788004 68.4
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
 
struct Student{
    string id;
    float score;
}stu[101];

int main(){
    int n, k;
    

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].id >> stu[i].score;
    }

    stable_sort(stu,stu+n,[](Student a, Student b){return a.score > b.score;});

    cout << stu[k-1].id << " " << stu[k-1].score << endl;

    return 0;
}