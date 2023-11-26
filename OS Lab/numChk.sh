num="1 2 3 4 5 6 7 8"
for n in $num do
q="expr $n % 2" if [ $q -eq 0 ] then
echo "even no" continue
fi
echo "odd no" done