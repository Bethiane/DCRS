#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include <cstring>

using namespace std;
class location
{

private:
    int location_id;
    char location_name[100];

public:
    void createLocation(char location);
    void viewAllLocations();
    void viewLocation();
    void deleteLocation();

};


void createLocation(char location)
{
    fstream file;
    file.open("locations.txt", ios::in | ios::app | ios::out);
    if (!file)
    {
        cout << "No contents in the file\n";
        file.close();
    }
    else
    {
        file <<location << endl;
        cout<<"Location"<<location<<"is successfully added";
     }
    file.close();
}

void location::viewAllLocations(){

        ifstream file("locations.txt");
        if (!file)
            cout << "File is empty!\n";
        else
        {
            file >> location_name;
            while (!file.eof())
            {
                cout << "  " << location_name << endl;
                file >> location_name ;
            }
        }
    }
void location::viewLocation(){

    ifstream file("Location.txt");
    if (!file)
        cout << "Error in opening file";
    else
    {
        file >> location_name;
        int flag = 0;
        while (!file.eof())
        {
                cout << location_name << endl;
                flag++;
                break;
            }
            file >>location_name ;
        }
    }
void location::deleteLocation()
{
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



