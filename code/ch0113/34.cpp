/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 34:确定进制
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     <span style="white-space: normal;">6 * 9 = 42 对于十进制来说是错误的，但是对于13进制来说是正确的。即, 6<sub>(13)</sub>* 9<sub>(13)</sub>= 42<sub>(13)</sub>， 而 42<sub>(13)</sub>= 4 * 13<sup>1</sup>+ 2 * 13<sup>0</sup>= 54<sub>(10)</sub>。</span><span style="white-space: normal;">你的任务是写一段程序，读入三个整数p、q和 r，然后确定一个进制 B(2&lt;=B&lt;=16) 使得 p * q = r。 如果 B 有很多选择, 输出最小的一个。</span><span style="white-space: normal;">例如：p = 11, q = 11, r = 121. 则有 11<sub>(3)</sub>* 11<sub>(3)</sub>= 121<sub>(3)</sub>因为 11<sub>(3)</sub>= 1 * 3<sup>1</sup>+ 1 * 3<sup>0</sup>= 4<sub>(10)</sub>和 121<sub>(3)</sub>= 1 * 3<sup>2</sup>+ 2 * 3<sup>1</sup>+ 1 * 3<sup>0</sup>= 16<sub>(10)</sub>。 对于进制 10，同样有 11<sub>(10)</sub>* 11<sub>(10)</sub>= 121<sub>(10)</sub>。这种情况下，应该输出 3。如果没有合适的进制，则输出 0。</span>

 *
 * 输入
 *     一行，包含三个整数p、q、r。 p、q、r的所有位都是数字，并且1 &lt;= p、q、r &lt;= 1,000,000。
 *
 * 输出
 *     一个整数：即使得p * q = r成立的最小的B。如果没有合适的B，则输出 0。
 *
 * 样例输入
 *     6 9 42
 *
 * 样例输出
 *     13
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    
    return 0;
}