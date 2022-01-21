#! bin/bash

make retest_folder "RETEST_FOLDER=$1"

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

for f in "$1"/*.test; do
#	echo Executing "$f"
	SHORT=$(basename $f)
	./"$f"
	if test $? -eq 0
	then
		echo -e " ${GREEN}$SHORT"
	else
		echo -e "${RED}$SHORT"
	fi
	echo -ne "${NC}"
done
