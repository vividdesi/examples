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
