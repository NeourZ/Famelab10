#include<iostream>
using namespace std;

int main(){
	int i = 1, sum = 0 ;
	char grade ;
	int count[5] = {0, 0, 0, 0, 0};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade;
		if(grade == 'A'){
			count[0] = count[0] + 1 ;
			i++ ;
			sum++ ;
			continue ;
		}
		else if(grade == 'B'){
			count[1] = count[1] + 1 ;
			i++ ;
			sum++ ;
			continue ;
		}
		else if(grade == 'C'){
			count[2] = count[2] + 1 ;
			i++ ;
			sum++ ;
			continue ;
		}
		else if(grade == 'D'){
			count[3] = count[3] + 1 ;
			i++ ;
			sum++ ;
			continue ;
		}
		else if(grade == 'F'){
			count[4] = count[4] + 1 ;
			i++ ;
			sum++ ;
			continue ;
		}
		else{
			if (grade == '0') 
				break;
			else{
				cout << "Wrong input. Please input again.\n" ;
				continue ;
			}
		}
	}while(true);
	
	cout << "In total "<< sum << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	return 0;
}
