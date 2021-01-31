#include<iostream>
using namespace std;
int p[10],i;
void cal(int o, int b ,int n )
 {  for(i=0;i<n;i++)
      {  p[i] = rand()%10 ;
	  cout<<"going through"<<i+1<<"packet\n" ;
	    if(p[i]>b)
	       cout<<"bucket overflow\n" ;
	     else
	       { cout<<"incoming packet" <<p[i] <<"\n";
		 while(p[i]>0)
		   {  p[i] -= o ;
			if(p[i]>0)
				{cout<<"bytes left "<<p[i]<<"\n" ;}
			else
				cout<<"transmittion done\n" ;
		     }
		}
	}
}

int main()
{ 
int bsize,n,out;
  cout<<"enter the bucket size\n" ;
  cin>>bsize ;
 cout<<"enter the flow rate \n";
   cin>>out ;
   cout<<"enter the number of packets\n";
  cin>>n;
  cal(out,bsize,n);
return(0);
}
