g++ -j4 -O0 -g -DIS_IN_DEBUG=1 -DTRACK_MEMORY=1 ./src/betterCPP/core/*.c* ./src/betterCPP/low_level/*.c* ./src/betterCPP/math/*.c* ./src/betterCPP/text/*.c* ./src/*.c* -o ./bin/test.exe -Wall -Wextra -Wcomment -Wno-unknown-pragmas


test for precompiled header file
g++ -x c++-header ./src/betterCPP/core/__base__.hpp -o ./src/betterCPP/core/__base__.hpp.gch

g++ -x c++-header ./src/betterCPP/low_level/__base__.hpp -o ./src/betterCPP/low_level/__base__.hpp.gch

g++ -x c++-header ./src/betterCPP/math/__base__.hpp -o ./src/betterCPP/math/__base__.hpp.gch

g++ -x c++-header ./src/betterCPP/text/__base__.hpp -o ./src/betterCPP/text/__base__.hpp.gch




g++ -include ./src/betterCPP/core/__base__.hpp -include ./src/betterCPP/low_level/__base__.hpp -include ./src/betterCPP/text/__base__.hpp -include ./src/betterCPP/math/__base__.hpp -O0 -g -DIS_IN_DEBUG=1 -DTRACK_MEMORY=1 ./src/betterCPP/core/*.c* ./src/betterCPP/low_level/*.c* ./src/betterCPP/math/*.c* ./src/betterCPP/text/*.c* ./src/*.c* -o ./bin/test.exe -Wall -Wextra -Wcomment -Wno-unknown-pragmas



g++ -include ./src/betterCPP/core/__base__.hpp -O0 -g -DIS_IN_DEBUG=1 -DTRACK_MEMORY=1 ./src/betterCPP/core/*.c* ./src/betterCPP/low_level/*.c* ./src/betterCPP/math/*.c* ./src/betterCPP/text/*.c* ./src/*.c* -o ./bin/test.exe -Wall -Wextra -Wcomment -Wno-unknown-pragmas
