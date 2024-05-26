#define MAX_CH 50
#define MAX_CAT 500

typedef struct BOOK {
    int year;
    std::string ISBN;
    std::string title;
    std::string author;
    bool available = true;
} BOOK;

BOOK catalogue[MAX_CAT];
int currentYear = 2024;
int minimumYear = 1900;
int position = 0;