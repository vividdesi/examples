Loop foreach iteration


bash
# vi CMakeLists.txt

# CMakeLists.txt
project(foreach)
# Define a list of items
set(MY_LIST "Apple" "Banana" "Cherry" "dragon fruit")

# Loop through the list
foreach(FRU IN LISTS MY_LIST)
    message(STATUS "Current fruit: ${FRU}")
endforeach()

set(MY_LIST "apple" "banana" "carrot" "dragonfruit")
foreach(FRUIT IN LISTS MY_LIST)
        message(STATUS "current fruit :${FRUIT}")
endforeach()

Save:wq

Bash
Cmake.

Output
-- Current fruit: Apple
-- Current fruit: Banana
-- Current fruit: Cherry
-- Current fruit: dragon fruit
-- current fruit :apple
-- current fruit :banana
-- current fruit :carrot
-- current fruit :dragonfruit

Range loop
Bash
mkdir rangeloop
Cd rangeloop
Vim CMakeLists.txt
# Loop through numbers 1 to 5
foreach(NUMBER RANGE 1 5)
    message(STATUS "Number: ${NUMBER}")
endforeach()
Save:wq
