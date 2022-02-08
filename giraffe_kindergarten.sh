#!bin/bash

bouche="." 

for nb in 1 2 3 4 5 6 7 8 9 10
do
	# Début de la bulle
	echo '        | ' $nb ' |'

	if [ $nb -eq 10 ]
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
	if [ $nb -ne 10 ]
	then
		clear
	fi
done