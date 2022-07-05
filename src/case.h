#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
using namespace std;

class diseaseCase {

private:
    char disease_name[100];
    char location_name;
    int cases;

public:
    void createCase(){
        fstream file;
        file.open("cases.txt", ios::in | ios::app | ios::out);
        if (!file)
        {
            cout << "No contents in the file\n";
            file.close();
        }
        else
        {
            cin>>disease_name;
            cin>>location_name;
            cin>>cases;
            file <<disease_name <<location_name <<cases << endl;
            file.close();
        }
    }


    void viewCases(){

        ifstream file("cases.txt");
        if (!file)
            cout << "File is empty!";
        else
        {
            file >> disease_name>>location_name>>cases;
            while (!file.eof())
            {
                cout << "  " << disease_name <<location_name <<cases << endl;
                file >> disease_name>>location_name>>cases ;
            }
        }
        file.close();
    }

    void viewCase(){
        ifstream file("cases.txt");
        if (!file)
            cout << "Error in opening file";
        else
        {
            file >> disease_name >>location_name>>cases;
            int flag = 0;
            while (!file.eof())
            {
                cout << disease_name<<location_name<<cases << endl;
                flag++;
                break;
            }
            cout<<"";
        }
        file.close();
    }
    void deleteCase(){
        fstream file, tempfile;
        file.open("Locations.txt", ios::in);
        if (!file)
            cout << "Unable to open file";
        else
        {
            tempfile.open("temp.txt", ios::out);
            file >> location_name;
            while (!file.eof())
            { }
//
//        file.close();
//        tempfile.close();
//
//        {
//            cout << "Delete operation failed/canceled";
//            remove("temp.txt");
//        }
//        else
//        {
//            remove("Location.txt");
//            rename("temp.txt", "Location.txt");
//        }
        }
    }




};
