#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int z = 1,n;
cin>>n;
if(n==1)cout<<1<<"\n";
else if(n>=2){
for(i=0;z<=n;++i){
//z=z*2
//z=pow(2,i);
z=z<<1;
cout<<z<<" ";
}
}
return 0;
}
