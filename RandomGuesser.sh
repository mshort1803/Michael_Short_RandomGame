#! /bin/bash
 
echo 
 
 
randomVar=$1

echo Pick a number between 1 and $randomVar

until [[ $guess -eq $randomVar ]]; do
	read guess

	if [[ $guess -lt $randomVar ]]; then
		echo "Too Low"
	elif [[ $guess -gt $randomVar ]]; then
		echo "Too High"
	fi
done

Echo Correct!

echo $randomVar

./a.out $randomVar

 