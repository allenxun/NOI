'''
NOI / 1.1编程基础之输入输出
01:Hello World!

总时间限制: 1000ms 内存限制: 65536kB

描述
    对于大部分编程语言来说，编写一个能够输出“Hello, World!”的程序往往是最基本、最简单的。
    因此，这个程序常常作为一个初学者接触一门新的编程语言所写的第一个程序，也经常用来测试开发、编译环境是否能够正常工作。
    现在你就需要完成这样一个程序。

输入
    无。

输出
    一行，仅包含一个字符串：“Hello, World!”

样例输入
    （无）

样例输出
    Hello, World!

提示
    使用英文标点符号；逗号后面有一个空格。
'''


import scrapy


class NoispiderItem(scrapy.Item):
    url = scrapy.Field()
    title = scrapy.Field()
    timelimit = scrapy.Field()
    memorylimit = scrapy.Field()
    description = scrapy.Field()
    input = scrapy.Field()
    output = scrapy.Field()
    sampleinput = scrapy.Field()
    sampleoutput = scrapy.Field()
    hint = scrapy.Field()

