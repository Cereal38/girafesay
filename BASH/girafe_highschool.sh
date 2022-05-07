#!/bin/bash

clear

bouche="." 

i=1
j=1
while [[ $i -le $1*$1 ]]
do

	../girafesay $i

	((j++))
	((i=$j**2))

	sleep 1s
	clear

done
