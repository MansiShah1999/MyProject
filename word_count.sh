#!/bin/bash

echo "Enter file name:"
read filename

echo "Line count=`wc -l $filename`"
echo "Word count=`wc -w $filename`"
echo "Character count=`wc -m $filename`"

