#include <stdio.h>

int getData(char[]);

struct inputData
{
    int numOfElems;
    int timeInterval;
};

int main()
{
    getData('SEISMIC.DAT');
    return 0;
}

int getData(char filename[])
{
    FILE *file;
    struct inputData data;

    file = fopen(filename, "r");

    if (file == NULL)
    {
        fprintf(stderr, "Can't open input file.\n");
        exit(1);
    }

    fscanf(file, "%d", &val);

    fclose(file);
}