/*
 * @Author: allen
 * @Date: 2023-08-11
 *
 * 08:Vigenère密码
 *
 * 总时间限制: 1000ms 内存限制: 65536kB
 *
 * 描述
 *     16世纪法国外交家Blaise de Vigenère设计了一种多表密码加密算法——Vigenère密码。Vigenère密码的加密解密算法简单易用，且破译难度比较高，曾在美国南北战争中为南军所广泛使用。在密码学中，我们称需要加密的信息为明文，用M表示；称加密后的信息为密文，用C表示；而密钥是一种参数，是将明文转换为密文或将密文转换为明文的算法中输入的数据，记为k。 在Vigenère密码中，密钥k是一个字母串，k=k1k2…kn。当明文M=m1m2…mn时，得到的密文C=c1c2…cn，其中ci=mi®ki，运算®的规则如下表所示：<p style="text-align: center;"><img src="http://media.openjudge.cn/images/upload/1423116001.png" width="undefined" height="undefined">
<p style="text-align: left;">Vigenère加密在操作时需要注意：<p style="text-align: left;">1. ®运算忽略参与运算的字母的大小写，并保持字母在明文M中的大小写形式；<p style="text-align: left;">2. 当明文M的长度大于密钥k的长度时，将密钥k重复使用。<p style="text-align: left;">例如，明文M=Helloworld，密钥k=abc时，密文C=Hfnlpyosnd。
<table border="1" cellpadding="0" cellspacing="0" width="792" style="width: 594pt;"><colgroup><col width="72" span="11" style="width:54pt"></colgroup><tbody><tr height="25" style="height:18.75pt"><td height="25" class="xl63" width="72" style="height:18.75pt;width:54pt">明文</td><td class="xl64" width="72" style="width:54pt">H</td><td class="xl64" width="72" style="width:54pt">e</td><td class="xl64" width="72" style="width:54pt">l</td><td class="xl64" width="72" style="width:54pt">l</td><td class="xl64" width="72" style="width:54pt">o</td><td class="xl64" width="72" style="width:54pt">w</td><td class="xl64" width="72" style="width:54pt">o</td><td class="xl64" width="72" style="width:54pt">r</td><td class="xl64" width="72" style="width:54pt">l</td><td class="xl64" width="72" style="width:54pt">d</td></tr><tr height="25" style="height:18.75pt"><td height="25" class="xl65" style="height:18.75pt">密钥</td><td class="xl64">a</td><td class="xl64">b</td><td class="xl64">c</td><td class="xl64">a</td><td class="xl64">b</td><td class="xl64">c</td><td class="xl64">a</td><td class="xl64">b</td><td class="xl64">c</td><td class="xl64">a</td></tr><tr height="25" style="height:18.75pt"><td height="25" class="xl63" style="height:18.75pt">密文</td><td class="xl64">H</td><td class="xl64">f</td><td class="xl64">n</td><td class="xl64">l</td><td class="xl64">p</td><td class="xl64">y</td><td class="xl64">o</td><td class="xl64">s</td><td class="xl64">n</td><td class="xl64">d</td></tr></tbody></table><p style="text-align: left;">

 *
 * 输入
 *     输入共2行。 
第一行为一个字符串，表示密钥k，长度不超过100，其中仅包含大小写字母。第二行为一个字符串，表示经加密后的密文，长度不超过1000，其中仅包含大小写字母。

对于100%的数据，输入的密钥的长度不超过100，输入的密文的长度不超过1000，且都仅包含英文字母。
 *
 * 输出
 *     输出共1行，一个字符串，表示输入密钥和密文所对应的明文。
 *
 * 样例输入
 *     CompleteVictory
Yvqgpxaimmklongnzfwpvxmniytm
 *
 * 样例输出
 *     Wherethereisawillthereisaway
 *
 * 提示
 *      
 */
 
#include <iostream>
using namespace std;
 
int main(){
    
    return 0;
}