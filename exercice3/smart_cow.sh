#!/bin/bash

res=$(($1))

if (( $res > 99 ))
then
	cowsay Le resultat est superieur a 99. Je n\'ai pas des yeux assez grands.
	exit 1
elif (( $res <= -10 ))
then 
	cowsay Le resultat est inferieur à -10. Je n\'ai pas des yeux assez petits.
	exit 1
fi

if (( $res <  10 && $res >= 0 ))
then
	cowsay -e "0$res" $1
fi

if (( $res < 0 ))
then
	cowsay -e "$res" $1
fi

