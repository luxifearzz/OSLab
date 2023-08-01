for file in $(find . -type f -name "*.c")
do
	prog_name=`echo $file | cut -d'/' -f2 | cut -d'.' -f1`
	gcc -o $prog_name $file 2>/dev/null
	printf "$prog_name.c\t\t"
	if [ -f $prog_name ]
	then
		if [ $(./$prog_name) = 20 ]
		then
			echo 10
		else
			echo 7
		fi
	else
		echo 5
	fi
done
