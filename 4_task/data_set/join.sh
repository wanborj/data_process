#!/bin/bash

if [ -e 0_p.txt ]
then
    cp 0_p.txt task0.txt
    for i in $(seq 4)
    do
        join -1 1 -2 1 task0.txt $i"_p.txt" > temp.txt
        rm task0.txt
        mv temp.txt task0.txt
    done
fi

if [ -e 5_p.txt ]
then
    cp 5_p.txt task1.txt
    for i in $(seq 6 11)
    do
        join -1 1 -2 1 task1.txt $i"_p.txt" > temp.txt
        rm task1.txt
        mv temp.txt task1.txt
    done
fi

if [ -e 12_p.txt ]
then
    cp 12_p.txt task2.txt
    for i in $(seq 13 14)
    do
        join -1 1 -2 1 task2.txt $i"_p.txt" > temp.txt
        rm task2.txt
        mv temp.txt task2.txt
    done
fi

if [ -e 15_p.txt ]
then
    cp 15_p.txt task3.txt
    for i in $(seq 16 20)
    do
        join -1 1 -2 1 task3.txt $i"_p.txt" > temp.txt
        rm task3.txt
        mv temp.txt task3.txt
    done
fi


mv task*.txt task_set
mv *_p.txt servant_set

