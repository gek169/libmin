#!/bin/bash
IFS=$'\n' FILES=$(find .. -name "libmin.h")
ME="../libmin/libmin.h"
for filename in $FILES
do
 if [[ "$filename" != "$ME" ]]; then
 	echo "<SHELL> Copying to $filename"
 	cp "$ME" "$filename"
 else
 	echo "Found ourselves!"
 fi
done
