#!/bin/bash

bouche="ω" 

for ((p=2 ; p<$1 ; p++))
do
	somme=0
	for ((j=2 ; j < ($1)-1 ; j++))
	do

		if (( $(expr $p % $j) == 0 ))
		then 
			((somme++))
		fi

	done

		if (($somme == 1))
		then	

				if [[ $c -lt $1 ]]
				then	
					clear
				fi

				# Début de la bulle
				echo '        | ' $p ' |'

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

		fi
done
