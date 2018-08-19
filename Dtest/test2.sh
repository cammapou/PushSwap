echo '\033[0mTesting validity a Hundred Times in a range from 0 to 30 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (0..30).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | ./checker $ARG`
	if [ "$RET" != "OK" ];
	then
		((ERR++))
		printf '\033[0;31m▓\033[0;0m'
	else
		printf '\033[0;32m▓\033[0;0m'
	fi
done

if [ $ERR -eq 0 ];
then
	echo '\033[0;32m Success'
else
	echo "\033[0;31m Fail $ERR / 100"
fi

echo '\033[0mTesting validity a Hundred Times in a range from 0 to 30 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (0..30).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | ./checker $ARG`
	if [ "$RET" != "OK" ];
	then
		((ERR++))
		printf '\033[0;31m▓\033[0;0m'
	else
		printf '\033[0;32m▓\033[0;0m'
	fi
done

if [ $ERR -eq 0 ];
then
	echo '\033[0;32m Success'
else
	echo "\033[0;31m Fail $ERR / 100"
fi

echo '\033[0mTesting validity a Hundred Times in a range from -30 to 29 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (-30..29).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | ./checker $ARG`
	if [ "$RET" != "OK" ];
	then
		((ERR++))
		printf '\033[0;31m▓\033[0;0m'
	else
		printf '\033[0;32m▓\033[0;0m'
	fi
done

if [ $ERR -eq 0 ];
then
	echo '\033[0;32m Success'
else
	echo "\033[0;31m Fail $ERR / 100"
fi
