#include <iostream>
using namespace std;
int main(){
  int n, key;
  cout << "How manay no of elements you enter?";
  cin >> n;
  cout << "Enter No:";
  cin >> n;
  int arr[n];
   int position = -1;
  for (int i = 0; i<n; i++){
    cout << "Number"<< i+1<<endl;
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++){
    if (arr[i]==key){
      cout << "Number "<< i + 1;
    }
  }
 
  if(position ! = -1){
    cout << "Number key is found in position:"<< position<<endl;
    else{
      
    }

  }

}