#include<vector>
#include<iostream>
#include<cctype>  // for tolower
#include <algorithm>  // for std::transform

typedef bool (*CompareFn)(const std::string&, const std::string&);

void sort(std::vector<std::string>& a, CompareFn compare) {
    int n = a.size();
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(compare(a[j], a[j+1])) {
                std::swap(a[j], a[j+1]);
            }
        }
    }
}

bool compareAsc(const std::string& a, const std::string& b) {
    return a > b;
}

bool compareSize(const std::string& a, const std::string& b) {
    return a.size() > b.size();
}

int main() {
    std::vector<std::string> vec = {"Banana", "apple", "Cherry", "banana", "Apple", "cherry"};
    /*
    final result should be:
        apple
        Apple
        Banana
        banana
        Cherry
        cherry
    */ 

    // TODO step 1: fix the lambda's type
    auto compareAscNoCaseLambda = [](const std::string& a, const std::string& b) {
        // TODO step 2: create two new strings which are copies of the original strings
        std::string aLower = a;
        std::string bLower = b;

        // TODO step 3: convert each of the strings to lower case using std::transform and tolower
        std::transform(a.begin(), a.end(), aLower.begin(), tolower);
        std::transform(b.begin(), b.end(), bLower.begin(), tolower);
        
        // TODO step 4: compare converted lowercase strings and return ordering
        return aLower > bLower;
    };  

    // remember: our bubble sort function sort() will use the lambda function compareAscNoCaseLambda 
    // to compare between two strings and decide whether to swap them or not
    sort(vec, compareAscNoCaseLambda);

    for(std::string str : vec) {
        std::cout<< str <<"\n";
    }
}