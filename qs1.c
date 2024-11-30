#include <stdio.h>

int main()
{
    FILE *file = fopen("OG.txt", "r");
    char content[50];

    if (file == NULL)
    {
        printf("Error");
        return 1;
    }
    fscanf(file, "%s", content);
    printf("Content: %s\n", content);
    fclose(file);

    // reused original variable
    file = fopen("copied_OG.txt", "w");
    if (file == NULL)
    {
        printf("Error");
        return 1;
    }
    fprintf(file, "%s\n", content);
    fclose(file);
}