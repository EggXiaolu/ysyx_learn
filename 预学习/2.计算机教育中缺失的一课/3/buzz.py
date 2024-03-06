#!/usr/bin/env python
# coding=utf-8
import sys

def fizz_buzz(limit):
    for i in range(1,limiti+1):
        if i % 3==0:
            print('fizz')
        if i % 5==0:
            print('fizz')
        if i % 3 and i % 5:
            print(i,end="")

def main():
    fizz_buzz(int(sys.argv[1]))

if name == __main__:
    main()
