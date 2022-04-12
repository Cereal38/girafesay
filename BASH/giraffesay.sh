#!bin/bash

# Début de la bulle
echo ' 	         | ' | tr -d '\n'

# Compteur du nombre de mots max par ligne
x=0

# Boucle pour chaque mot donné par l'utilisateur
for var in $@
do
	
	# Si plus de 9 mot sur une ligne, force le retour
	if ((x < 9))
	then
		echo $var' ' | tr -d '\n'
		((x=x+1))
	else
		echo
		echo '           ' $var' ' | tr -d '\n'
		x=1
	fi
done

# Affiche la belle girafe
echo  ' |'
echo '    o o    \/'
echo '  (\|_|/)  /'
echo '  /     \ /'
echo ' (  °.°  )'
echo '  \     /'
echo '   \___/'

# Adapte la longueur du coup au nombre de mots
for var in $@ 
do 
	echo '    | |'
done

echo '   /   \'
echo '  /    #\'
echo ' |##     |'
echo ' |#   ## |\'
echo ' \  _#   / |'
echo '  | / \ || w'
echo '  |||  |||'
echo '  ||v  ||v'
echo '  ||   ||  '
echo '  vv   vv'
