// Assignment of PF
// Given by SIR ASHIQUE SHAIKH
//Submited by Ammar Saqib
// Institute SHAH ABDUL LATIF UNIVERSITY
//CLASS BSIT (1st Semester) 
#include <iostream>
#include<conio.h>   
using namespace std;

void add()
{

int x,y,z;
cout<<"Enter 1st number for Addition \t";
cin>>x;

cout<<"Enter 2nd number for Addition\t";
cin>>y;
z=x+y;
cout<<"Your Answer in Addition is \t"<<z<<endl<<endl;
}


void sub(){
int x,y,z;
cout<<"Enter 1st number for  Subtraction  \t";
cin>>x;
cout<<"Enter 2nd number for Subtraction  \t";
cin>>y;
z=x-y;
cout<<"Your Answer in Subtraction is\t"<<z<<endl<<endl;
}

void mul(){
int x,y,z;
cout<<"Enter  1st number for Multiplication  \t";
cin>>x;

cout<<"Enter 2nd number for for Multiplication  \t";
cin>>y;
z=x*y;
cout<<"Your Answer in Multiplication is\t"<<z<<endl<<endl;
}

void div(){

int x,y,z;
cout<<"Enter 1st number for Division \t";
cin>>x;

cout<<"Enter 2nd number for Division \t";
cin>>y;

z=x/y;
cout<<"Your Answer in Division is\t"<<z<<endl<<endl;
}

