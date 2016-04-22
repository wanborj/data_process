#!/bin/bash

#awk '$2>3900 && $3<8000{ print $2, $3, $4, $5 $1 }' ../s_time_spec.data > temp.data
awk '$2>3900 && $3<8000' ../s_time_spec.data > temp.data


LINES=`cat temp.data | wc -l`
LINES_HEAD=`expr $LINES / 2`
LINES_TAIL=`expr $LINES - $LINES_HEAD`

head -n ` echo $LINES_HEAD ` temp.data > formate_order.data1
tail -n `echo $LINES_TAIL` temp.data > formate_order.data2

rm temp.data 
