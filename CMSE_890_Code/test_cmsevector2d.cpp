#include "cmsevector2d.h"
#include "cmsevector2d.cpp"
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int main()
{
  for (int n = 0, n < 10, ++n){
    // First create instance of a random device
    random_device rnd_device;
    // Specify the engine and distribution - let's use the mersenne engine/twister
    mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    uniform_real_distribution<double> dist{-10, 10};

    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);

    std::vector<double> u(2); //assign vector u 2 values for x and y
    std::vector<double> v(2); //assign vector v 2 values for x and y
    std::vector<double> k(1); //assigns a constant value k (scalar)
    generate(begin(u), end(u), gen); //generate a 2d vector for u
    generate(begin(v), end(v), gen); //generate a 2d vector for v
    generate(begin(k), end(k), gen); //generate a scalar value for the k



               };


        };


    // Optional -
    for (auto i : u) {
        cout << i << " \ n";
    //}
    // Optional
    for (auto i : v) {
        cout << i << " \ n";
    //}
    // Optional
    for (auto i : k) {
        cout << i << " \ n";
    //}

  cout << "u =" << u << " \ n " ;
	cout << "v =" << v << " \ n " ;

	cout << "-v =" <<-v << " \ n " ;
	cout << "u + v =" << u + v << " \ n " ;
	cout << "uv =" << uv << " \ n " ;
	cout << "u * v =" << u * v << " \ n " ;

	cout << "u + (1,1) =" << u << " \ n " ;
	cout << "v-(1,1) =" << v << " \ n " ;
//create an empty list for dummy values to ask for user input
std::cout << "Type in a list of two values to represent a 2D vector: "<< endl;
int input_vector = 0;
for (int i = 0; i < 2; i++)
{
    std::cin >> input_vector;
    myVector.push_back(input_vector)

}

for (int i = 0; i < 5; i++)
	{
		std::cout << myVector[i] << endl;
	}
	return;
};
