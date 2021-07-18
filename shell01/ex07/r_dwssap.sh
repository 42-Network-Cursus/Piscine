cat /etc/passwd | grep -v # | sed -n 'n;p' | rev | sort -r | sed 's/.*://' | sed -n 7,15p | tr '\n' ','

sed -n -e "$FT_LINE1,${FT_LINE2}p"
