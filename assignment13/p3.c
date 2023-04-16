#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
char buffer[1000];
void add_student();
void load_students();
void list_students();
void save_students();
void search_student();
void delete_student();

typedef struct STUDENT{
   char name[100];
   int ID;
   double gpa;
} STUDENT;

void add_student(){
   FILE *sp;
   char name[20];
   int ID;
   double gpa;
   sp=fopen("students.txt", "a+");
   if(sp==NULL){
      printf("ERROR OPENING FILE\n");
      exit(1);
   }
   else{
      printf("\n");
      printf("Please enter name of your student:\n");
      scanf("%s", name);
      printf("please enter student ID\n");
      scanf("%d", &ID);
      printf("please enter gpa of student\n");
      scanf("%lf", &gpa); 
      if(sp!=NULL){
         fprintf(sp, "%s ", name);///investigate
         fprintf(sp, "%d ", ID);//investigate
         fprintf(sp, "%.1f\n", gpa);//investigate \n
         printf("Your student has been added, Great Success!\n");
         fclose(sp);
      }
   }
}

void load_student(){
   FILE *sp;
   long n;
   sp = fopen("students.txt", "r");//open file for read
   if(sp == NULL){
      printf("Error Opening File\n");
      exit(1);
   }
   fseek(sp, 0L, SEEK_END);//get # bytes
   n = ftell(sp);
   fseek(sp, 0L, SEEK_SET);//reset file pointer to begin
   //buffer = (char*)calloc(n, sizeof(char));
   if(buffer==NULL){
      exit(1);
   } 
   fread(buffer, sizeof(char), n, sp);//all text read into buffer!
   //fclose(sp);
   //free(buffer);
}

void list_students(){
   FILE *sp;
   sp = fopen("students.txt", "rb");
   if(sp == NULL){
      printf("Error Opening File\n");
      exit(1);
   }
   STUDENT xy;
   printf("\n\n");
   printf("                 Name\tID\tGPA");
   //need to make this run for evry line
   printf("\n");
   while(EOF != fscanf(sp, "%s %d %lf", xy.name, &xy.ID, &xy.gpa)){
      printf("%20s\t%d\t%.1lf", xy.name, xy.ID, xy.gpa);         
      printf("\n");
   }
  /*if(fscanf(sp, "%s %d %lf", xy.name, &xy.ID, &xy.gpa) != 3){
      fprintf(stderr, "ERORR");
      exit(1);
   }*/
   fclose(sp);
   //printf("%s           %d        %.1lf", xy.name, xy.ID, xy.gpa);
}
void save_students(){
   FILE *sp;
   sp = fopen("students.txt", "w");
   if(sp == NULL){
      printf("Error opening file\n");
      exit(1);
   }
   printf("%s", buffer);//buffer is here!
   fprintf(sp, "%s", buffer); 
   //loop through buffer and fprintf it's data to the file
   printf("Student records saved!\n");
   fclose(sp);
}
void search_student(){
   FILE *sp;
   char ch;
   char name[50];
   char id[50];
   char search[50];
   char gpa[50];
   int pointer = 0;
   char *filename = "students.txt";
   int count = 0;
   int pos[10];
   sp = fopen(filename, "r");
   //printf("HEllo I am here!");
   if(sp == NULL){
      printf("Error opening file\n");
      exit(1);
   }
   printf("PLease enter an ID to search for");
   scanf("%s", search);
   do {
      ch = fscanf(sp, "%s", name);
      ch = fscanf(sp, "%s", id);
      ch = fscanf(sp, "%s", gpa); 
      if(strcmp(id, search) == 0){
         pos[count] = pointer;     
         count++;
         printf("\n");
         printf("%s ", name);
         printf("%s ", id);
         printf("%s", gpa);
         break;
      }
      pointer++;
   } while (ch != EOF); 

    if(count == 0)  
        printf("'%s' not found in %s\n", search, filename);
    
    else{
        printf("\n");
        printf("'%s' is found!!!!!!!!", (search));    
    }
   (void)pos;
   fclose(sp);
}
//create temp file for writing
   //prompt user to enter ID of student to delete
   //loop through file using fscanf
   //for each record, it checks if the ID matches the entered ID
   //if a record is not a match, write to temp file using fprintf
   //if match is found, found variable is set to 1
   //once all records processed, original file is deleted, and the temp file is renamed to students.txt
   //using the rename()function
   //if no match is found, the function prints an error message and deletyes the temp file

void delete_student(){
   FILE *sp;
   FILE *sp222;
   char ch;
   char name[50];
   char id[50];
   char search[50];
   char gpa[50];
   int loop;
   int pointer = 0;
   char *filename = "students.txt";
   char *filename2 = "temp.txt";
   int pos[10];
   int found = 0;
   sp = fopen(filename, "r");
   sp222 = fopen(filename2, "w");
   //printf("HEllo I am here!");
   if(sp == NULL){
      printf("Error opening file\n");
      exit(1);
   }
   printf("PLease enter an ID to search for");
   scanf("%s", search);
   do {
      ch = fscanf(sp, "%s", name);
      ch = fscanf(sp, "%s", id);
      ch = fscanf(sp, "%s", gpa);
   /*   
   if(strcmp(id, search) == 0){
         //pos[count] = pointer;
         count++;
         //delete specified student data from students.txt
         break;
   }*/
      pointer++;
      if(strcmp(id, search) != 0){
         fprintf(sp222,"%s ", name);
         fprintf(sp222, "%s ", id);
         fprintf(sp222, "%s", gpa); 
         remove("students.txt");
         rename("temp.txt", "students.txt");
      }
      else {
         found++;
      }
      //then copy temp.txt to students.txt???
   }
   while (ch!= EOF);
   if(found == 0)
        printf("'%s' not found in %s\n", search, filename);
    else{
        printf("\n");
        //remove("students.txt");
        //fclose(sp);
        //int result = rename("temp.txt", "students.txt");
        //if(result == 0){
        //    printf("File renamed succefully");
        //}
        printf("'%s' is found!!!!!!!!", (search));
    }
   (void)pos;
   (void)loop;
   fclose(sp222);
}

int main(){
   load_student();
   int choice = 0;
while(true){
   printf("Please enter a choice:\n");
   printf("Select 0 to exit program:\n");
   printf("Select 1 to add a student\n");
   printf("Select 2 to load student data into memory\n");
   printf("Select 3 to list student data\n");
   printf("Select 4 to save student data\n");
   printf("Select 5 to search for a student ID\n");
   printf("Select 6 to delete student data\n");
   scanf("%d", &choice);
      switch(choice) {
         case 0:
            printf("Exiting program\n");
            return 0;
         case 1:
            printf("Function to append student data");
            add_student();
            break;
         case 2:
            printf("Function to load_student data into memory");
            load_student();//params???
            printf("Buffer in main %s", buffer);
            break;
         case 3:
            list_students();//needs formatting!
            break;
         case 4:
            save_students();
            break;
         case 5:
            search_student();
            break;
         case 6:
            delete_student();//make work if you have time
            break;
      }
   }
   return 0;
}
