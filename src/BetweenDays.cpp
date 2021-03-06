/*
Q4: Two dates are given in a 8 node single linked list form,where each node
has one digit only, dates 01-31, months 01-12, year 0000-9999.

Find the number of days in between those two dates .[Exclusive]

Ex : Date1:  0->1->0->1->2->0->0->4 .
     Date2 : 0->5->0->1->2->0->0->4 should return 3 .
As there are 3 days between Jan1st 2004 and Jan 5th 2004.

Ex 2 : Date1 : 3->1->1->2->2->0->1->2.
       Date2 : 0->2->0->1->2->0->1->3 should return 1 .
(There is only one day between 31st Dec 2012 and 2nd  Jan 2013 .)

Note : Consecutive Days and Same Days should return 0;
->Return -1 for NULL Inputs .
->Between Days have to be calculated by not including start and end date .
->The SLL will have 8 Nodes in all cases . Month 9 will be represented as 09.

Difficulty : Hard 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node{
	int data;
	struct node *next;
};

int month(int a, int yy)
{
	int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int x = 0, c;
	for (c = 0; c<a - 1; c++)
	{
		if (c == 1)
		{
			if (yy % 4 == 0)
				x += 29;
			else
				x += 28;
		}
		else
			x += mon[c];
	}
	return(x);
}

int days(int y1, int y2, int m1, int m2, int d1, int d2)
{
	int count = 0, i;
	for (i = y1; i<y2; i++)
	{
		if (i % 4 == 0)
			count += 366;
		else
			count += 365;
	}
	count -= month(m1, y1);
	count -= d1;
	count += month(m2, y2);
	count += d2;
	if (count<0)
		count = count*-1;
	return count - 1;
}


int between_days(struct node *date1head, struct node *date2head){
	if (date1head != NULL && date2head != NULL){

	}
	return -1;
}
