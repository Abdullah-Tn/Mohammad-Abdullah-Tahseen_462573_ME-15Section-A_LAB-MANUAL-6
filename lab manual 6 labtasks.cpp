
#include<iostream>
using namespace std; 
int main()
{
	cout<<"TASK 1:- Fibonacci \n"; 
//Generate the fibonacci sequence using nested loops
int a=0, b=1, c, n;
cout<<"Please enter the number of terms in  your sequence:- \n"; 
cin>>n; 
//Inputting number of terms in sequence
for(int j=0; j>=0; j++)
{
//Nested if-else loop. EXternal loop to check whether input value is VALID or not
if(n<=0)
{cout<<"INVALID NUMBER ENTERED, PLEASE RE-ENTER\n";
cin>>n; 
continue;
}
else{
cout<<"The fibonacci sequence is:-\n";
//Outputting first two terms of the sequence
cout<<a<<' '<<b;
//Interal loop to generate the actual sequence
for (int i=0; i<=(n-3); i++)
{   
	c= a + b; 
	a = b; 
	b = c; 
//Progressively adding 2 adjacent terms to output the 3rd term
	cout<<' '<<c;
}
break;
}

}
 
cout<<"\n TASK 2:- Floyds's Triangle \n"; 
/*Write a C++ program to create floyd's triangle with nested loops 
1
2 3 
4 5 6 
7 8 9 10
*/
cout<<"Enter how many rows you want in the triangle? \n"; 
int n1, p=1; 
//Input number of rows
cin>>n1; 
//Nested loops being used
cout<<"The Floyd's triangle is: - \n";
for (int i=0; i<=n1; i++)
//EXternal loop for number of rows
    {
    	//Internal loop used to output elements for each column
    	for(int j=1; j<=i; j++)
    	{ cout<<p<<' ';
    	//Displaying progressively increasing numbers
		p++;}
    	
    	cout<<endl; 
	}

return 0;
}


