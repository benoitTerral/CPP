#!/bin/sh

RED='\033[0;31m'
NC='\033[0m' # No Color

for SUBDIR in */ ; do
	echo $RED"Cleaning executable and .o of folder" $SUBDIR $NC
    make fclean -C $SUBDIR
done