//code without using arrays

#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int i,a,b,temp;
   a=0;
   b=1;
   cout<<a<<" ";
   cout<<b<<" ";
   for(i=2;i<n;i++){
       temp=b;
       b=b+a;
       a=temp;
       cout<<b<<" ";
       
   }

    return 0;
}

//code using arrays
#include <iostream>
using namespace std;
int main() {
   int n,i;
   cin>>n;
  int a[n];
  a[0]=0;
  a[1]=1;
  cout<<a[0]<<" ";
  cout<<a[1]<<" ";
  for(i=2;i<n;i++){
      a[i]=a[i-2]+a[i-1];
      cout<<a[i]<<" ";
  }
  
}
