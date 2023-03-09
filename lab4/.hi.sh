#!/bin/bash

# Check if the user enters "g++ .\stack.cpp" command
if [[ "$@" =~ ^g\+\+\.\\\\stack\.cpp.*$ ]]; then
  # Print a message and run the command
  echo "hello"
  $@
else
  # Print an error message and exit
  echo "Error: Please enter the command 'g++ .\\stack.cpp' to compile stack.cpp"
  exit 1
fi
