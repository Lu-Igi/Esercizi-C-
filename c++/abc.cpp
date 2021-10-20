#include<iostream>
using namespace std;
int main ()
{
 int a,b,c;
 cout<<	"introduci a: "  ;
 cin>>a;
 cout<< "introduci b: "  ;
 cin>>b;
 cout<< "introduci c : " ;
cin>>c;
if(a>b) if (a>c)
{	
cout<< "il maggiore e' c"<<c;
}

else

{if (b>c)

{	
cout<< "il maggiore e' b"<<b;
}
else 
{cout<< "il maggiore e' c"<<c;
}
cout<< "\n" ;
}
system ("pause") ;
return 0;
}