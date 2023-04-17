#include<iostream> // header file library 
#include<cmath> // Include the cmath library
using namespace std;
#define pi 3.14159 // Pi
	   
class Cylinder // The class
{       
   public: // Access specifier
		
	void setvolume() // Method/Function to set input data of volume
   {// Volume Code
        system("cls"); // clear the screen
		cout << endl;
		double ra, hi, volume;

	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|                VOLUME                |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+-------------------------------+\n";
	        cout << "\t\t\t\t\t|Calculating Volume of Cylinder |\n"    
	             << "\t\t\t\t\t+-------------------------------+\n";
	        cout << "\t\t\t\t\t+----------------------------+\n";
	        cout << "\t\t\t\t\tEnter the radius : "; 
	         cin >> ra;
	        cout << "\t\t\t\t\tEnter the height : ";
	         cin >> hi;
	        volume = pi*ra*ra*hi; // Formula of Volume 
	        cout << "\t\t\t\t\tThe Volume is : "<< volume << endl;
	        cout << "\t\t\t\t\t+----------------------------+" << endl;
	        cout << endl;
	         cin.get();
	        cout << "\t\t\t\t\tTo return to Choices, press ENTER . . .";
			 cin.get();
		system("cls"); // clear the screen 
	}
	
	void setSurface_Area() // Method/Function to set input data of Surface Area
   {// Surface Area Code
        system("cls"); // clear the screen 
        cout << endl;
	    double radius, height;
	    double surface_area;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|               SURFACE AREA           |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
 		    cout << "\t\t\t\t\t+-------------------------------------+\n";
 		    cout << "\t\t\t\t\t|Calculating Surface Area of cylinder |\n";
			cout << "\t\t\t\t\t+-------------------------------------+\n";     
 		    cout << "\n\t\t\t\t\t+----------------------------+\n";     
		    cout << "\t\t\t\t\t Enter the radius : ";
	         cin >> radius;
		    cout << "\t\t\t\t\t Enter the height : ";
		     cin >> height;
		    surface_area = 2*pi*radius*(radius+height); // Formula of Surface Area
		    cout << "\t\t\t\t\t The Surface are is : "<< surface_area << endl;
		    cout << "\t\t\t\t\t+-------------------------------" << endl;
		    cout << endl;
			 cin.get();
			cout << "\t\t\t\t\t To return to Choices, press ENTER . . . ";
			 cin.get();
		system("cls"); // clear screen 
	}
	
	void setLateral_Surface() // Method/Function to set input data of Lateral Surface
   {// Lateral Surface Code 
        system("cls"); // clear the screen
        cout << endl;
		double Raduis,Height;
	    double Lateral_Surface;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|             LATERAL SURFACE          |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t|Calculate Lateral Surface of Cylinder |\n";
	        cout << "\t\t\t\t\t+--------------------------------------+\n";
		    cout << "\t\t\t\t\t +----------------------------------+\n";
	        cout << "\t\t\t\t\t Enter the raduis: ";
	         cin >> Raduis;
	        cout << "\t\t\t\t\t Enter the height: ";
	         cin >> Height;
	        Lateral_Surface = 2*pi*Raduis*Height; // Formula of Lateral Surface 
	        cout << "\t\t\t\t\t The Lateral Surface of Cylinder : "<< Lateral_Surface << endl;
		    cout << "\t\t\t\t\t +----------------------------------+" << endl;
		    cout << endl;
			 cin.get();
			cout << "\t\t\t\t\t To return to Choices, press ENTER . . . ";
			 cin.get();
	    system("cls"); // clear the screen
	}
	
	void setBase_Area() // Method/Function to set input data of Base Area
   {// Base Area Code
        system("cls"); // clear screen
		cout << endl;
		double rd;
	    double Base_area;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|               BASE AREA              |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+--------------------------------+\n";
	        cout << "\t\t\t\t\t|Calculate Base Area of Cylinder |\n"
		         << "\t\t\t\t\t+--------------------------------+\n";
	        cout << "\t\t\t\t\t Enter the radius : ";
	         cin >> rd;
	        Base_area = pi*rd*rd; // Formula of  Base Area 
	        cout << "\t\t\t\t\t The Base Area are is : " << Base_area << endl;
	        cout << "\t\t\t\t\t ------------------------------" << endl;
	        cout << endl;
	         cin.get();
	        cout << "\t\t\t\t\t To return to Choices, press ENTER . . .";
	         cin.get();
	    system("cls"); // clear screen
	}
	
