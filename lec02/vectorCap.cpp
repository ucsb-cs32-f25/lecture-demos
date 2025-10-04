#include<iostream>
#include<vector>
int main() {
    // size() returns the number of elements 
    // capacity() returns number of elements 
    //      that can be held in currently allocated storage 
    std::vector<int> v;
    std::cout<<"size="<<v.size()<<"\n";
    std::cout<<"cap="<<v.capacity()<<"\n";

    // at this point size = 0, capacity = 0

    for(int i=0; i<9; i++) {
        v.push_back(1);  
        std::cout<<"size="<<v.size()<<"\n";
        std::cout<<"cap="<<v.capacity()<<"\n";
    }

    // v.shrink_to_fit();  

    std::cout<<"size="<<v.size()<<"\n";
    std::cout<<"cap="<<v.capacity()<<"\n";

    return 0;

}