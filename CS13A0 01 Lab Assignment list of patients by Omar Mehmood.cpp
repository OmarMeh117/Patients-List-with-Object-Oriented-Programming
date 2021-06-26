//Omar Mehmood 6/3/2021
#include <iostream>
#include <fstream>
using namespace std;

class patient 
{
	public:
	string name;
	string visitReason;
	int age;
	string gender;
	int weight;
	string address;
	string allergies;
	string surgery;
	string insurance;

};

	
class orthrodontics
{
	public:
	string name;
	string bracestype;
	string colorofbraces;
	int age;
	string braces;
	string bracesinsurance;
	
	void askbraces() // Switched the askbraces function from class patient to class orthrodontics
{
	string response;
	response = "yes";
	cout << "Do you have an appointment for your braces: ";
	cin >> braces;
	
	if (braces == response) 
	{
		cout << "The Orthodontists assitant will be with you shortly";
	}
	
	if (braces != response) 
	{
		cout << "Please press 1 to register as a new patient, or press 3 to register for braces or press 6 to exit!";
	}
};
	
};


int choice , count = 0, patientcount = 0, bracescount, orthropatientCount = 0, othropatientNumber = 0;
string a;
patient newPatient[1000];
orthrodontics newOthroPatient[1000], brace;

int main ()
{
	cout << "Welcome to New York Dental Care and Orthrodontics!";
	do{
	cout << "\n\nNew York Dental Care Options\n--------------------------------"
	<< "\n1) Register new Patient\n\nOrthrodontic Options"
	<< "\n--------------------------------\n2) Register new Orthodontic Patient"
	<< "\n3) Current Braces Appointment"
	<< "\n\nADMIN\n--------------------------------\n4) Print out current patients registered at facility\n5) Print out current registered Orthrodontic Patient\n"
	<< "\nEnd Program\n--------------------------------\n6) Quit\n\nSELECTION: ";
	cin >> choice;
	
	if(choice == 1) //registers a new patient for New York Dental Care
	{
		count++;
		cout << "Age: ";
		cin >> newPatient[count].age;
		cout << "Weight: ";
		cin >> newPatient[count].weight;
		cin.ignore();
		cout << "What is your name: ";
		getline (cin, newPatient[count].name);
		cout << "Visit reason: ";
		getline (cin, newPatient[count].visitReason); 
		cout << "Gender: ";
		getline (cin, newPatient[count].gender);
		cout << "Address: ";
		getline (cin, newPatient[count].address);
		cout << "Do you have any allergies towards any medicines (if so please state): ";
		getline (cin, newPatient[count].allergies);
		cout << "What type of insurance do you have: ";
		getline (cin, newPatient[count].insurance);
	}
	
		if (choice == 2) //registers for Orthrodontics 
	{
		orthropatientCount++;	
		cout << "Age: ";
		cin >> newOthroPatient[orthropatientCount].age;
		cin.ignore();
		cout << "Name: ";
		getline (cin, newOthroPatient[orthropatientCount].name);
		cout << "Type of Braces(Metal, Plastic, Invisalign): ";
		getline (cin, newOthroPatient[orthropatientCount].bracestype);
		cout << "Color of braces: ";
		getline (cin, newOthroPatient[orthropatientCount].colorofbraces);
		cout << "What type of insurance do you have: ";
		getline (cin, newOthroPatient[orthropatientCount].bracesinsurance);
	}
	
	if (choice == 3) brace.askbraces(); //asks user for current appointment
	
	//ADMIN OPTIONS
	
	if (choice == 4) //shows patient records for New York Dental Care
	{
		patientcount++;
		for (int i = 1 ; i <= patientcount ; i++)
		cout << "\n\nPatient " << i << "\n------------"
		<< "\nName: " << newPatient[i].name
		<< "\nVisit reason: " << newPatient[i].visitReason
		<< "\nAge: " << newPatient[i].age
		<< "\nGender: " << newPatient[i].gender
		<< "\nWeight: " << newPatient[i].weight
		<< "\nAddress: " << newPatient[i].address
		<< "\nAllergies towards any medicines: " << newPatient[i].allergies
		<< "\nInsurance: " << newPatient[i].insurance; 
		cout << "\n\n";
	}
	

	
	if (choice == 5) //shows Othrodontics patient records 
	{
		othropatientNumber++;
		for (int i = 1;  i <= othropatientNumber ; i++)
		cout << "\n\nOrthrodontic Patient " << i << "\n---------------------"
		<< "\nName: " << newOthroPatient[i].name
		<< "\nAge: " << newOthroPatient[i].age 
		<< "\nType of Braces: " << newOthroPatient[i].bracestype
		<< "\nColor of braces: " << newOthroPatient[i].colorofbraces
		<< "\nInsurance: " << newOthroPatient[i].bracesinsurance; 
	}
	
	
	}while (choice != 6);
	cout << "Thank you for registering at New York Dental Care and Orthrodontics";
	
	return 0;
}
