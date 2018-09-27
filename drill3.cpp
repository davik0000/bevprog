#include "std_lib_facilities.h"
int main()
{
	cout<<"Enter the name of the person you want to write to (followed by 'enter'):\n";
string first_name;
cin>>first_name;
cout<<"Dear "<<first_name<<"!\n";
cout<<"Hy. How are you? I am fine. I miss you.\n";
string friend_name;
cin>>friend_name;
cout<<"Have you seen "<<friend_name<<"lately ?\n";
char friend_sex = 0;
cout<<"Barátod neme ? (m-male f-female)\n";
cin>>friend_sex;
if (friend_sex == 'm') {
	cout<<"If you see "<<friend_name<<" please ask him to call me.\n";}
if (friend_sex == 'f') {
	cout<<"If you see "<<friend_name<<" please ask her to call me.\n";}
cout<< "Kora\n";
int age;
cin>>age;
if (age<=0) {
	simple_error("You're kidding!");}
if (age>=110) {
	simple_error("You're kidding");}
if (age!=0, 110) {
cout<<"I hear you just had a birthday party and you are " <<age<<" old\n";}
if (age<12) {
	cout<<"Next year you will be "<<age+1<<" years old.\n";}
if (age==17) {
	cout<<"Next year you will be able to vote.\n";}
if (age==70) {
	cout<<" I hope you are enjoying retirement.\n";}
cout<<" Your's sincerely,\n\n";
cout<<" Dávid\n";

}
