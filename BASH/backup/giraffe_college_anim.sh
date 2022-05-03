#!/bin/bash 

a=0
b=1
bouche_bin=0
((c=$a+$b))
while [[ $c -lt $1 ]]
do
	# Début de la bulle
	echo '        | ' $c ' |'

	# Affiche la belle girafe
	echo '    o o    \/'
	echo '  (\|_|/)  /'
	echo '  /     \ /'

	if [[ bouche_bin -eq 0 ]]
	then
		bouche="."
		bouche_bin=1
	else
		bouche="o"
		bouche_bin=0
	fi

	echo ' (  °'$bouche'°  )'
	echo '  \     /'
	echo '   \___/'

	echo '    | |'
	echo '    | |'
	echo '    | |'
	echo '    | |'
	echo '    | |'
	echo '    | |'

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
	
	sleep 0.5s
	if [[ $c -lt $1 ]]
	then
		clear
	fi

	a=$b
	b=$c
	((c=$a+$b))

done
