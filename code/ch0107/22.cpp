/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 22:紧急措施
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     近日，一些热门网站遭受黑客入侵，这些网站的账号、密码及email的数据惨遭泄露。你在这些网站上注册若干账号（使用的用户名不一定相同），
 *      但是注册时使用了相同的email。你此时拿到了那份泄露的数据，希望尽快将自己的密码更改。
 *      策略如下：根据email找到你的用户名和密码，然后更改密码。更改的规则为：小写和大写交换，非字母字符保持不变。

 *
 * 输入
 *     第一行为你的email地址，长度不超过50个字符且只包含字母、数字和‘@’符号。
        第二行为账号数N，N(0 < N < 10000)。
        接下来N行，每行表示一个账号，格式为：
        用户名 密码 email
        它们之间用单个空格分开。用户名、密码、email均不含空格，且长度不超过50个字符。
 *
 * 输出
 *     有若干行，每行为你的一个账号，包括：你的账号，修改后的密码（之间用单个空格分隔）。
        如果没有你的账号，则输出empty。
 *
 * 样例输入
 *     样例输入1：
        abc@pku.edu.cn
        5
        helloKitty iLoveCats abc@pku.edu.cn
        2012 maya2012 cplusplus@exam.com
        KittyCat 5iKitty abc@pku.edu.cn
        program password teacher@exam.com
        whoAmi Feb.29$ abc@pku.edu.cn

        样例输入2：
        abc@pku.edu.cn
        1
        2012 maya2012 cplusplus@exam.com
 *
 * 样例输出
 *     样例输出1：
        helloKitty IlOVEcATS
        KittyCat 5IkITTY
        whoAmi fEB.29$

        样例输出2：
        empty
 *
 * 提示
 *      
 */
 
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string email;
    cin >> email;
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++){
       string username, password, useemail;
       cin >> username >> password >> useemail;
       int x = email.compare(useemail);
       if (x == 0){
           flag = 1;
           for (int j = 0; j < password.length(); j++){
               if (password[j] >= 'a' && password[j] <= 'z'){
                   password[j] = password[j] - 32;
               }
               else if (password[j] >= 'A' && password[j] <= 'Z'){
                   password[j] = password[j] + 32;
               }
           }
           cout << username << " " << password << endl;
       }
    }
       if (flag == 0){
              cout << "empty" << endl;
       }

    return 0;
}