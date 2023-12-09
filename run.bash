# chmod +x ./run.bash && ./run.bash

clear

# g++ --version
# clang++ --version

echo "Removing old app build."
if test -f app; then
  rm app
fi

echo "Compiling... "
echo "clang++ -std=c++20 -pedantic  ... -o app"
# -Weverything # e.g. -Wno-c++98-compat 

#g++  --std=c++2a -Werror -Wall 
clang++ -std=c++20 \
        main.cpp             \
        -o app

if test -f app; then
        echo "Running ...   ./app"
        ./app
fi