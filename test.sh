
#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

cd $dir

for f in samples/*.glsl; do
	./glc < $f &> ours.temp
	./p2exe < $f &> theirs.temp
	printf "Comparing output with %s: " ${f%%.*} 


	if  diff ours.temp theirs.temp ; then
	printf "${GREEN}PASS${NC}\n"
	else
	printf "${RED}FAIL${NC}\n"    
	fi

done
rm ours.temp
rm theirs.temp
