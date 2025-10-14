#include<iostream>
using namespace std;
int main(){
   /*int arr[6] = {10, 20, 30, 40, 50};
   for(int i = 0; i < 6; i++){             //traversing array using for loop
      cout << arr[i] << endl;
   }
  cout<<endl;
  int n = 3; //index
  //cout<<"enter index";
  //cin>>n;
  /*int ele = 100;
  //cout<<"enter element";
   // cin>>ele;
    for (int i=n;i<6;i++){
        if(i==n){
            arr[i]=ele;
        }
        else
        arr[i+1]=arr[i];
    }
for(int i = 0; i < 6; i++){             //traversing array using for loop
      cout << arr[i] << endl;
   }*/



//removing element
int arr[5] = {10, 20, 30, 40, 50};
cout<<"Original array"<<endl;
   for(int i = 0; i < 5; i++){             //traversing array using for loop
      cout << arr[i] << " ";
   }
  cout<<endl;
  int n = 1; //index
     for (int i=n;i<5-1;i++){
      arr[i]=arr[i+1];                  //removing element
  }
cout<<"Array after removing element at index "<<n<<endl;
  for(int i = 0; i < 5-1; i++){             //traversing array using for loop
      cout << arr[i] << " ";
   }

}