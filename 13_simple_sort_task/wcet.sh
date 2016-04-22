#!/bin/bash

if [ -e 0.txt ]
then
    rm *.txt
fi

if [ -e data_process.data ]
then
    awk '{ print  >> $1".txt"; } { close( $1".txt")}' data_process.data
    #mv *.txt data_set
fi

if [ -e 0.txt ]
then
    for i in `seq 0 20`
    do
        if [ -e $i.txt ]
        then
            awk '{print NR, $2 >> "'$i'_p.txt"}' "$i.txt"
        fi
    done
fi

if [ -e 0.txt -a  -e 0_p.txt ]
then
    mv *.txt data_set
fi

    
