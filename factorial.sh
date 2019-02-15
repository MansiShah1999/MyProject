#!bin/bash

echo "Enter number:"
read num

mul=1
i=1

while [ $i -le $num ]
do 
mul=`expr $mul \* $i`
i=`expr $i + 1`
done

echo "Factorial is :"$mul
