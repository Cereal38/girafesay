#!/bin/bash

clear

res=$(($1))

if (( $res > 99 ))
then
	../girafesay Le resultat est superieur a 99. Je n\'ai pas des yeux assez grands.
	exit 1

elif (( $res <= -10 ))
then 
	../girafesay Le resultat est inferieur à -10. Je n\'ai pas des yeux assez petits.
	exit 1

elif (( $res < 0 ))
then
	../girafesay -e "$res" $1

elif (( $res >= 10 ))
then
	../girafesay -e "$res" $1

elif (( $res < 10 ))
then
	../girafesay -e "0$res" $1

fi
