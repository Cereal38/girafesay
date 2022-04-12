#!bin/bash

bouche="." 

i=0
while [[ $i -le $1 ]]
do
	# Début de la bulle
	echo '        | ' $i ' |'

	if [ $i -eq $1 ]
	then
		bouche="U"
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
	if [ $i -ne $1 ]
	then
		clear
	fi

	((i++))

done