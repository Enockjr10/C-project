
#include <stdio.h>

#define MAX_EMPLOYEES 500
#define OVERTIME_RATE 1.5

int main() {
    char name[50];
    long long id; 
    int i, num;
    float hrs, rate, salary=0,bonus=0;

    printf("Enter number of Employees: "); 
    scanf("%d", &num);

	{ 
        printf("\n Enter Information For Employee %d:\n", i + 1); 

        printf("Name: "); 
        scanf("%s", name);
        printf("ID: ");
        scanf("%lld", &id);
        printf("Hours worked: ");
        scanf("%f", &hrs);
        printf("Hourly rate: ");
        scanf("%f", &rate);
        if (hrs > 40)
		 {
		 	
            salary = 40 * rate;
			bonus =  (hrs - 40) * rate * OVERTIME_RATE; 
			salary+=bonus;
        } else
		 {
            salary = hrs * rate; 
        }

        printf("Total Salary for %s (ID %lld): %.2f Frw \n", name, id, salary); 
    }

    return 0;
}
