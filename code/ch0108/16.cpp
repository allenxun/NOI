/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 16:矩阵剪刀石头布
 *
 * 总时间限制: 5000ms 内存限制: 65536kB
 *
 * 描述
 *      Bart的妹妹Lisa在一个二维矩阵上创造了新的文明。矩阵上每个位置被三种生命形式之一占据：石头，剪刀，布。
 *      每天，上下左右相邻的不同生命形式将会发生战斗。在战斗中，石头永远胜剪刀，剪刀永远胜布，布永远胜石头。
 *      每一天结束之后，败者的领地将被胜者占领。你的工作是计算出n天之后矩阵的占据情况。
 *
 * 输入
 *     第一行包含三个正整数r，c，n，分别表示矩阵的行数、列数以及天数。每个整数均不超过100。
       接下来r行，每行c个字符，描述矩阵初始时被占据的情况。每个位置上的字符只能是R，S，P三者之一，分别代表石头，剪刀，布。相邻字符之间无空格。
 *
 * 输出
 *     输出n天之后的矩阵占据情况。每个位置上的字符只能是R，S，P三者之一，相邻字符之间无空格。
 *
 * 样例输入
 *     3 3 1
RRR
RSR
RRR

 *
 * 样例输出
 *     RRR
RRR
RRR

 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    int r,c,n;
    cin>>r>>c>>n;
    char a[r][c],b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i-1>=0&&a[i][j]=='R'&&a[i-1][j]=='S') b[i-1][j]='R';
                if(i+1<r&&a[i][j]=='R'&&a[i+1][j]=='S') b[i+1][j]='R';
                if(j-1>=0&&a[i][j]=='R'&&a[i][j-1]=='S') b[i][j-1]='R';
                if(j+1<c&&a[i][j]=='R'&&a[i][j+1]=='S') b[i][j+1]='R';
                if(i-1>=0&&a[i][j]=='S'&&a[i-1][j]=='P') b[i-1][j]='S';
                if(i+1<r&&a[i][j]=='S'&&a[i+1][j]=='P') b[i+1][j]='S';
                if(j-1>=0&&a[i][j]=='S'&&a[i][j-1]=='P') b[i][j-1]='S';
                if(j+1<c&&a[i][j]=='S'&&a[i][j+1]=='P') b[i][j+1]='S';
                if(i-1>=0&&a[i][j]=='P'&&a[i-1][j]=='R') b[i-1][j]='P';
                if(i+1<r&&a[i][j]=='P'&&a[i+1][j]=='R') b[i+1][j]='P';
                if(j-1>=0&&a[i][j]=='P'&&a[i][j-1]=='R') b[i][j-1]='P';
                if(j+1<c&&a[i][j]=='P'&&a[i][j+1]=='R') b[i][j+1]='P';
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=b[i][j];
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}