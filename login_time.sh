#!/bin/bash

time=`who | cut -b 34,35`

if [$time -lt 12];
then
	echo "Good morning"
else
	echo "Good afternoon"
fi
