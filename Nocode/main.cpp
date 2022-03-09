#include <iostream>
#include <vector>

using namespace std;

int main(){
  cout<<"Hello"<<endl;
  
  vector<int> num{1,2,3,4,5};
  cout<<num.capacity()<<endl;
  cout<<num.size()<<endl;

  num.push_back(6);
  cout<<num.capacity()<<endl;
  cout<<num.size()<<endl;
  
  
  return 0;
}