	void setRaduis() // Method/Function to set input data of Raduis
   {// Raduis Code
        system("cls"); // clear screen
		cout << endl;
		double HEight,v;
	    double root;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|                 RADUIS               |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+-----------------------------+\n";
	        cout << "\t\t\t\t\t|Calculate Raduis of Cylinder |\n";
	        cout << "\t\t\t\t\t+-----------------------------+\n";
		    cout << "\t\t\t\t\t +-----------------------------+\n";
	        cout << "\t\t\t\t\t Enter the height : ";
	         cin >> HEight;
	        cout << "\t\t\t\t\t Enter the Volume: ";
	         cin >> v;
	        root = sqrt(v/(pi*HEight)); // Formula of Raduis 
	        cout << "\t\t\t\t\t The Raduis are is : " << root << endl;
	        cout << "\t\t\t\t\t +----------------------------+" << endl;
	        cout << endl;
	         cin.get();
	        cout << "\t\t\t\t\t To return to choices, press ENTER . . .";
	         cin.get();
	   system("cls"); // clear screen 
	}

	void setHeight() // Method/Function to set input data of Height
   {// Height Code 
        system("cls"); // clear screen
		cout << endl;
		double RAdius, Vol;
	    double HT;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|                 HEIGHT               |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+-----------------------------+\n";
		    cout << "\t\t\t\t\t|Calculate Height of Cylinder |\n";
		    cout << "\t\t\t\t\t+-----------------------------+\n";
	        cout << "\t\t\t\t\t +-----------------------------+\n";
	        cout << "\t\t\t\t\t Enter the Raduis : ";
	         cin >> RAdius;
	        cout << "\t\t\t\t\t Enter the Volume: ";
	         cin >> Vol;
	        HT = pow(Vol/(pi*RAdius),RAdius); // Formula of Height 
	        cout << "\t\t\t\t\t The Height are is : " << HT << endl;
	        cout << "\t\t\t\t\t +-----------------------------+" << endl;
	        cout << endl;
	         cin.get();
	        cout << "\t\t\t\t\t To return to Choices, press ENTER . . .";
	         cin.get();
	    system("cls"); // clear screen 
	}
	
	void setDiameter() // Method/Function to set input data of Diameter
   {// Diameter Code 
        system("cls"); // clear screen
		cout << endl;
		double HEIght, VOLume;
	    double Diameter;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|                DIAMETER              |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n";
	        cout << "\t\t\t\t\t+-------------------------------+\n";
	        cout << "\t\t\t\t\t|Calculate Diameter of Cylinder |\n"
		         << "\t\t\t\t\t+-------------------------------+\n";
		    cout << "\t\t\t\t\t +-------------------------------+\n";
	        cout << "\t\t\t\t\t Enter the Height : ";
	         cin >> HEIght;
	        cout << "\t\t\t\t\t Enter the Volume: ";
	         cin >> VOLume;
	        Diameter = 2*sqrt(VOLume/(pi*HEIght)); // Formula of Diameter 
	        cout << "\t\t\t\t\t The Diameter are is : " << Diameter << endl;
	        cout << "\t\t\t\t\t +-------------------------------+" << endl;
	        cout << endl;
	         cin.get();
	        cout << "\t\t\t\t\t To return to Choices, press ENTER . . .";
	         cin.get();
	    system("cls"); // clear screen 
	}
	
