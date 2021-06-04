#! /bin/bash

clear

echo =========================
echo       Guessing Game
echo   Made by Michael Short
echo =========================


echo Please enter a number that is greater than 1
read input


if [[ input < 1 ]]; then
	echo please pick a non-zero number
	read input
else 
	randomVar=$[RANDOM%$input+1]
	./RandomGuesser.sh $randomVar
fi
