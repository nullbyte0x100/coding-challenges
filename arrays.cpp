#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
	int a{};
	std::cin>>a;
	int arr[a];
	for (int i=0;i<a;i++){
		std::cin>>arr[i];
	}
	for (int i=a-1;i>=0;i--){
		std::cout<<arr[i]<<" ";
	}
	return 0;

}
