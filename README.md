# Notice! that this library is in beta testing many features are not fully stable.

**How-to-use**:
1. include "ccarr.hpp" file into your code, like so `#include "ccarr.hpp"`

**Commands**:

assuming you have array like `char test[] = "abcd";`
1. `push_back(test, char)` command pushes 'char' into end of array (char - it is one character of ASCII)
2. `push_back(test, std::string(string))` command pushes 'string' into end of array
3. `push_front(test, char)` command pushes 'char' into beginning of array (char - it is one character of ASCII)
4. `push_front(test, std::string(string))` command pushes 'string' into beginning of array


**TO-DO**:
* Fix out of the bounds cases
* Add Integer arrays support
