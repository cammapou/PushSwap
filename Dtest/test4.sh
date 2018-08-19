echo '\033[0mTesting length a Hundred Times in a range from 56 to 60 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (56..60).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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

echo '\033[0mTesting length a Hundred Times in a range from 56 to 60 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (56..60).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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

echo '\033[0mTesting length a Hundred Times in a range from -4 to 0 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (-4..0).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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

echo '\033[0mTesting length a Hundred Times in a range from -56 to -60 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (-56..-60).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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

echo '\033[0mTesting length a Hundred Times in a range from 0 to 4 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (0..4).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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

echo '\033[0mTesting length a Hundred Times in a range from 0 to 4 '
ERR=0
for i in range {1..99}
do
	ARG=`ruby -e "puts (-4..0).to_a.shuffle.join(' ')"`
	RET=`./push_swap $ARG | wc -l`
	if [ $RET -gt 12 ];
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
