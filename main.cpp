#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "src/disease.h"
#include "src/location.h"
#include "src/case.h"

using namespace std;
//
//static enum commands {
//    add,record,list,where,cases,help
//};

location location;
disease disease;
diseaseCase diseaseCase;


void menu() {
    string command;
    do {
        cout << "====================================================================================\n";
        cout << "*                                     HELP MENU                                    *\n";
        cout << "====================================================================================\n";
        cout << "       add<location>       :Add a new location                                           \n";
        cout << "       delete<location>    :Delete a new location                                     \n";
        cout << "       delete<location>    :Delete a new location                                     \n";
        cout << "       record<location><disease><cases>  :Record a disease and its cases            \n";
        cout << "       list locations  :List all existing locations                                 \n";
        cout << "       list diseases  :List  existing disease in locations                          \n";
        cout << "       where<disease>  :Find where disease exists                                   \n";
        cout << "       cases<location><disease>  :Find where disease exists                         \n";
        cout << "       cases<disease>  :Find where disease exists                                   \n";
        cout << "       help  :Prints user manual                                                    \n";
        cout << "       Exit                                         : Exit the program              \n";
        cout << "       Console > \n";
        getline(cin, command);
        if (command == "list locations")
        {
           location.viewAllLocations();
        }
        else if(command == "list diseases"){
            disease.viewAllDisease();
        }
        else if (command == "list diseases")
        {
         disease.viewAllDisease();
        }
        else if (command == "exit")
        {
            cout << "Goodbye..." << endl;
            exit(0);
        }
        else if (command.find("add"))
        {
            stringstream ss(command);
            vector<string> fields;
            string field;

            while (getline(ss, field, ' '))
            {
                fields.push_back(field);
            }

            string location = fields[1];
//            location::createLocation(location);
        }
        else if (command.find("record") != std::string::npos)
        {
            stringstream ss(command);
            vector<string> fields;
            string field;

            while (getline(ss, field, ' '))
            {
                fields.push_back(field);
            }

            string location = fields[1];
            string disease = fields[2];
            int cases = stoi(fields[3]);
            cout << "Adding " << cases << " cases of " << disease << " in " << location << endl;
//            diseaseCase.createCase(location, disease, cases);
        }
        else if (command.find("where"))
        {}
        else if (command.find("cases"))
        {}
        else if (command.find("delete"))
        {
            stringstream ss(command);
            vector<string> fields;
            string field;

            while (getline(ss, field, ' '))
            {
                fields.push_back(field);
            }

            string location = fields[1];
//            location.deleteLocation();
        }
        else if(command == "Exit"){
            exit(0);
        }
        else
        {
            cout << "Command is not available" << endl;
            menu();
        }
    } while (true);
}

void intro()
{
    string input;
    cout << endl;
    cout << "==================================================" << endl;
    cout << "*   Welcome to Disease Cases Reporting System!   *" << endl;
    cout << "*   *******************************************  *" << endl;
    cout << "*                                                *" << endl;
    cout << "*   *******************************************  *" << endl;
    cout << "* It is developed by Anne Bethiane UWABABYEYI as practical  *" << endl;
    cout << "* evaluation for the end of Year 3 *" << endl;
    cout << "==================================================" << endl;
    cout << "Starting Time: Thu Apr 05 23:59:08 CAT 2022" << endl;
    cout << "Need a help? Type 'help' then press Enter key." << endl;
    cout << "Console > ";
    getline(cin, input);

    if (input == "help")
    {
        menu();
    }

}
int main()
{
    intro();
}

