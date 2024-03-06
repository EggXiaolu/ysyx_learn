#!/usr/bin/env python
# coding=utf-8
import requests
from bs4 import BeautifulSoup

# 这个装饰器会告诉行分析器
# 我们想要分析这个函数
@profile
def get_urls():
    response = requests.get('https://missing.csail.mit.edu')
    s = BeautifulSoup(response.content, 'lxml')
    urls = []
    for url in s.find_all('a'):
        urls.append(url['href'])

if __name__ == '__main__':
    get_urls()
