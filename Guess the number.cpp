#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int a,n,flag;
	srand(time(0));
	a=(rand()% (100-1) + 1);
	cout<<"\t\t\t\t_x_xNumer guessing gamex_x_"<<endl<<endl<<endl;
	flag:
	cout<<"\t\tGuess the number: ";
	cin>>n;
	if(n==a){
		cout<<"\n\n\tYou guessed it right!!!\n\t It`s "<<n<<endl;
		cout<<endl;
		
	}
	if(n>a){
		cout<<"\t  Your guess is too high :("<<endl;
		cout<<endl;
		goto flag;
	}
	if(n<a){
		cout<<"\t  Your guess is too low :("<<endl;
		cout<<endl;
		goto flag;
	}


}