	void AboutUs()// Method/Function About Us
	{
	    system("cls");
	    cout << endl;
	        cout << "\t\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t\t|               About Us               |\n"
	             << "\t\t\t\t\t+--------------------------------------+\n" 
	             << "\t\t\t+----------------------------------------------------------------+\n"
	             << "\t\t\t| Group 6: Project Program C++ BSIT-1L                           |\n"
	             << "\t\t\t| We are the group 6, who always work together and understand    |\n"
	             << "\t\t\t| Things that the other doesn't. Misunderstandings do occur from |\n"
	             << "\t\t\t| Time to time, but they are quickly resolved.                   |\n"
	             << "\t\t\t| That includes a pathnership with each other and mutual support |\n"
	             << "\t\t\t| Hope you like our program.                                     |\n"
	             << "\t\t\t|                                                                |\n"
	             << "\t\t\t| INTRODUCTION: Our code is all about Right Cylinder,            |\n"
	             << "\t\t\t| Here in our code you will find the                             |\n"
	             << "\t\t\t| Volume, Radius, Height, Diameter, Surface Area,                |\n"
	             << "\t\t\t| Lateral Surface, Base Area.                                    |\n"
	             << "\t\t\t|                                                                |\n"
	             << "\t\t\t| Leader:                                                        |\n" 
	             << "\t\t\t| Allen Jefferson C. Orcino                                      |\n"
	             << "\t\t\t|                                                                |\n"	
	             << "\t\t\t+----------------------------------------------------------------+\n" << endl;
	        cout << endl;
	         cin.get();
	        cout << " \t\t\tTo return to Choices, press ENTER . . .";
             cin.get();
        system("cls"); //  clear the screen 
	}	
	
	void Exit () // Method/Function to Exit Message 
	{
	  cout << endl;
	  cout<< "\n\t\t\t\t\t thank you! and God bless!"; 
    }
};     
  
       
int main () 
{
   	// Introduction 
	cout << endl;  
    cout.unsetf(ios::left);
  	cout.width(72);
    cout << "BSIT 1L PRESENTATION\n"<<endl;
    cout.unsetf(ios::left);
  	cout.width(70);
	cout << "++   GROUP 6   ++\n" << endl;
   	cout.unsetf(ios::left);
	cout.width(76);                                                  
	cout << " ++----------------------++\n ";
	cout.unsetf(ios::left);
  	cout.width(75);
	cout << " ++       Welcome        ++\n ";
	cout.unsetf(ios::left);
  	cout.width(75);
	cout << "++----------------------++\n "<<endl;  	
 	cout << " \n\t\t\tINSTRUCTION: Kindly choose to the following program that you want to compute.  "<<endl;  
    cout << endl;
    
  	Cylinder C; // Object of class
	   	 	
    int selection;
		
    while (1) // Infinite while loop to choose
              // Options everytime
   {    
	    cout << endl; // Choice of Right Cylinder 
	    cout << "\t\t\t\t\t     +----------------------------+\n"
	         << "\t\t\t\t\t     | Calculate a Right Cylinder |\n" 
	         << "\t\t\t\t\t     +----------------------------+\n"
		     << "\t\t\t\t\t +------------------------------------+\n" 
		     << "\t\t\t\t\t |1. The Volume of Cylinder:          |\n" 
		     << "\t\t\t\t\t |2. The Surface Area of Cylinder:    |\n"
		     << "\t\t\t\t\t |3. The Lateral Surface of Cylinder: |\n"
		     << "\t\t\t\t\t |4. The Base Area of Cylinder:       |\n"
		     << "\t\t\t\t\t |5. The Raduis of Cylinder           |\n"
		     << "\t\t\t\t\t |6. The Height of Cylinder           |\n"
		     << "\t\t\t\t\t |7. The Diameter of Cylinder         |\n"
		     << "\t\t\t\t\t |8. About Us                         |\n"
		     << "\t\t\t\t\t |9. Exit                             |\n"
		     << "\t\t\t\t\t +------------------------------------+\n" 
		     << "\n";
	    cout << endl;
		cout << "\t\t\t\t\t Enter the number: ";
	     cin >> selection; 
	     
		switch(selection) // Choices to select from selection     
	   {
			case 1:  
				C.setvolume(); // Call the method
				break;
			case 2:  
				C.setSurface_Area(); // Call the method
				break;
			case 3:   
				C.setLateral_Surface();	// Call the method
				break;    
			case 4:  
		   	    C.setBase_Area(); // Call the method
				break;
			case 5:   
				C.setRaduis(); // Call the method
				break;
			case 6:  
				C.setHeight(); // Call the method
				break;
			case 7: 
				C.setDiameter(); // Call the method
				break; 
			case 8:
				C.AboutUs(); // call the method
				break; 
			case 9:
			    C.Exit(); // call the method  
				exit(1);
				break;	
			default: // Not valid input 
			cout << endl;
				cout << "Input not valid choose. Please try again... \n" << endl;
				break;
		}
	}
}

