/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 12:骑车与走路
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     在北大校园里,没有自行车,上课办事会很不方便.但实际上,并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间.
 *     假设找到自行车,开锁并车上自行车的时间为27秒;停车锁车的时间为23秒;步行每秒行走1.2米,骑车每秒行走3.0米。
 *     请判断走不同的距离去办事,是骑车快还是走路快。
 *
 * 输入
 *     输入一行，包含一个整数，表示一次办事要行走的距离,单位为米。
 *
 * 输出
 *     输出一行,如果骑车快,输出一行"Bike";如果走路快,输出一行"Walk";如果一样快,输出一行"All"。
 *
 * 样例输入
 *     120
 *
 * 样例输出
 *     Bike
 *
 * 提示
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double walk = n / 1.2;
    double bike = 27 + 23 + n / 3.0;
    if (walk < bike)
    {
        cout << "Walk" << endl;
    }
    else if (walk > bike)
    {
        cout << "Bike" << endl;
    }
    else
    {
        cout << "All" << endl;
    }
    return 0;
}