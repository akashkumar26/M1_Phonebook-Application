
#ifndef PHONEBOOK_DOT_H                         /* This is an "include guard" */
#define  PHONEBOOK_DOT_H   /* prevents the file from being included twice. */
                           /* Including a header file twice causes all kinds */
                          /* of interesting problems.*/
struct person
{
    char name[35];
    char address[50];
     char father_name[35];
     char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];

    };
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();        
#endif                  
