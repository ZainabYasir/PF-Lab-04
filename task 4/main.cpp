#include<iostream> 
using namespace std;
int main(){
int num1,num2;
cout<<"Enter a number:"<<endl;
cin>>num1;
cout<<"Enter second number:"<<endl;
cin>>num2;
if(num1>num2){
cout<<num1<<" is larger.";    
}
else{
cout<<num2<<" is larger.";    
}
return 0;
}