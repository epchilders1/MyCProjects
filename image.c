#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "image.h"

void writeInt(int i, FILE *fp)
{
    char buffer[10];
    sprintf(buffer, "%d", i);
    fputs(buffer, fp);
}

// open the file, create an ImagePPM, and return the pointer
// return NULL if the file cannot be opened

ImagePPM *readPPM(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp != 0)
    {
        struct ImagePPM;
        ImagePPM *image = malloc(sizeof(ImagePPM));
        fscanf(fp, "%s", image->magic);
        fscanf(fp, "%d", &image->numCols);
        fscanf(fp, "%d", &image->numRows);
        fscanf(fp, "%d", &image->maxVal);

        image->pixels = (Pixel **)malloc(sizeof(Pixel *) * image->numRows * image->numCols);

        int count = 0;

        for (int row = 0; row < image->numRows; row++)
        {
            for (int col = 0; col < image->numCols; col++)
            {
                *(image->pixels + count) = malloc(sizeof(Pixel));
                fscanf(fp, "%d", &((Pixel *)image->pixels + count)->red);
                fscanf(fp, "%d", &((Pixel *)image->pixels + count)->green);
                fscanf(fp, "%d", &((Pixel *)image->pixels + count)->blue);
                count++;
            }
        }
        return image;
    }
    else
    {
        return NULL;
    }
}
// open the file and write the ImagePPM to the file
// return 1 on success
// return 0 if the file cannot be opened

int writePPM(ImagePPM *pImagePPM, char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp != 0)
    {
        fputs(pImagePPM->magic, fp);
        fputs("\n", fp);
        writeInt(pImagePPM->numCols, fp);
        fputs("     ", fp);
        writeInt(pImagePPM->numRows, fp);
        fputs("\n", fp);
        writeInt(pImagePPM->maxVal, fp);
        fputs("\n", fp);
        int count = 0;
        for (int row = 0; row < pImagePPM->numRows; row++)
        {
            if (row < 0)
            {
                fputs("\n", fp);
            }
            for (int col = 0; col < pImagePPM->numCols; col++)
            {
                if (col > 0)
                {
                    fputs("     ", fp);
                }

                writeInt(((Pixel *)pImagePPM->pixels + count)->red, fp);
                fputs(" ", fp);
                writeInt(((Pixel *)pImagePPM->pixels + count)->green, fp);
                fputs(" ", fp);
                writeInt(((Pixel *)pImagePPM->pixels + count)->blue, fp);
                count++;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

// free the ImagePPM and its pixels
// everything with a malloc needs a free

void freePPM(ImagePPM *pImagePPM)
{
    int count = 0;

    for (int row = 0; row < pImagePPM->numRows; row++)
    {
        for (int col = 0; col < pImagePPM->numCols; col++)
        {
            free(*(pImagePPM->pixels + count));
            count++;
        }
    }
    free(pImagePPM);
}

// open the file, create an ImagePGM, and return the pointer
// return NULL if the file cannot be opened

ImagePGM *readPGM(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp != 0)
    {
        struct ImagePGM;
        ImagePGM *image = malloc(sizeof(ImagePGM));
        fscanf(fp, "%s", image->magic);
        fscanf(fp, "%d", &image->numCols);
        fscanf(fp, "%d", &image->numRows);
        fscanf(fp, "%d", &image->maxVal);

        return image;
    }

    else
    {
        return NULL;
    }
}

// open the file and write the ImagePGM to the file
// return 1 on success
// return 0 if the file cannot be opened

/// @brief
/// @param pImagePGM
/// @param filename
/// @return
int writePGM(ImagePGM *pImagePGM, char *filename)
{
    return 0;
}

// free the ImagePGM and its pixels
// everything with a malloc needs a free

void freePGM(ImagePGM *pImagePGM)
{
    return;
}

ImagePGM *convertToPGM(ImagePPM *pImagePPM)
{
    return NULL;
}

ImagePGM *shrinkPGM(ImagePGM *pImagePGM)
{
    return NULL;
}
