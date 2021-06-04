#! /bin/bash
 
echo 
 
 
randomVar=$[RANDOM%$1+1]

echo $randomVar
until [[ guess -eq $randomVar ]]; do
	read guess

	if [[ $guess -lt $randomVar ]]; then
		echo "Too Low"
	elif [[ $guess -gt $randomVar ]]; then
		echo "Too High"
	fi
done

Echo Correct!

./a.out $randomVar

 