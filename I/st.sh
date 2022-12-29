for((i = 1; ; i++)); do
	echo $i
	./gen.exe $i > int
	./$1 < int > inout1
	./$2 < int > inout2
	diff -w inout1 inout2 || break
	# diff -w <(./1.exe < int) <(./brute.exe < int) || break
done