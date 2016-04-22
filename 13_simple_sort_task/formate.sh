#!/bin/bash

head -n 800 data_process.data > temp.data
tail -n 400 temp.data > tmp.data
awk '{print NR, $1}' tmp.data > temp.data 

head -n 200 temp.data > formate_order.data1
tail -n 200 temp.data > formate_order.data2



rm temp.data tmp.data
