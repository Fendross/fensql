#!/bin/sh

cc fensql.c -o fensql.out

if [ $? -eq 0  ]; then
    clear
    ./fensql.out fensql.db
else
    echo "Compilation error."
    exit 1
fi

exit 0
EOF