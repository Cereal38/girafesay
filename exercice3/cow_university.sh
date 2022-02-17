#!/bin/bash

start=2
end=$1
if [[ $1 -eq 1 ]]
then
    cowsay $1 n\'est pas un nombre premier
    exit 1
fi

for (( p=$start; p < $end; p++ ))
do
    compteur=0
    for (( s=$start; s < $p; s++ ))
    do
	if [[ "$(($p % $s))" -eq  "0" ]]
	then
	    ((compteur++))
	fi
    done

    if [[ $compteur -eq 0 ]]
    then
        cowsay $p
        sleep 0.5
        clear
    fi

done
