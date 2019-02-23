if [[ $(ifconfig | grep -E '([0-9]{1,3}\.){3}[0-9]{1,3}' | cut -d ' ' -f2) ]]
then (ifconfig | grep -E '([0-9]{1,3}\.){3}[0-9]{1,3}' | cut -d ' ' -f2)
else
	echo "I am Lost!"
fi
