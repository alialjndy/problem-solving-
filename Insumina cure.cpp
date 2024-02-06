#include<iostream>
using namespace std; 
int main(){
	int k , l , m , n , d ;
	cin >> k ; 
	cin >> l ; 
	cin >> m ; 
	cin >> n ;
	cin >> d ;
	int count = 0 ; 
	int array[d] ; 
	for (int i = 1; i <=d ; i++){
		array[i-1] = i ; 	
	}

	for(int i = 0 ; i<d ; i++){
		if(array[i] % k == 0 or array[i] % l == 0 or array[i] % m == 0 or array[i] % n == 0){
			count++ ;
		}
	}
	cout<<count ; 
	
	return 0 ; 
}
