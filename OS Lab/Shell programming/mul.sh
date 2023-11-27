echo "Which table do you want?"
read n
for ((i=1; i<=10; i++))
do
  echo "$i * $n = $(expr $i \* $n)"
done
