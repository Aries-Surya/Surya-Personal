a=1
while [ $a -lt 11 ]; do
  echo "$a"
  a=`expr $a + 1`
done
