/*
I use std::chrono::steady_clock::time_point to compute time elapsed.
*/
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std;

long factorial_recursive(long a)
{
 if(a==1)
 {
  return 1;   
 }
 return a*factorial_recursive(a-1);
}
int main ()
{
  using namespace std::chrono;
  long n=15;
  
  steady_clock::time_point clock_begin = steady_clock::now();
  
  long facn=factorial_recursive(n);
  

  steady_clock::time_point clock_end = steady_clock::now();

  steady_clock::duration time_span = clock_end - clock_begin;

  double nseconds = double(time_span.count()) * steady_clock::period::num / steady_clock::period::den;
  cout<<"fac of "<<n<<" is "<<facn<<"."<<endl;
  cout << "It took me " << nseconds << " seconds.";
  cout << endl;
  return 0;
}
