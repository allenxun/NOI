/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 45:金币
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；之后两天（第二天和第三天）里，每天收到两枚金币；
 *     之后三天（第四、五、六天）里，每天收到三枚金币；
 *     之后四天（第七、八、九、十天）里，每天收到四枚金币……这种工资发放模式会一直这样延续下去：
 *     当连续N天每天收到N枚金币后，骑士会在之后的连续N+1天里，每天收到N+1枚金币（N为任意正整数）。
 *     你需要编写一个程序，确定从第一天开始的给定天数内，骑士一共获得了多少金币。
 *
 * 输入
 *     一个整数（范围1到10000），表示天数。
 *
 * 输出
 *     骑士获得的金币数。
 *
 * 样例输入
 *     6
 *
 * 样例输出
 *     14
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long sum = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i;j++){
            sum += i;
            count++;
            if(count == n){
                cout << sum << endl;
                return 0;
            }
        }
    }
}