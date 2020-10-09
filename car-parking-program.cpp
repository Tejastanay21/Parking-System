#include<iostream>
using namespace std;
int main()
{
int u_input,amount=0,count=0;
int rickshaw=0,bus=0,car=0;
cout<<"Enter your number in between 1 to 5"<<endl;

while (true)
{
cout<<"Press 1 for rickshaw"<<endl;
cout<<"Press 2 for car"<<endl;
cout<<"Press 3 for bus"<<endl;
cout<<"Press 4 to show record"<<endl;
cout<<"Press 5 to delete record"<<endl;
cin>>u_input;
if(u_input==1)
{
if (count<=50)
{
rickshaw++;
amount=amount + 100;
count =count + 1;
}
else 
cout<<"Parking is full"<<endl;
}
else if(u_input==2)
{
if (count<=50)
{
car++;
amount=amount + 200;
count =count + 1;
}
else 
cout<<"Parking is full"<<endl;
}
else if(u_input==3)
{
if(count<=50)
{
bus++;
amount=amount + 300;
count =count + 1;
}
else
cout<<"Parking is full"<<endl;
}
else if(u_input==4)
{ 
cout<<"**************"<<endl<<endl;
cout<<"Total amount of vehicles fee = "<<amount <<endl;
cout<<"Total number of vehicles are parked = "<<count<<endl;
cout<<"Parked Rickshaw's = "<<rickshaw<<endl;
cout<<"Parked car's = "<<car<<endl;
cout<<"Parked buses = "<<bus<<endl<<endl;
cout<<"**************"<<endl<<endl;

}
else if(u_input==5)
{
amount=0;
count =0;
rickshaw=0;
car=0;
bus=0;
cout<<"**************"<<endl<<endl;
cout<<"Record Deleted"<<endl<<endl;
cout<<"**************"<<endl<<endl;
}
else 
{
cout<<"Invalid input"<<endl;
}
}
return 0;
}
