#include <iostream>
#include <vector>

using namespace std;

int majority_elem( vector<int> &arr, int low, int high ) {
  if (low == high) return -1;
  if (low +1 == high) return arr[low];

  int low_elem  = majority_elem( arr, low, ( low + high - 1 ) / 2 + 1);
  int high_elem = majority_elem( arr, ( low + high - 1 ) /2 + 1, high );  
  
  int count=0;
  for (int i = low; i < high; i++ ) {
    if ( arr[i] == low_elem ) count+=1;
  }
  if ( count > ( high - low ) / 2 ) return low_elem;

  int count1=0;
  for (int i = low ; i <high; i++) {
    if (arr[i] == high_elem ) count1+=1;
  }
  if ( count1 > (high - low)/2) return high_elem;

  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (size_t i = 0; i < arr.size(); ++i){
    cin >> arr[i];
  }
  cout << (majority_elem(arr, 0, arr.size()) != -1)<<'\n';
}