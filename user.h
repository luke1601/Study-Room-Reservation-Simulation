#ifndef USER_H
#define USER_H

typedef struct {
  int userID;
  char email[50];
  int type;
} User;

/*
  An enumerated type for the user type
  admin = 0
  student = 1
  faculty = 2
*/
enum { admin, student, faculty };

//A callback function to catch any errors generated by the SQLite database
int callback(void *NotUsed, int argc, char **argv, char **azColName);

//Adds the user to the database
void registerUser(User user);

User createUser(int userID, char *email, int type);

#endif
