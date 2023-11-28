
#include<iostream>
using namespace std; 
int main()
{
	cout<<"TASK 1:- Adding Prime Numbers from 1 to 50\n";
//program using break or continue statement that only adds prime numbers from 1 to 50 and displays the sum on screen.  
bool isprime=true; 
//bool statement storing true and false value for whether number is prime or not
int sum=0; 
//running eXternal loop to run natural numbers from 1 to 50.
//1 is eXcluded since it is neither prime nor composite
for (int num=2; num<=50; num++)
{
	//Internal loop to check whether said number at a certain iteration is prime or not
  for(int i=2; i<=num/2; i++ ){
  	/*if number is less than 2 or divisible by any of the iterating values
  	 then isprime becomes false, if not following the if and else if conditions; 
	   isprime is true*/
  	if(num<2)
    {isprime = false;
	break;}
	else if(num%i==0)
  	{isprime = false;
  	 break;
  	}
  	else
  	{ isprime = true;}
    }
    /*if number is prime, the value of the sum of the numbers is stored in 'sum'
        by progressively adding the neXt prime number*/
  if(isprime==true)
  {sum = sum + num; }
  else
  {continue;}
}
cout<<sum; 


   cout<<"\n TASK 2:- Printing the pattern:- \n";
/*Write a program in C++ to create the following pattern:- 
1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
cout<<"How many rows do you want in your pattern?"<<endl; 
int n; //Inputting number of rows
cin>>n; 
cout<<"Your pattern is:- \n";
//EXternal loop for number of rows 
for(int i=1; i<=n; i++)
{
	/*Internal loop for number of columns and the elements in the columns, the 
     iterating value of j for each ro is displayed as output which gives the required patterm*/
	for(int j=1; j<=i; j++)
	{cout<<j<<' ';    
	}
	cout<<endl; 
}

   cout<<"\n TASK 3:- Printing the patterm:- \n"; 
cout<<"How many rows do you want in your pattern?"<<endl; 
int n1; //Inputing number of rows
cin>>n1;
cout<<"Your pattern is:- \n";
//EXternal for loop for number of rows 
for(int i=0; i<2*n1; i+=2)
{
	if(i==0)
	    //to display the first column
	    {
	    cout<<'1';}
	else{
		//INternal for loop inside the else statement to display rest of the columns
	    for(int j=0; j<i; j++ )
	    { 
	    cout<<2*(i/2)<<' ';
	    }
        }    
	cout<<endl; 
}
return 0;
}
