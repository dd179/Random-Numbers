#include <iostream>
#include <cstdlib> //required for rand()
#include <ctime> //required for time()
using namespace std;

int main() {

    int random_number {};
    size_t count {5}; //number of random number to generate

    int min {1};    //lower bound
    int max {10};   //upper bound


    cout<<"RAND_MAX on my system is:"<<RAND_MAX<<endl;
    srand(time(nullptr)); //We have to use srand() because we don't want to get the same sequence random numbers every run

    for(size_t i{1};i<=count;++i){
        random_number=rand()%(max-min+1)+ min; //It will generate a random number between min and max bounds
        cout<<random_number<<endl;
    }

    return 0;
}
