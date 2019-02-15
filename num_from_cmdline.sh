#!/bin/bash

n1=${1?Error:No num given}
n2=${2?Error:No num given}

sum=`expr $n1 + $n2`
echo "Sum is:$sum"
