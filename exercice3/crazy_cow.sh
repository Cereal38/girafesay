#!/bin/bash
a=1
b=2
((c=$a+$b))
while [[ $c -lt $1 ]]
do
    for i in {2..$c}
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
                cowsay $c 
                sleep 1s
                clear
            fi
        done
    done
a=$b
b=$c
((c=$a+$b))
done
