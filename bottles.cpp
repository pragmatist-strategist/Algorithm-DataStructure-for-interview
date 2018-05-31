//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// // Question to be explained ->
// You have a shelf containing N bottles of wine which are numbered from 0 to N-1. Every day you can pick a bottle either from the left end or from the right end and sell it. As we all know, wine tastes better the older it gets. So, lets say the cost of a particular bottle of wine is C and you sell it on day D, then you earn C*D money. For example, if you sell a bottle of cost 8 on day 4 you earn 8*4=32 money. Also, all the bottles on the shelf do not cost the same and each one has a cost of its own. Now, given the number of bottles on the shelf and the cost of each one, find the maximum money you can make by selling one bottle per day every day until you sell all the bottles. Remember that you can sell either the left-most one or the right-most one only. You can't pick one from the middle.
#include <iostream>
#include <conio.h>
using namespace std;

int bottles(int *a, int i, int j, int day) {
	if (i > j) {
		return 0;
	}
	int op1 = a[i] * day + bottles(a, i + 1, j, day + 1);
	int op2 = a[j] * day + bottles(a, i, j - 1, day + 1);
	return max(op1, op2);
}
int main() {
// input the details as per requirements.
//Your code comes here.
	getch();
	return 0;
}