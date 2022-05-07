#!/bin/bash

clear

bouche="." 

i=1
while [[ $i -le $1 ]]
do

	../girafesay $i
	((i++))
	sleep 1s
	clear

done
