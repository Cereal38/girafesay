#!/bin/bash

clear

a=0
b=1
((c=$a+$b))
while [[ $c -lt $1 ]]
do

	clear

	../girafesay --mouth w $c

	a=$b
	b=$c
	((c=$a+$b))
	
	sleep 1s

done
