//#define NDEBUG
#include <iostream>
#include <fstream> //IO file stream
#include <sstream> //stringstream
#include <iterator> //begin/end functions for arrays
#include <vector>
#include <cstring> //c-style string functions
#include <cstddef> //for size_t type and ptr_diff type
#include <stdexcept> //Plain/Runtime/Logic exception classes
#include <initializer_list> //for initializer_list type
#include <cstdlib> //for preprocessor variables like NULL, EXIT_SUCCESS and EXIT_FAILURE
#include <cassert> //assert preprocessor macro
#include <array>
#include <list>
#include <deque>
#include <forward_list>
#include <string>
#include <stack> //sequential container adaptor
#include <queue> //sequential container adaptor, includes priority_queue
#include <algorithm>
#include <algorithm> //more container algorithms

//difference_type (iterator arithmetic) and ::size_type are for strings/vectors
//ptrdiff_t (pointer arithmetic) and size_t are for built-in arrays (inside cstddef headers!)

//-c is for separate compilation (creates .o object files)
//-D is to define preprocessor variables at the top of files (e.g. -D NDEBUG)
//-std=c++11 for C++11 support (Mingw-w64 was installed to allow c++11 extra features)

using namespace std;



int main(){

    vector<int> test = {1,2,3,5,3,5,3,2,4,6,7,4,3,2,5,3,5,7,3,3,3,5,4,4,6,7,4,3,2,1};

    list<string> test2 = {"a", "aa", "mother", "fucker", "shit", "bitch", "jon", "a", "snow", "snow"
                          "knows", "nothing", "at", "a", "all"};

    cout << count(test2.begin(), test2.end(), "a");








}










