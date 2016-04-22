#!/bin/bash

awk '{print NR, $3-$2}' r_time_spec.data > r_execution_time.data

tail -n 1 ../data_analysis/data_analysis.data > r_execution_time_statistic.data
awk '{print $5}' r_execution_time_statistic.data > variation.data

