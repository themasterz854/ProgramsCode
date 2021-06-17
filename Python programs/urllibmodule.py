# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 13:59:58 2020

@author: Zaid
"""
import urllib.request
import urllib.parse
#x = urllib.request.urlopen('https://www.google.com')
#print(x.read())

'''
url = 'https://pythonprogramming.net'
values = {'s':'basic', 'submit': 'search'}

data = urllib.parse.urlencode(values)

data = data.encode('utf-8')

req = urllib.request.Request(url,data)

resp = urllib.request.urlopen(req)

respData = resp.read()

print(respData)
'''

headers={}
headers['User-Agent']= 