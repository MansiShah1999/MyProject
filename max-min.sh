#!/bin/bash

n1=${1?Error:No num given}
n2=${2?Error:No num given}
n3=${3?Error:No num given}

if [ $n1 -gt $n2 ]
then

	if [ $n1 -gt $n3 ]
	then 
		echo "Greatest no is :`expr $n1`"
	else	
		echo "Greatest no is:`expr $n3`"
	fi
else
	if [ $n2 -gt $n3 ]
	then 
		echo "Greatest no is :`expr $n2`"
	else
		echo "Greatest no is :`expr $n3`"
	fi
fi
