#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
//#include "db.h"
#include "main.h"


#define MAX_WORDS 40
#define MAX_LETTERS 20
#define TRUE 1
#define FALSE 0

// Global
char user_input[80];
int number_of_words;
char words[MAX_WORDS][MAX_LETTERS];  //
char wholeline[80];

char current_user_name[20];
//int current_user_id;
int gender_code;
int code;
int result;
char value[20];
char key[20];

void get_string(void);
void parse(void);
int isword(char*);
int is_nonsense_word(char*);
int isconsonant(char);
int isvowel(char);
int isquestion(void);
int isstatement(void);
int iscommand(void);
int tokenize(char*, char*, char);
int separate_words(char*, char[MAX_WORDS][MAX_LETTERS]);
//int template_search(char*, template_info_type*);
//int check_gender_by_name(char*, char*);
int check_gender_by_name(char*);
//void get_time(char*);
void stioc(char*);
extern int socket_desc;
int get_time(void);
extern int irc;
extern char channel[20];
//int isvalidname(char*);
int isverb(char*);
void normalize(void);

typedef struct test {
   char* line[80];
   char* template2[80];
   char* function_name[80];
   int parameter1;
   int parameter2;
   int parameter3;
   //int code;
} template_info_type;

// char current_time[MAX_STRING_LEN];
// char current_time[80];
int current_time;

// Experimental
#if 0
typedef struct {
   char* input[80];
   char* words[80][80];
   char* first_name[80];
   //int gender_code;
} user_info_type;
#endif


#endif // FUNCTIONS_H_INCLUDED
