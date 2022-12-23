/*
I use std::chrono::steady_clock::time_point to compute time elapse.
*/
#include <iostream>
#include <chrono>
using namespace std;

long fib_recursive(long n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	return fib_recursive(n-1)+fib_recursive(n-2);
}
int main()
{
  using namespace std::chrono;
  long n=15;
  
  steady_clock::time_point clock_begin = steady_clock::now();
  
  long fibn=fib_recursive(n);
  
  steady_clock::time_point clock_end = steady_clock::now();

  steady_clock::duration time_span = clock_end - clock_begin;

  double nseconds = double(time_span.count()) * steady_clock::period::num / steady_clock::period::den;
  cout<<"fac of "<<n<<" is "<<fibn<<"."<<endl;
  cout << "It took me " << nseconds << " seconds.";
  cout << endl;
  return 0;
	return 0;
}
