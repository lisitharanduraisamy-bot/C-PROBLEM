#include <stdio.h>
int main() {

    int age;
    int salary;
    int points;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your Salary : ");
    scanf("%d",&salary);
    printf("Enter your Credit Points : ");
    scanf("%d",&points);
    if((age>=20 && age<=60) &&  (salary>=25000) && (points>=700)){
        printf("Loan Approved");
    }else{
        printf("Loan Not Approved");
    }

    return 0;
}

