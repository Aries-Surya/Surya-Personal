#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int alphasort_custom(const struct dirent **a, const struct dirent **b) {
    return strcasecmp((*a)->d_name, (*b)->d_name);
}

int main() {
    struct dirent **namelist;
    int n, i;
    char pathname[100];

    scanf("%s", pathname);
    getcwd(pathname, sizeof(pathname));
    n = scandir(pathname, &namelist, 0, alphasort_custom);

    if (n < 0)
        printf("Error");
    else {
        for (i = 0; i < n; i++)
            printf("%s\n", namelist[i]->d_name);

        // Free the memory allocated by scandir
        for (i = 0; i < n; i++)
            free(namelist[i]);
        free(namelist);
    }

    return 0;
}
