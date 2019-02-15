#!/bin/bash


n1=$1
n2=$2


n=$n1

while [ $n -ne $n2 ]
do
echo $n
n=$(($n+1))
done
