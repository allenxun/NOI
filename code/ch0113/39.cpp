/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 39:多项式输出
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     一元 n 次多项式可用如下的表达式表示：<span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">f(x)=a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">n</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">x</span><sup style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">n</sup><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">+a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">n-1</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">x</span><sup style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">n-1</sup><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">+...+a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">1</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">x+a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">0</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">，a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">n</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">≠0</span>
其中，<span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">i</sub><span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">x</span><sup style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">i</sup>称为i次项，<span style="color: rgb(35, 31, 23);font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif;font-size: 14px">a</span><sub style="color: rgb(35, 31, 23); font-family: 'Lucida Grande', Verdana, 'Bitstream Vera Sans', Arial, sans-serif; line-height: 21px; white-space: normal;">i</sub>称为i次项的系数。给出一个一元多项式各项的次数和系数，请按照如下规定的格式要求输出该多项式：1. 多项式中自变量为x，从左到右按照次数递减顺序给出多项式。2. 多项式中只包含系数不为0的项。3. 如果多项式n次项系数为正，则多项式开头不出现“+”号，如果多项式n次项系数为负，则多项式以“-”号开头。4. 对于不是最高次的项，以“+”号或者“-”号连接此项与前一项，分别表示此项系数为正或者系数为负。紧跟一个正整数，表示此项系数的绝对值（如果一个高于0次的项，其系数的绝对值为1，则无需输出1）。如果x的指数大于1，则接下来紧跟的指数部分的形式为“x^b”，其中b为x的指数；如果x的指数为1，则接下来紧跟的指数部分形式为“x”； 如果x的指数为0，则仅需输出系数即可。5. 多项式中，多项式的开头、结尾不含多余的空格。

 *
 * 输入
 *     共有2 行：
第一行 1 个整数 n，表示一元多项式的次数。
第二行有 n+1 个整数，其中第 i 个整数表示第 n-i+1 次项的系数，每两个整数之间用空格隔开。

1 ≤ n ≤ 100，多项式各次项系数的绝对值均不超过100。
 *
 * 输出
 *     共1行，按题目所述格式输出多项式。
 *
 * 样例输入
 *     样例 #1：
5
100 -1 1 -3 0 10

样例 #2：
3
-50 0 0 1
 *
 * 样例输出
 *     样例 #1：
100x^5-x^4+x^3-3x^2+10

样例 #2：
-50x^3+1
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    
    return 0;
}