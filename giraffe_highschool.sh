#!bin/bash

bouche="." 

i=1
j=1
while [[ $i -le $1**2 ]]
do
	# Début de la bulle
	echo '        | ' $i ' |'

	if [[ $i -eq $1**2 ]]
	then
		bouche="O"
	fi

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
	if [[ $i -ne $1**2 ]]
	then
		clear
	fi

	((j++))
	((i=$j**2))

done