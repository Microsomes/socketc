

add_library(ADDER adder.cpp)

install(TARGETS ADDER DESTINATION lib)

install(FILES adder.h DESTINATION include)