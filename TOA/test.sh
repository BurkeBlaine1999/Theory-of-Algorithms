#!/bin/bash

echo "Checking file testfile.txt."
expec="$(sha512sum testfile.txt)"
myout="$(./sha512 testfile.txt)  testfile.txt"
echo "Expected: " $expec
echo "Output:   " $myout
if [[ $myout == $expec ]]; then
    echo "Pass"
else
    echo "Fail"
fi

echo "Checking file empty.txt."
expec="$(sha512sum empty.txt)"
myout="$(./sha512 empty.txt)  empty.txt"
echo "Expected: " $expec
echo "Output:   " $myout
if [[ $myout == $expec ]]; then
    echo "Pass"
else
    echo "Fail"
fi