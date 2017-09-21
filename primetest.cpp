/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References: To complete this project I researched about prime numbers. An ariticle in wikihow.com showed me how to manually compute
 *prime numbers. I wanted to implement the method that uses the square root of the number to facilitate the calculations. Then I started
 *creating my own code and used the power pooints about loops and if statements from the lab. 
 *
 */

#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
   int number;                         
   
   while(cin >> number)
   {
   
     if(number <= 1)
     {
        cout << "0 \n";   
     }
     
	 int counters = sqrt(number);
     int remainder = 0;
     
	  while(counters >= 1 && number >=2)
	  {
	    remainder = number%(counters);
       
		 if(remainder == 0 && counters != 1 )
		 {
		    cout << "0 \n";
            break;
		 }
		 else if(counters == 1)
		 {
		    cout << "1 \n";
            break;
		 }
		 else
		 { 
		    --counters;
		 }
	  }
	  
   }
   return 0; 
}

//Compile and run commands:
// g++ -c program.cpp
// g++ program.o -o prog   ///link
// ./prog   ///run 