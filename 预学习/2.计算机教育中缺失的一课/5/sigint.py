#!/usr/bin/env python
# coding=utf-8

import signal, time

def handler(signum,time):
    print("\n I got SIGINT, but I am not stoping")

signal.signal(signal.SIGINT,handler)
i=0

while True:
    time.sleep(.1)
    print("\r{}".format(i),end="")
    i+=1
