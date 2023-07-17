#include <iostream>
using namespace std;

class Student {
	public:
		float Myan;
		float Eng;
		float AM;
		float Math;
		float CS1103;
		float CS1104;
		string name;
		float total = 0;
		Student() {
			cout << "\tStudent object constructed..." << endl << endl;
		}
		void setName(string Name) {
			name = Name;
		}
		void enter_marks() {
			float My, En, Am, Ma, CS3, CS4;
			
			cout << " \tEnter Myanmar mark: ";
			cin >> My;
			
			cout << " \tEnter English mark: ";
			cin >> En;
			
			cout << " \tEnter Aspects of Myanmar mark: ";
			cin >> Am;
			
			cout << " \tEnter Mathematics mark: ";
			cin >> Ma;
			
			cout << " \tEnter CS-1103 mark: ";
			cin >> CS3;  \
			
			cout << " \tEnter CS-1104 mark: ";
			cin >> CS4;
			
			Myan = My;
			Eng = En;
			AM = Am;
			Math = Ma;
			CS1103 = CS3;
			CS1104 = CS4;
			total = Myan + Eng + AM + Math + CS1103 + CS1104;
		}
		void print_total() {
			cout << "Total: " << total << endl;
		}
//		int calculate_grade_point(int raw_mark) {
//			if (raw_mark < 50) {
//				return 2;				
//			} else if (raw_mark >= 50 && raw_mark < 65) {
//				return 3;
//			} else if (raw_mark >= 65 && raw_mark < 75) {
//				return 4;
//			} else if (raw_mark >= 75) {
//				return 5;
//			}
//		}
//		void calculate_gpa_and_list() {
//			cout << endl;
//			cout << "\tSubject\t\t" << "Grade Point" << endl; 
//			cout << " \t Myanmar\t     " << calculate_grade_point(Myan) << endl;
//			cout << " \t English\t     " << calculate_grade_point(Eng) << endl;
//			cout << " \t AM\t\t     " << calculate_grade_point(AM) << endl;
//			cout << " \t Math\t\t     " << calculate_grade_point(Math) << endl;
//			cout << " \t CS-1103\t     " << calculate_grade_point(CS1103) << endl;
//			cout << " \t CS-1104\t     " << calculate_grade_point(CS1104) << endl;
//			
//			cout << "\t\t\tGPA: " << (total / 600) * 6;
//		}
};

int main() {
	Student cs_student;
	cs_student.setName("bob");
	cs_student.enter_marks();
	cs_student.print_total();
}