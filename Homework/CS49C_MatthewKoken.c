#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*@author Matthew Koken
*/
// HW[i][j] contains the score of the jth homework of the ith student
// Assume there are 100 students and 20 homework assignments
float HW[100][20];


// given hwnum, which is the id of the homework, return the average score of this homework
// among all the students
// 1 point
float HomeworkAverageScore(int hwnum) {
    int sum = 0;
    float average = 0;
    const int divisor = 100;
    for (int i = 0; i < 100; i++) {
        sum = sum + HW[i][hwnum];
    }
    average = sum/divisor;
    return average;

}

int getLowest(int hwIndex){
    int index = 0;
    int currLowest = 0;
    for (int i=0; HW[currLowest][hwIndex]< 0; i++) {
        currLowest = i;
    }
    for (index = 0; index < 100; index++) {
        if(HW[index][hwIndex]<HW[currLowest][hwIndex] && HW[index][hwIndex] > 0) {
        currLowest = index;
        }
    }
    return currLowest;
}
// given hwnum, which is the id of the homework, sort the scores from the lowest score to the highest score
// and print on each line the student id and the homework score, for example
// 6	13.4
// 20	20.1
// 12	30.0
// 50	31.2
// 42	60.7
// ...
// 3 points
void PrintSorted(int hwnum) {
    float currLow;
    int lowScoreID;
    float sorted[100];
    for (int i = 0; i<100; i++) {
        lowScoreID = getLowest(hwnum);
        sorted[i] = HW[lowScoreID][hwnum];
        HW[lowScoreID][hwnum] = -i;
        printf("%d %f\n", lowScoreID, sorted[i]);
    }

}
int main()
{
	// you may write code here to test your functions above
	int num = 7;
	//unsigned int iseed = (unsigned int)time(NULL);
    //srand (iseed);
    //srand(unsigned int seed);
	for (int i=0; i<100; i++) {
        HW[i][num] = rand()%50;
	}
    printf("Average Score is %f\n", HomeworkAverageScore(num));
    PrintSorted(num);
	return 0;
}

