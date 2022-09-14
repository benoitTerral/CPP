#!/bin/sh

RED='\033[0;31m'
NC='\033[0m' # No Color
BOLDRED='\033[1;31m'
BOLDGREEN='\033[1;32m'

echo $BOLDGREEN"Make fclean"$NC

for SUBDIR in */ ; do
	echo $RED"Cleaning executable and .o of folder" $SUBDIR $NC
    make fclean -C $SUBDIR
done

LINES=$(find . -type f -not -name "*.hpp" \
	-and -type f -not -name "*.cpp" \
	-and -type f -not -name "Makefile" \
	-and -type f -not -name "*.h" \
	-and -not -name $(basename $0))

if [ -z "$LINES"]
then
	echo $BOLDGREEN"\nNo files without expected extensions identified"$NC
else
	echo $BOLDRED"\nUnexpected files in repo"$NC
	echo "$LINES"
fi