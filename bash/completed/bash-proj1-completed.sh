#!/bin/bash

echo "Generating build..."

#set var = head cmd at line 1 of file
firstline=$(head -n1 source/changelog.md)

# splitfirstline is firstline read as an index
# version is the second index [1]
read -a splitfirstline <<< $firstline
version=${splitfirstline[1]}

# read version number to user
echo -n "Version number: "
echo $version

#continue?
echo "(1/continue) OR (0/exit)"
read versioncontinue
while [ "$versioncontinue" != "1" ] && [ "$versioncontinue" != "0" ]
	do
	  echo "Incorrect Input. Try again."
	  echo "(1/continue) OR (0/exit)"
	  read versioncontinue
	done

if [ "$versioncontinue" == "0" ]
  then
  echo "Stopping..."
  exit
elif [ "$versioncontinue" == "1" ]
  then
  echo "Proceeding..."
fi

files="source/*"

for file in $files 
  do
    read filename <<< $file
    if [ "$filename" == "source/secretinfo.md" ]
    then
      echo $file "not being copied."
    else
      echo $file "copied."
      cp $file build/
    fi
  done

echo -n "Listing files in build/ for version "
echo $version
cd /home/ccuser/workspace/learn-bash-scripting-project/build/
ls

echo "Exiting"
  cd /home/ccuser/workspace/learn-bash-scripting-project
  exit

