#define MAX_STRING 60
#define MAX_REGISTRO 1000

typedef struct STUDENT {
    char cif[MAX_STRING];
    char name[MAX_STRING];
    char lastName[MAX_STRING];
    int year;
} STUDENT;

int position = 0;
STUDENT students[MAX_REGISTRO];