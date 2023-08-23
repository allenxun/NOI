/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 04:奖学金
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     某小学最近得到了一笔赞助，打算拿出其中一部分为学习成绩优秀的前5名学生发奖学金。
 *      期末，每个学生都有3门课的成绩:语文、数学、英语。先按总分从高到低排序，如果两个同学总分相同，再按语文成绩从高到低排序，如果两个同学总分和语文成绩都相同，那么规定学号小的同学排在前面，
 *      这样，每个学生的排序是唯一确定的。
 *      任务：先根据输入的3门课的成绩计算总分，然后按上述规则排序，最后按排名顺序输出前五名名学生的学号和总分。
 *      注意，在前5名同学中，每个人的奖学金都不相同，因此，你必须严格按上述规则排序。
 *      例如，在某个正确答案中，如果前两行的输出数据(每行输出两个数:学号、总分) 是: 
 *          7 279
 *          5 279
 *      这两行数据的含义是:总分最高的两个同学的学号依次是7号、5号。
 *      这两名同学的总分都是 279 (总分等于输入的语文、数学、英语三科成绩之和) ，但学号为7的学生语文成绩更高一些。
 *      如果你的前两名的输出数据是: 
 *          5 279
 *          7 279
 *      则按输出错误处理，不能得分。

 *
 * 输入
 *     包含n+1行: 

        第1行为一个正整数n，表示该校参加评选的学生人数。 

        第2到n+1行，每行有3个用空格隔开的数字，每个数字都在0到100之间。第j行的3个数字依次表示学号为 j-1 的学生的语文、数学、英语的成绩。每个学生的学号按照输入顺序编号为1~n (恰好是输入数据的行号减1)。 

        所给的数据都是正确的，不必检验。

        50%的数据满足:各学生的总成绩各不相同；
        100%的数据满足: 6<=n<=300。
 *
 * 输出
 *     共有5行，每行是两个用空格隔开的正整数，依次表示前5名学生的学号和总分。
 *
 * 样例输入
 *     样例 #1：
6
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98

样例 #2：
8
80 89 89 
88 98 78
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98


 *
 * 样例输出
 *     样例 #1：
6 265
4 264
3 258
2 244
1 237

样例 #2：
8 265
2 264
6 264
1 258
5 258

 *
 * 提示
 *      
 */
 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
struct student
{
    int id;
    int yuwen;
    int shuxue;
    int yingyu;
    int sum;
} stu[301];

bool operator<(student a, student b)
{
    if(a.sum != b.sum){
        return a.sum > b.sum;
    }else{
        if(a.yuwen != b.yuwen){
            return a.yuwen > b.yuwen;
        }else{
            return a.id < b.id;
        }
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> stu[i].yuwen >> stu[i].shuxue >> stu[i].yingyu;
        stu[i].id = i;
        stu[i].sum = stu[i].yuwen + stu[i].shuxue + stu[i].yingyu;
    }

    sort(stu+1, stu+n+1);

    for (int i = 1; i <= 5; i++)
    {
        cout << stu[i].id << " " << stu[i].sum << endl;
    }

    return 0;
}