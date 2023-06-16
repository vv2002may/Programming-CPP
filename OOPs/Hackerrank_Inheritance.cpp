#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person
{
	private:
		vector<int> t;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        
        Student(string fn, string ln, int id, vector<int> scores):Person(fn,ln,id)
        {
            t=scores;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate()
        {
            float s=0;
            for(int i=0;i<t.size();i++)
            s+=t[i];
            s=(float)s/t.size();
            if(s<=100 && s>=90)
            return 'O';
            else if(s<90 && s>=80)
            return 'E';
            else if(s<80 && s>=70)
            return 'A';
            else if(s<70 && s>=55)
            return 'P';
            else if(s<55 && s>=40)
            return 'D';
            else
            return 'T';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}