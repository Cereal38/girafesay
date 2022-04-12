#!/bin/bash

bouche="ω" 

a=0
b=1
((c=$a+$b))
while [[ $c -lt $1 ]]
do
	# Début de la bulle
	echo '        | ' $c ' |'

	# Affiche la belle girafe
	echo '    o o    \/'
	echo '  (\|_|/)  /'
	echo '  /     \ /'
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
	
	sleep 1s
	if [[ $c -lt $1 ]]
	then
		clear
	fi

	a=$b
	b=$c
	((c=$a+$b))

done
