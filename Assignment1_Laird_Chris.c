#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 10

//function prototypes
bool isPrime(int number);

bool isOdd(int number);


int main(){
	
	//declaring variables
	int i;
	int usersNum[10];
	int checkNum;
	int result;
	int max;
	int min;
	int sum = 0;
	double average;
	
	//prompt user to enter 10 numbers
	printf("Enter 10 numbers\n");
	
	
	//for loop checking the numbers being inputted
    for (int i = 0; i < LENGTH; i++) {
 
        result = scanf("%d", &checkNum);

        if (result == 1) {
            usersNum[i] = checkNum;
        } else {
            printf("Incorrect input type. Please enter a number.\n");
			--i;//if input is invalid decrement the counter
			fflush(stdin);//clear the input buffer
        }
    }
	
	//set the min variable to the first index in usersNum
	min = usersNum[0];
	
	//for loop to check what the smallest number in the array is
	for(i=0; i < LENGTH; i++){
		if(usersNum[i] < min)
			min = usersNum[i];
	}
	
	//set the max variable to the first index in usersNum
	max = usersNum[0];
	
	//for loop to check what the largest number in the array is
	for(i=0; i < LENGTH; i++){
		if(usersNum[i] > max)
			max = usersNum[i];
	}
	
	//getting the sum of all numbers in the usersNum array
	for(i=0; i < LENGTH; i++){
		sum += usersNum[i];
	}
	
	//getting the average of all numbers in the usersNum array
	average = (double)sum / LENGTH;
	
	//printing the headers for the table
	printf("Sr.\tNumber\tPrime\tOdd/Even\tMin/Max\n");
	
	//for loop printing out the table
    for(i=0;i<10;i++){
        bool prime = isPrime(usersNum[i]);//calling the isPrime
        char *primeLabel = prime ? "Yes" : "No";//setting the is prime label
		bool isOddOrEven = isOdd(usersNum[i]);//calling the isOdd function
        char *oddEvenLabel = isOddOrEven ? "Even" : "Odd";//setting the label for even or odd
        char *minMaxLabel = "";//initiallizing min max label as an empty string
		//checking if the number is equal to min or max and setting it accordingly
		if (usersNum[i] == min) {
		    minMaxLabel = "Min";
		} else if (usersNum[i] == max) {
		    minMaxLabel = "Max";
		}
		
		//printing out the data in the table
        printf("%d\t%d\t%s\t%s\t\t%s\n", i + 1, usersNum[i], primeLabel, oddEvenLabel, minMaxLabel);
    }
	
	//printing the sum and the average
	printf("\nSum\t%d\n\n", sum);
	printf("Avg\t%f\n\n", average);

	return 0;
}


//function to check if the number given is prime
bool isPrime(int number){

	if(number <= 1) return false;
	
	for(int i = 2; i < number; i++){
	
		if(number % i == 0) return false;
	
	}
	
	return true;
}

//function to check if number given is even or odd
bool isOdd(int number){

  if(number % 2 == 0){
  
  	return true;
	
  } else {
  
  	return false;
  }
}

