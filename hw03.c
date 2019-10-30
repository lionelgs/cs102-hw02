#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year --Fertig
} Student;

 void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
      
    case MAJOR_AND_NAME:
      printf("%s %s %s\n", s.major, s.first_name, s.last_name);
      break;

    case YEAR_AND_NAME:
      printf("%d %s %s\n", s.year, s.first_name, s.last_name);
      break;
      
  // TODO: handle other cases --Fertig
  }
}

//atof(argv[#number input]);



/*
argv[1] will be the Mode integer.
argv[2]-argv[5] will be student info in the form [first_name, last_name, major, year].
argv[6]-argv[9], if present will be student info for a second student in the same form, and so on.
You will need to check argc to determine the number of students passed at runtime.
The fields are all strings (char[]), except year is a number (int)
*/

int main(int argc, char **argv) {

int userMode;
userMode = atoi(argv[1]);

for(int i=2;i<sizeof(argv)+1 ;i+=4)
{
Student s;
s.first_name = argv[i];
s.last_name = argv[i+1];
s.major =argv[i+2];
s.year = atoi(argv[i+3]);
print_student(userMode, s);
}

  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
  return 0;
}
