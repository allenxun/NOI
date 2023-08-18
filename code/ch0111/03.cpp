/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 03:矩形分割
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     <span style="COLOR: rgb(35,31,23); FONT-SIZE: 10.5pt">平面上有一个大矩形，其左下角坐标（<span lang="EN-US">0</span>，<span lang="EN-US">0</span>），右上角坐标（<span lang="EN-US">R,R)</span>。大矩形内部包含一些小矩形，小矩形都平行于坐标轴且互不重叠。所有矩形的顶点都是整点。要求画一根平行于<span lang="EN-US">y</span>轴的直线<span lang="EN-US">x=k</span>（<span lang="EN-US">k</span>是整数<span lang="EN-US">) </span>，使得这些小矩形落在直线左边的面积必须大于等于落在右边的面积，且两边面积之差最小。并且，要使得大矩形在直线左边的的面积尽可能大。注意：若直线穿过一个小矩形，将会把它切成两个部分，分属左右两侧。</span>
 *
 * 输入
 *     第一行是整数R，表示大矩形的右上角坐标是(R,R) (1 &lt;= R &lt;= 1,000,000)。
接下来的一行是整数N,表示一共有N个小矩形(0 &lt; N &lt;= 10000)。
再接下来有N 行。每行有4个整数，L,T, W 和 H, 表示有一个小矩形的左上角坐标是(L,T),宽度是W，高度是H (0&lt;=L,T &lt;= R, 0 &lt; W,H &lt;= R). 小矩形不会有位于大矩形之外的部分。
 *
 * 输出
 *     输出整数n，表示答案应该是直线 x=n。 如果必要的话，x=R也可以是答案。
 *
 * 样例输入
 *     1000
2
1 1 2 1
5 1 2 1
 *
 * 样例输出
 *     5
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    
    return 0;
}