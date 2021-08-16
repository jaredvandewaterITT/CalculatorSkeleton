list(APPEND _sources ../inc/Calculator.h Calculator.cpp)
list(APPEND _sources ../inc/IOperation.h IOperation.cpp)
list(APPEND _sources ../inc/IUnaryOperator.h IUnaryOperator.cpp)
list(APPEND _sources ../inc/IBinaryOperator.h IBinaryOperator.cpp)
list(APPEND _sources ../inc/TestOperation.h TestOperation.cpp)
list(APPEND _sources ../inc/AbsOperator.h AbsOperator.cpp)
list(APPEND _sources ../inc/AdditionOperator.h AdditionOperator.cpp)
list(APPEND _sources ../inc/ParenthesisOperation.h ParenthesisOperation.cpp)

# Set the output folder where your program will be created
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${PROJECT_NAME} main.cpp ${_sources})