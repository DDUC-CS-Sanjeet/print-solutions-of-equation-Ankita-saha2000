#include<iostream>
using namespace std; 

void findNDigitNumsUtil(int n, int sum, char out[20], int index) 
{ 
   
    if (index > n || sum < 0) 
        return; 
  
    
    if (index == n) 
    { 
        
        if(sum == 0) 
        { 
            out[index] = ' '; 
            cout << out << " "; 
        } 
        return; 
    } 
  
    
    for (int i = 0; i <= 9; i++) 
    { 
    
        out[index] = i + '0'; 
  
        
        findNDigitNumsUtil(n, sum - i, out, index + 1); 
    } 
} 
  

void findNDigitNums(int n, int sum) 
{ 

    char out[n + 1]; 
  
   
    for (int i = 1; i <= 9; i++) 
    { 
        out[0] = i + '0'; 
        findNDigitNumsUtil(n, sum - i, out, 1); 
    } 
} 
  

int main() 
{ 
    int n, sum ;
	cout<<"Enter the number of terms::";
	cin>>n;
	cout<<"Enter the needed summation::";
	cin>>sum; 
  
    findNDigitNums(n, sum); 
  
    return 0; 
}
