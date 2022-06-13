#include <iostream>
#include <string>
#include <algorithm>

struct Student
{
	std::string name;
	int grade;
};



void SortStudents(Student *students,int lenght)
{
        for(int i = 0; i < lenght; i++)
            {
                int bigIndex = i;


            for(int j = i + 1; j < lenght;j++)
            {
                if (students[j].grade > students[bigIndex].grade)
                    bigIndex = j;
                
                
            }

                std::swap(students[i],students[bigIndex]);

            }


}




int main()
{
    int numStudents = 0;
    int marksStudents;

    std::cout << "How many students do you want to enter?:";
    std::cin >> numStudents;
    

    Student *students = new Student[numStudents];



    for(int i = 0 ; i < numStudents;i++)
    {
        std::cout << "Enter name#" << i + 1 << ": ";
        std::cin >> students[i].name;
        std::cout << "Enter marks#" << i + 1 << ": ";
        std::cin >> students[i].grade;


        }



    SortStudents(students,numStudents);


    for ( int i = 0; i < numStudents; i++)
    {
        std::cout << students[i].name << " \t " <<"Got a grate"<< " \t " << students[i].grade;
    }
     

   
    

    delete[] students;




    system("pause");



}