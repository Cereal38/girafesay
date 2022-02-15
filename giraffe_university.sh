#!/bin/bash

bouche="ω" 

for i in [{2..$1}]
do
	somme=0
	for j in {1..$i-1}
	do
		if (( i mod j != 1 ))
		then 
			((somme++))
		fi

		if (($somme == 0))
		then
				# Début de la bulle
				echo '        | ' $i ' |'

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
		fi
	done
done
