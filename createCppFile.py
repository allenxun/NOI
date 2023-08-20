#!/usr/bin/python
# -*- coding: UTF-8 -*- 
import json
import datetime


def readfile(filename):
    with open(filename) as f: 
        lines = json.load(f)
        return lines,f

def writefile(filepath,i):
        filename     = filepath+i["title"][0].split(":")[0]+".cpp"
        line000      = '/*'
        line001      = '* @Author: allen'
        line002      = '* @Date: '+datetime.datetime.now().strftime('%Y-%m-%d')
        line003      = '*'
        title        = '* '+i["title"][0]
        line004      = '*'
        limit        = '* 总时间限制: '+i['timelimit']+' '+'内存限制: '+i['memorylimit']
        line005      = '*'
        description  = '* 描述'
        line006      = '*     '+i["description"]
        line007      = '*'
        input        = '* 输入'
        line008      = '*     '+i["input"]
        line009      = '*'
        output       = '* 输出'
        line010      = '*     '+i["output"]
        line011      = '*'
        sample_input = '* 样例输入'
        line012      = '*     '+i["sampleinput"]
        line013      = '*'
        sample_output= '* 样例输出'
        line014      = '*     '+i["sampleoutput"]
        line015      = '*'
        hint         = '* 提示'
        line016      = '*     '+i["hint"]
        line017      = '*/'
        line018      = ' '
        line019      = '#include <iostream>'
        line020      = 'using namespace std;'
        line021      = ' '
        line022      = 'int main(){'
        line023      = '    '
        line024      = '    return 0;'
        line025      = '}'
        msg          = line000+'\n'+line001+'\n'+line002+'\n'+line003+'\n'+title+'\n'+line004+'\n'+limit+'\n'+line005+'\n'+description+'\n'+line006+'\n'+line007+'\n'+input+'\n'+line008+'\n'+line009+'\n'+output+'\n'+line010+'\n'+line011+'\n'+sample_input+'\n'+line012+'\n'+line013+'\n'+sample_output+'\n'+line014+'\n'+line015+'\n'+hint+'\n'+line016+'\n'+line017+'\n'+line018+'\n'+line019+'\n'+line020+'\n'+line021+'\n'+line022+'\n'+line023+'\n'+line024+'\n'+line025
        msg = msg.replace('<dd>','').replace('</dd>','').replace("</pre>",'').replace("<pre>","").replace("<p>","").replace("</p>","").replace("<br>",'\n')

        with open(filename,'w') as f:
            f.write(msg)
        


if __name__ == '__main__':
    msg,f = readfile("./NOI爬虫/noiSpider/ch01.json")
    f.close()
    result = {}
    for i in msg:
        ch = i['url'].split("/")
        #writefile("./code/ch0105/",msg)
        #writefile("./code/"+ch+"/",i)
        if ch[3] == "ch0109":
            result[ch[4]] = i["url"]

    for i in range(1,len(result)):
        if i<10:
            temp = "0"+str(i)
            print(result[temp])
        else:
            print(result[str(i)])




    