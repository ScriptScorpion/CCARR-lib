# Notice! that this library is in beta testing many features are not fully stable.

**How-to-use**:
1. include "ccarr.hpp" file into your code, like so: `#include "ccarr.hpp"`
2. for dynamic arrays include "cdarr.hpp" file into your code, like so: `#include "cdarr.hpp"`

**Commands**:

assuming you have array like `char test[] = "abcd";`
1. `push_back(test, char)` command pushes 'char' into end of array (char - it is one character of ASCII)
2. `push_back(test, std::string(string))` command pushes 'string' into end of array
3. `push_front(test, char)` command pushes 'char' into beginning of array (char - it is one character of ASCII)
4. `push_front(test, std::string(string))` command pushes 'string' into beginning of array
5. `clear(test)` command will remove all elements from array

for dynamic arrays, like `char *arr = new char[] {'a', 'b', 'c', 'd', '\0'};`   
1. `push_front_d(arr, char)` command pushes 'char' into beginning of dynamic array (char - it is one character of ASCII)
2. `push_back_d(arr, char)` command pushes 'char' into end of dynamic array (char - it is one character of ASCII)
3. `clear_d` command will remove all elements from dynamic array
