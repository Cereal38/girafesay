
#!/bin/bash

nbrRandom=`echo $((1 + $RANDOM % 3))`

# Suite de Tribonacci
if [ $nbrRandom -eq 1 ]
then
	
	echo -n "Entrez une valeur : "
	read valeurUtil

	a=0
	b=1
	c=1

	cowsay "J'affiche la suite de Tribonacci jusqu'à la valeur $valeurUtil !"
	sleep 3

	clear

	while [ $c -lt $valeurUtil ]
	do

		cowsay $c
		
		sleep 0.8

		temp=`expr $a + $b + $c`
		a=$b
		b=$c
		c=$temp

		clear
	done

# Calcul du volume et de l'air de formes géométrique
elif [ $nbrRandom -eq 2 ]
then

	echo -ne "1. Cube | 2. Rectangle \nChoisissez une forme avec son chiffre : "
	read formeUser

	if [ $formeUser -eq 1 ]
	then
		
		echo -n "Entrez la longueur des côtés (en m) : "
		read cote

		volume=`expr $cote \* $cote \* $cote`
		surface=`expr 6 \* $cote \* $cote`

		clear

		cowsay "Volume du cube : $volume m3
			Surface du cube : $surface m2"

		sleep 5
		clear

	elif [ $formeUser -eq 2 ]
	then

		echo -n "Entrez la longueur du parallelepipede rectangle (en m) : "
		read longueur
		echo -n "Entrez le largeur du parallelepipede rectangle (en m) : "
		read largeur 
		echo -n "Entrez le hauteur du parallelepipede rectangle (en m) : "
		read hauteur 


		volume=`expr $longueur \* $largeur \* $hauteur`
		surface=`expr 2 \* $longueur \* $hauteur + 2 \* $largeur \* $hauteur + 2 \* $longueur \* $largeur`
		
		clear

		cowsay "Volume du parallelepipede rectangle : $volume m3
			Surface du parallelepipede rectangle : $surface m2"
		
		sleep 5
		clear

	else

		cowsay "Valeur incorrect..."
	fi
	
# Affiche 42
elif [ $nbrRandom -eq 3 ]
then
	cowsay 42
fi
