#include<iostream>
using namespace std;
int LSA (int number){
	int array[12]={10,20,30,40,50,60,70,80,90,99,12,23};
	for (int index=0; index<12; index++){
		if(array[index]==number){
		cout<<"the number is found";
		return 1;
		}
	}
	cout<<"the number is not found";
}
int main(){
	int array[12];
	LSA(30);
	return 1;
}