echo "$FT_NBR1 + $FT_NBR2" | tr "mrdoc" "01234" | tr "\\" "1" | tr "\'\"\?\!" "0234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"
