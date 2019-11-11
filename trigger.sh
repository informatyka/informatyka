g++ setup.cpp
g++ -c gui.cpp
echo ">>Compiling..."
echo ">>Linking..."
g++ gui.o -o bin/test -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
echo ">>Rendering..."
echo ">>OK"
./a.out

