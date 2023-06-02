Задача 36
#include <iostream>
using namespace std;
int main()
{
    int n,k;
	cout<<"K:";
	cin>>k;
	cout<<"N:";
	cin>>n;
	int i,j;
	float rez=0, nk;
	  for(i=1; i<=n; ++i) {
	  	nk=i;
	  	for(j=1; j<=k;++j) nk*=i;
	  	rez+=nk;
	  } 
	  cout<<rez;
}
Задача 37
	  int n;
	  cout<<"N:";
	  cin>>n;
	  int i,j;
	  float rez = 0,ni;
	  for(i=1;i<=n;++i){
	  	ni=i;
	  	for (j=1; j<=i;++j)ni*=i;
	  	rez += ni;
	  }
	  cout<<rez;
}
Задача 39
	  int a,b;
	  cout<<"A:";
	  cin>>a;
	  cout<<"B:";
	  cin>>b;
	  int i,j;
	  for (i=a;i<=b;++i){
	  	for(j=1;j<=i;++j)
	  	cout<<i<<" ";
	  }
	                                                              
 }
