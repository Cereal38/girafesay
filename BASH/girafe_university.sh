#!/bin/bash

clear

for ((p=2 ; p<$1 ; p++))
do
	somme=0
	for j in $(seq 2 1 $p)
	do

		if (( $(expr $p % $j) == 0 ))
		then 
			((somme++))
		fi

	done

		if (($somme == 1))
		then	

				clear

				../girafesay --mouth u $p

				sleep 1s

		fi
done
