If,else,endif statements
bash
# vi CMakeLists.txt

# Set a variable for the example
set(MY_OPTION "hello")

# Conditional check
if(MY_OPTION MATCHES hellow )
    message(STATUS "MY_OPTION is TRUE!")
else()
    message(STATUS "MY_OPTION is FALSE!")
endif()
message(${MY_OPTION})
if(MY_OPTION MATCHES hello)
message("true")
else()
message("error")
endif()

Save :wq

Output

 MY_OPTION is FALSE!
hello
true
-- Configuring done
-- Generating done
