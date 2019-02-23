 touch bomb.txt | touch -A -000001 bomb.txt | stat -r bomb.txt | rev | cut -d ' ' -f5 | rev && rm -f bomb.txt
