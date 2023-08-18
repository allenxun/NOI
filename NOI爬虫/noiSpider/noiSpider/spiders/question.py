import scrapy

from noiSpider.items import NoispiderItem

class QuestionSpider(scrapy.Spider):
    name = "question"
#    allowed_domains = ["noi.openjudge.cn/ch0101/"]
    start_urls = [
                    "http://noi.openjudge.cn/ch0101/",
                    "http://noi.openjudge.cn/ch0102/",
                    "http://noi.openjudge.cn/ch0103/",
                    "http://noi.openjudge.cn/ch0104/",0
                  "http://noi.openjudge.cn/ch0105/",
                  "http://noi.openjudge.cn/ch0106/",
                  "http://noi.openjudge.cn/ch0107/",
                  "http://noi.openjudge.cn/ch0108/",
                  "http://noi.openjudge.cn/ch0109/",
                  "http://noi.openjudge.cn/ch0110/",
                  "http://noi.openjudge.cn/ch0111/",
                  "http://noi.openjudge.cn/ch0112/",
                  "http://noi.openjudge.cn/ch0113/"
                  ]

    def parse(self, response):
        tbody = response.xpath('//body/div[@id="pagebody"]/div/div/div/table/tbody/tr')
        for tr in tbody:
            href001 = tr.xpath('td[@class="problem-id"]/a/@href').extract()
            href001 = "http://noi.openjudge.cn"+href001[0]

            yield scrapy.Request(href001, callback=self.parse_question)

    def parse_question(self,response):
        context = response.xpath('//body/div[@id="pagebody"]/div')
        
        temp_item = NoispiderItem()
        temp_item["url"]           = response.url
        temp_item["title"]         = context.xpath('div[@id="pageTitle"]/h2/text()').extract()
        problem = context.xpath('div[@class="problem-page col-9"]')
        limit = problem.xpath('dl[@class="problem-params"]/dd').extract()
        temp_item["timelimit"]      = limit[0]
        temp_item["memorylimit"]   = limit[1]

        message = problem.xpath('dl[@class="problem-content"]/dd').extract()
        temp_item["description"]   = message[0]
        temp_item["input"]         = message[1]
        temp_item["output"]      = message[2]
        temp_item["sampleinput"]   = message[3]
        temp_item["sampleoutput"]  = message[4]
        if len(message) > 6:
            temp_item["hint"] = message[5]
        else:
            temp_item["hint"] = " "
        yield temp_item