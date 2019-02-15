#!bin/bash

echo 

"Enter a 5 digit no:"

read num

n=2


while [ $n -lt 5 ]

do

a=`echo $num | cut -c $n`

echo $a 

n=`expr $n + 2`

done

	
