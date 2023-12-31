/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 08:病人排队
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     病人登记看病，编写一个程序，将登记的病人按照以下原则排出看病的先后顺序：

1. 老年人（年龄>= 60岁）比非老年人优先看病。

2. 老年人按年龄从大到小的顺序看病，年龄相同的按登记的先后顺序排序。

3. 非老年人按登记的先后顺序看病。
 *
 * 输入
 *     第1行，输入一个小于100的正整数，表示病人的个数；
        后面按照病人登记的先后顺序，每行输入一个病人的信息，包括：一个长度小于10的字符串表示病人的ID（每个病人的ID各不相同且只含数字和字母），一个整数表示病人的年龄，中间用单个空格隔开。
 *
 * 输出
 *     按排好的看病顺序输出病人的ID，每行一个。
 *
 * 样例输入
 *     5
021075 40
004003 15
010158 67
021033 75
102012 30
 *
 * 样例输出
 *     021033
010158
021075
004003
102012
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
 
struct people{
    string id;
    int age;
    int order;
}peo[101];

bool operator<(people a, people b){
    if(a.age >= 60 && b.age < 60){
        return true;
    }else if(a.age < 60 && b.age >= 60){
        return false;
    }else{
        if(a.age>=60&&b.age>=60)
            return a.age > b.age;
        else
            return a.order < b.order;
    }
}

int  main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> peo[i].id >> peo[i].age;
        peo[i].order = i;
    }

    stable_sort(peo, peo + n);

    for (int i = 0; i < n; i++)
    {
        cout << peo[i].id << endl;
    }

    return 0;
}


