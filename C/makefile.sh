
#!/bin/bash

# Generate exec file

gcc -o girafesay sources/newgirafe.c sources/affiche_objets.c sources/affiche_girafe.c sources/dancing_girafe.c

rm ../girafesay
mv girafesay ..

echo Compilation successful !
