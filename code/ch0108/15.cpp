/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 15:细菌的繁殖与扩散
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     在边长为9的正方形培养皿中，正中心位置有m个细菌。假设细菌的寿命仅一天，但每天可繁殖10个后代，而且这10个后代，有两个分布在原来的单元格中，其余的均匀分布在其四周相邻的八个单元格中。
 *      求经过n(1≤n≤4)天后，细菌在培养皿中的分布情况。

 *
 * 输入
 *     输入为两个整数，第一个整数m表示中心位置细菌的个数（2 ≤ m ≤ 30），第二个整数n表示经过的天数（1 ≤ n ≤ 4）。
 *
 * 输出
 *     输出九行九列整数矩阵，每行的整数之间用空格分隔。整个矩阵代表n天后细菌在培养皿上的分布情况。
 *
 * 样例输入
 *     2 1
 *
 * 样例输出
 *      0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0
        0 0 0 2 2 2 0 0 0
        0 0 0 2 4 2 0 0 0
        0 0 0 2 2 2 0 0 0
        0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;


 
int main(){
    int m, n;
    cin >> m >> n;
    int a[10][10],b[10][10];

    for (int i = 1; i <= 9;i++){
        for (int j = 1; j <= 9;j++){
            a[i][j] = 0;
            b[i][j] = 0;
        }
    }

    a[5][5] = m;

	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				if(a[i][j]!=0)
				{
					for(int x=i-1;x<=i+1;x++)
					{
						for(int y=j-1;y<=j+1;y++)
						{
							if(x==i && y==j) {
                                b[x][y]+=2*a[i][j];
                            }else{
                                b[x][y]+=a[i][j];
                            } 
						}
					}
				}
			}
		}
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}	
	}

    for(int i = 1; i <=9; i++){
        for(int j = 1; j <=9; j++){
            cout << a[i][j] << " ";
        }
        cout  << endl;
    }
    return 0;
}