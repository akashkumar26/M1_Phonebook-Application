#include<unity.h>
#include <PhoneBook.h>
# define PROJECT_NAME  "PhoneBook"

 extern void menu();
extern searchrecord();
 extern listrecord();
 extern exit();
 extern modify();
void setUp(void){

}
void tearDown(void){

}
int main(void){
    UnityBegin(NULL);
    RUN_TEST(menu);
      RUN_TEST(searchrecord);
    RUN_TEST(listrecord);
    RUN_TEST(exit);
   RUN_TEST(modifyrecord);


    return (UnityEnd());
}
void searchrecord(void){
      TEST_ASSERT_EQUAL("Vaibhav", searchrecord("Vaibhav"));

      /*  Dummy fail */
       TEST_ASSERT_EQUAL("Prateek", searchrecord("Vaibhav"));

        TEST_ASSERT_EQUAL("Abhi", searchrecord("Abhi"));


              /*  Dummy fail */

         TEST_ASSERT_EQUAL("Akshay", searchrecord("Vaibhav"));


         TEST_ASSERT_EQUAL("Ankit", searchrecord("Ankit"));
         

}