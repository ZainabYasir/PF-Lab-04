#include<iostream>
using namespace std;
int main(){
string light;
cout<<"Enter a light colour:";
cin>>light;
if(light=="red"){
cout<<"Stop your vehicle.";    
}
else if(light=="yellow"){
cout<<"Get ready to move.";    
}
else if(light=="green"){
cout<<"You can go.";    
}
else{
cout<<"Wrong input.";    
}
return 0;
}