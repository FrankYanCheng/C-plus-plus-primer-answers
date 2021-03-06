//#define NDEBUG
#include <iostream>
#include <fstream> //IO file stream
#include <sstream> //stringstream
#include <iterator> //begin/end functions for arrays
#include <string>
#include <vector>
#include <cstring> //c-style string functions
#include <cstddef> //for size_t type and ptr_diff type
#include <cctype> //for chararacter related functions
#include <stdexcept> //Plain/Runtime/Logic exception classes
#include <initializer_list> //for initializer_list type
#include <cstdlib> //for preprocessor variables like NULL, EXIT_SUCCESS and EXIT_FAILURE
#include <cassert> //assert preprocessor macro
#include <array>
#include <list>
#include <deque>
#include <forward_list>
#include <stack> //sequential container adaptor
#include <queue> //sequential container adaptor, includes priority_queue
#include <algorithm>
#include <numeric> //more container algorithms
#include <functional> //for bind library function (and ref/cref), and library defined function objects
#include <map> //for map and multimap associative containers
#include <set> //for set and multiset associative containers
#include <unordered_map> //for unordered_map and unordered_multimap
#include <unordered_set> //for unordered_set and unordered_multiset
#include <utility> //for pair library type (used in map associative container), also for std::move and std::forward
#include <memory> //for dynamic memory smart pointers
#include <new> //nothrow and bad_alloc types, and allocator class
#include <type_traits> //type transformation templates
//
//
////difference_type (iterator arithmetic) and ::size_type are for strings/vectors
////ptrdiff_t (pointer arithmetic) and size_t are for built-in arrays (inside cstddef headers!)
//
////-c is for separate compilation (creates .o object files)
////-D is to define preprocessor variables at the top of files (e.g. -D NDEBUG)
////-std=c++11 for C++11 support


#include "Sales_data.h"

using namespace std;

template <typename T> unsigned occurrence(const vector<T>& c, T v){

    unsigned sum = 0;
    for(const auto& it : c){
        if(it == v) ++sum;
    }
    return sum;

}

template <> unsigned occurrence(const vector<const char*>& c, const char* v) {

    unsigned sum = 0;
    for(const auto& it : c){
        if(!strcmp(it, v)) ++sum;
    }
    return sum;

}

int main(){

    vector<int> i = {1,2,6,1,326,1,4,4,1,2,61,6,3,7,2,7,2};
    vector<double> d = {1.78,2,5,2.4,5,2.3,5.2,5.2,5.3,5.2};
    vector<string> s = {"a", "b", "fmom", "ca", "plwd", "ca", "ca", "plow", "a"};
    vector<const char*> c = {"a", "a", "fmom", "ca", "a", "ca", "ca", "plow", "a"};

    cout << occurrence(i, 1) << endl;
    cout << occurrence(d, 5.2) << endl;
    cout << occurrence(s, string("ca")) << endl;
    cout << occurrence(c, "a") << endl;



}














