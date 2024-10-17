#include<iostream>
using namespace std;
int main(){
int num1,num2;
char oper;
cout<<"Enter two numbers:"<<endl;
cin>>num1>>num2;
cout<<"Enter an operator:"<<endl; 
cin>>oper;
if(oper=='+'){
cout<<"Sum:"<<num1+num2;
}
else if(oper=='-'){
cout<<"Difference:"<<num1-num2;   
}
else if(oper=='*'){
cout<<"Porduct:"<<num1*num2;
}
else{
 cout<<"Division:"<<float(num1)/num2;  
}
return 0;
}
