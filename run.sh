#!/bin/sh

/bin/echo -n > timings.csv

FILES=(function_std.cpp function_boost.cpp unique_ptr_std.cpp unique_ptr_boost.cpp \
shared_ptr_std.cpp shared_ptr_boost.cpp string_view_std.cpp string_view_boost.cpp \
any_std.cpp any_boost.cpp optional_std.cpp optional_boost.cpp \
variant_std.cpp variant_boost.cpp tuple_std.cpp tuple_boost.cpp)

for(( FILE=0; FILE < ${#FILES[@]}; FILE++ ))
do
    /bin/echo -n ${FILES[$FILE]} "" >> timings.csv
    for(( TRIAL=0; TRIAL < 100; TRIAL++ ))
    do
        /usr/bin/time clang++ -std=c++17 -O2 -I**PATH_TO_BOOST** -c ${FILES[$FILE]} 2> timing
        /bin/echo -n $(awk '{ print $1 }' timing) "" >> timings.csv
    done
    /bin/echo >> timings.csv
    rm ./timing
    rm ./*.o
done
