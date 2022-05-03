#!/bin/bash

mouth="o"

for nb in 1 2 3 4 5 6 7 8 9 10
do
	# Début de la bulle

	if [ $nb -eq 10 ]
	then
		mouth="U"
	fi

	../girafesay -n $nb -m $mouth $nb	

	sleep 1s
	if [ $nb -ne 10 ]
	then
		clear
	fi
done
