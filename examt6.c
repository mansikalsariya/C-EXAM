#include <stdio.h>


int main() {
    int n,i;
    printf("Enter the number employees: ");
    scanf("%d", &n);

    
    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opene file.\n");
        exit(1);
    }


    for (i = 0; i < n; i++) {
        char name[100], role[100];
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", name);
        printf("Enter role of employee %d: ", i + 1);
        scanf("%s", role);
        fprintf(fp, "Employee Name: %s, Role: %s\n", name, role);
    }

    printf("Data written to file successfully.\n");

 
    fclose(fp);

    return 0;
}
