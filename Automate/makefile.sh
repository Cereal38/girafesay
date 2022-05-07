
#!/bin/bash

clear

echo "Removing old exec_tamagoshi file"
rm exec_tamagoshi

echo "Starting compilation..."
gcc -o exec_tamagoshi main.c tamagoshi_girafe.c affiche_girafe.c && echo "Compilation successful !"


