#! bin/bash

for f in tests/"$1"/*lib_test; do
	echo Executing test "$f"
	./"$f"
	if test $? -eq 0
	then
		echo "Test OK"
	else
		echo "Test FAILED"
	fi
done
