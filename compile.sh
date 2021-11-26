#!/bin/bash
start_time="$(date -u +%s.%N)"
end_time="$(date -u +%s.%N)"


CFLAGS="-Wall -g"
ficheros=`ls *.c`

bin=`ls bin 2> /dev/null`
status=$?
if [ $status -eq 0 ]
then
	echo "[+] Bin folder exists"
else
	echo "[+] Creating bin folder"
	mkdir bin
fi

echo "[+] Files to compile:"
echo $ficheros
echo ""

for i in ${ficheros}
do
	cc $CFLAGS $i -o bin/${i%.*}
done

echo "[+] Created executable/s."

elapsed="$(bc <<<$end_time-$start_time)"

echo "[+] Build time: $elapsed"
echo "[+] Build Successful!"