int main()
{

string k;
float x,y,z;
cout<<"This is menu of operation:\n\n";
cout<<"1.Operators\n";
cout<<"2.If condition\n";
cout<<"3.Function\n";
cout<<"4.Loops\n\n";
cout<<"Please choose any operation\t";
cin>>k;
if (k=="1")
{
	cout<<"i.Arithmetic operators\n";
	cout<<"ii.Relational operators\n";
	cout<<"iii.logical operators\n";
	cout<<"Please chose any one operator:\t";
	cin>>k;
	cout<<"\n";
	
	
	
	
	 if(k=="i")
{
	cout<<"a.Addition\n";
	cout<<"b.Subtraction\n";
	cout<<"c.Multiplication\n";
	cout<<"d.Division\n";
	cout<<"Please chose any one\t";
	cin>>k;
	cout<<"\n";
	  if(k=="a")
	{ 
	cout<<"Enter 1st number for Addition :";
	cin>>x;
	cout<<"Enter 2nd value for Addition :";
	cin>>y;
	z=x+y;
	cout<<"Your Answer in Addition is\t"<<z<<endl;
}
else if(k=="b")
{	
	cout<<"Enter the 1st number for Subtraction :";
	cin>>x;
	cout<<"Enter the 2nd number for Subtraction :";
	cin>>y;
	z=x-y;
	cout<<"Your Answer in Subtraction is\t"<<z<<endl;
}
else if(k=="c")
{

	cout<<"Enter the 1st number for Multiplication :";
	cin>>x;
	cout<<"Enter the 2nd value for Multiplication :";
	cin>>y;
	z=x*y;
	cout<<"Your Answer in Multiplication is\t"<<z<<endl;
}
else if(k=="d")
{

	cout<<"Enter the 1st number for Division :";
	cin>>x;
	cout<<"Enter the 2nd number for Division :";
	cin>>y;
	z=x/y;
	cout<<"Your Answer in Division is\t"<<z<<endl;
}
// complete with d & i next to begun with e &ii
}
else if(k=="ii")
{
	string k;
	cout<<"e.A Greater than B\n";
	cout<<"f.A Less Than B\n";
	cout<<"g.A equal to B\n";
	cout<<"Which you want to perform :\t";
	cin>>k;
	cout<<"\n";
	if(k=="e")
	{
	cout<<"\nPlease enter value of A: ";
	cin>>x;
	cout<<"\nPlease enter value of B: ";
	cin>>y;
	if(x>y)
	{
		cout<<"A is greater than B";
	}
	else {
		cout<<"A is not greater than B";
	}
}

	 else if(k=="f")
	{ 
	cout<<"\nPlease enter value of A: ";
	cin>>x;
	cout<<"\nPlease enter value of B: ";
	cin>>y;
		
      if(x<y)
	{
	
		cout<<"A is Less than B";
	}
	
	else {
		cout<<"A is not less than B";
	}
}
   else if(k=="g")
{	cout<<"\nPlease enter value of A: ";
	cin>>x;
	cout<<"\nPlease enter value of B: ";
	cin>>y;
	
	 if(x==y)
	{
	cout<<"Value of A and B is equal :";	
	}
}
} 
// complete till g start with h
	else if(k=="iii")
{
    cout<<"h. OR \n";
	cout<<"i.AND \n";
	cout<<"j.NOT\n";
	cout<<"Which you want to perform : ";
    cin>>k;
if(k=="h"){
	int x,y,z;
	cout<<"Enter value of A: ";
	cin>>x;
	cout<<"Enter value of B: ";
	cin>>y;
	cout<<"Enter value of C: ";
	cin>>z;
	
	if(x>y || y>z){
		cout<<"A is greater than B or B is greater than C";
	}
	else {
		cout<<"Please Enter value of A greater than B or value of B greater than C";
	}
}
else if (k=="i"){
	int x,y,z;
	cout<<"Enter value of A: ";
	cin>>x;
	cout<<"Enter value of B: ";
	cin>>y;
	cout<<"Enter value of C: ";
	cin>>z;
	
	if(y>x && z>y){
		cout<<"B is greater than A and C is greater than B";
	}
		if(x>y && x>z){
		cout<<"A is greater than B & C and B is greater than C";
	}
		if(x>y && y>z){
		cout<<"A is greater than B and B is greater than C";
	}
		if(y>x && y>z){
		cout<<"B is greater than A & C and A is greater than C";
	}
	else 	if(z>x && z>y){
		cout<<"C greater than A and B";
	}
}
else if (k=="j"){
	int x,y;
	cout<<"Enter value of A: ";
	cin>>x;
	cout<<"Enter value of B: ";
	cin>>y;
	if(x!=y){
		cout<<"A is greater than B";
	}
	else{
		cout<<"A is not greater than B";
	}
} 
} 
} 
else if(k=="2")
{
	

    int x,y;
 cout<< "enter the 1st value ";
  cin >>x;
 cout<<"enter the 2nd value";
 cin>>y;
        if (x > y) {
        cout << "1st value is greater than 2nd value" << endl;
    }
    else if (x < y) {
        cout << "1st value is less than 2nd value" << endl;
    }

  else  if (x == y) {
        cout << "1st value is equal to 2nd value" << endl;
    }

  else  if (x != y) {
        cout << "1st value is not equal to 2nd value" << endl;
    }

    
}


else if(k=="3")
{
	cout<<"void function\n";

	{
		cout<<"iv:Addition\n";
		cout<<"v:Subtraction\n";
		cout<<"vi:Multiplication\n";
		cout<<"vii:Division\n";
		cout<<"Which you want to perform :\t";
		cin>>k;
		if(k=="iv")
		{
			add() ;

		}
		else if(k=="v")
		{
			{ 
			sub () ;
}	
		}
		else if(k=="vi")
		{
				{ 
				mul ();
}
		}
		else if(k=="vii")
		{
			{ 
			div ();

}	
		}	
	}	
} 
else if(k=="4")
{
	cout<<"viii.For loop\n";
	cout<<"ix.While loop\n";
	cout<<"x.Do while loop\n";
	cout<<"xi:Nested loop\n";
	cout<<"Please chose any one Loop:\t";
	cin>>k;
	 if(k=="viii") 	  
{	
	 int start, end;
    cout << "Enter the start and end values: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        cout << i << endl;
    }
} 
else if(k=="ix")
{
int count;

cout<<" \n\n It will run still you will not press the enter button\n";
	while ( getche() !='\r')
	{
	     count++;	
	}
	cout<<"\n\nyour typing is counted here ="<<count;	

}
else if(k=="x")
{
	 int num, total = 0;

  do {
    std::cout << "Enter a number (0 to exit): ";
    std::cin >> num;

    if (num != 0) {
      std::cout << "You entered: " << num << std::endl;
      total += num;
    }
  } while (num != 0);

  std::cout << "Total: " << total << std::endl;

}

else if(k=="xi")
{int num_rows, num_cols;
    cout << "Enter the number of rows: ";
    cin >> num_rows;
    cout << "Enter the number of columns: ";
    cin >> num_cols;
    for (int x = 0; x < num_rows; x++) {
        for (int y = 0; y < num_cols; y++) {
            cout << "*";
        }
        cout << endl;
    }

 } 
} 
return 0;
}

