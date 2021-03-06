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
#include <tuple> //tuple class
#include <bitset> //bitset class

//difference_type (iterator arithmetic) and ::size_type are for strings/vectors
////ptrdiff_t (pointer arithmetic) and size_t are for built-in arrays (inside cstddef headers!)

//-c is for separate compilation (creates .o object files)
//-D is to define preprocessor variables at the top of files (e.g. -D NDEBUG)
//-std=c++11 for C++11 support

using namespace std;


//This assumes we start test numbers starting at zero

template <unsigned N> class studentQuiz;
template <unsigned N> unsigned testScore(const studentQuiz<N>&, const studentQuiz<N>&);
template <unsigned N> ostream& operator<<(ostream&, const studentQuiz<N>&);

template <unsigned N> class studentQuiz{
    friend unsigned testScore<N>(const studentQuiz<N>&, const studentQuiz<N>&);
    friend ostream& operator<< <N>(ostream&, const studentQuiz<N>&);
public:
    studentQuiz() = default;
    studentQuiz(unsigned long long i): response(i) { }
    studentQuiz(const string& s): response(s) { }

    inline void updateResponse(unsigned quNo, bool value) { response.set(quNo, value);}
private:
    bitset<N> response; //this is at least 16 bits
};

template <unsigned N> unsigned testScore(const studentQuiz<N>& student, const studentQuiz<N>& perfectAns){
    bitset<N> score = (student.response^perfectAns.response);
    score.flip();
    return score.count();
}

template <unsigned N> ostream& operator<<(ostream& os, const studentQuiz<N>& rhs){
    return os << rhs.response;
}

int main(){


    studentQuiz<10> student("1011011011");

    studentQuiz<10> answers("1011011101");

    student.updateResponse(3, false);

    cout << student << endl;
    cout << answers << endl;

    cout << testScore(student, answers);



}














