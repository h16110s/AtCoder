/**
 * D - Powerful Discount Tickets       C++14 (GCC 5.4.1)
 * AC
**/
#include <iostream>
#include <cmath>
#include <queue>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
#include <numeric>
using namespace std;
template< class RandomIter >
void quick_sort(RandomIter first, RandomIter last)
{
  if (last - first <= 1) { return; }
  RandomIter i = first, j = last - 1;
  for (RandomIter pivot = first;; ++i, --j)
  {
    while (*i < *pivot) { ++i; }
    while (*pivot < *j) { --j; }
    if (i >= j) { break; }
    std::iter_swap(i, j);
  }
  quick_sort(first, i);
  quick_sort(j + 1, last);
}

int main(){
    int N, M;
    cin >> N >> M;

    priority_queue <long long> A;

    for(int  i = 0 ; i < N ; i++){
        long long a;
        cin >> a;
        A.push(a);
    }

    for(int i = 0; i < M ;i++){
        long long at = A.top();
        at /= 2;
        A.pop();
        A.push(at);
    }

    long long sum = 0;
    // for(int i = 0; i < A.size() ; i++){
    while(!A.empty()){
        sum += A.top();
        A.pop();
    }

    cout  << sum << endl;
}