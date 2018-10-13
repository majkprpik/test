#include<iostream>
#include<fstream>

using namespace std;

int main() {
	
	ifstream in; 
	in.open("input.in");
	ofstream out;
	out.open("output.out");
	int n, temp = 0;
	in>>n;
	int input[n];
	for(int i = 0; i < n; i++){
		in>>input[i];
	}	

	for(int i = 0; i < n; i++) {
		for(int j = i+1; j<n; j++) {
			if(input[j] < input[i]) {
				temp = input[j];
				input[j] = input[i];
				input[i] = temp;	
			}
		}
	}

	

	for(int i = 0; i < n; i++){
		cout<<input[i];
		out<<input[i]<<endl;
	}

	in.close();
	out.close();
	return 0;
}	
