#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std ; 
int main(){
	int size , k1 = 0, k2 =0 , k3 , k4 , one = 0 , two = 0  , three = 0 , four = 0, total = 0 ;   
	cin >> size; 
	int array[size]; 
	for(int i = 0 ; i<size; i++){
		cin>>array[i];
		if(array[i] == 1) {one++ ;} 
		else if (array[i] == 2) {two++;}
		else if(array[i] == 3) {three++ ; } 
		else if(array[i] == 4) {four++ ; }
	}

	k2 = two / 2 ; 
	k3 = three ;
	k4 = four ; 
	
	two = two % 2;
	
	one = one - three - two - two; 
	
	if(two != 0){
		two = 0 ; 
		k2++ ; 
	}
	if(two < 0){
		two = 0 ;
	}
	if(one > 0){
		k1 = one / 4 ;
		if(one % 4 != 0){
			k1++; 
		} 
	}
	if(two > 0){
		k2++;
	}
	cout<<k1 + k2 + k3 + k4 ; //1 1 2 2 3 3 4 4  
	
	return 0 ; 	
}






