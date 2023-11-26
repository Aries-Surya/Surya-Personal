ch='y'
while [ $ch = 'y ' ] do
echo "enter your choice" echo "1 no of user loged on" echo "2 print calender"
echo "3 print date" read d
case $d in
1) who | wc -l;;
2) cal 20;;
3) date;;
*) break;; esac
echo "do you wish to continue (y/n)" read ch
