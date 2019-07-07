# build an executable named fibonacci from main.cpp
all: main.cpp
  g++ -g -Wall -o fibonacci main.cpp

clean:
  $(RM) fibonacci
  
