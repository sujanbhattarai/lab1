// Sujan Bhattarai

/* program that asks for the names of three runners
 
 and the time it took each of them to finish a race.
 
 First:, second: and Third:*/

#include <sstream>

#include <iostream>

#include <iomanip>

using namespace std;

// main function

int main()

{
    
    string runner1,runner2, runner3;
    
    double Time1,Time2,Time3;
    
    // asking  user to enter the first runner name
    
    cout << "Enter the runner1 name: "<<endl;
    
    getline(cin,runner1);
    
    //asking  user to enter the  first runner time.
    
    cout <<"enter the runner1  time:"<<endl;
    
    cin>>Time1;
    
    cin.ignore(100, '\n'); // is needed for getline to go to the next line
    
    
    // asking  user to enter the second runner name
    
    cout <<"enter the runner2 name: "<<endl;
    
    getline(cin,runner2);
    
    //asking  user to enter the second runer time
    cout <<"enter the runner2  time:"<<endl;
    
    cin>>Time2;
    
    cin.ignore(100, '\n'); // is nedded t get the third name.
    
    // asking user to enter the third runner name
    
    cout <<"enter the runner3 name:"<<endl;
    
    getline(cin,runner3);
    
    // asking user to enter the third runner time
    cout <<"enter the runner3  time:"<<endl;
    
    cin>>Time3;
    
    //cin.ignore(100, '\n'); // we dont need in this case here
    
    // This calculation is to see  if the time grater than 0
    if (Time3 > 0 && Time2 > 0 && Time1 > 0)
        
        // this calculation is to see if Time3 comes first
        if (Time3 < Time2 && Time3 < Time1)
            
            if (Time2 < Time1)
                  
            {
                cout<<"First:"<<runner3<<endl;
                
                cout<<"Second:"<<runner2<<endl;
                
                cout<<"Third:"<<runner1<<endl<<endl;
                
            }
    
            else
                
            {
                cout<<"First:"<<runner3<<endl;
                
                cout<<"Second:"<<runner1<<endl;
                
                cout<<"Third:"<<runner2<<endl;
            }
    
    // this calculation is to see if Time2 is come first
            else if( Time2<Time1 && Time2<Time3)
                
                
                
                if( Time1 < Time3)
                    
                {
                    cout<<"First:"<<runner2<<endl;
                    
                    cout<<"Second:"<<runner1<<endl;
                    
                    cout<<"Third:"<<runner3<<endl;
                }
    
                else
                    
                {
                    cout<<"First:"<<runner2<<endl;
                    
                    cout<<"Second:"<<runner3<<endl;
                    
                    cout<<"Third:"<<runner1<<endl;
                }
    
                else
                    // This calculation is to make sure if Time1 come first
                    if (Time2>Time1&&Time2>Time3)
                        
                        if(Time3>Time2)
                            
                        {
                            cout<<"First:"<<runner1<<endl;
                            
                            cout<<"Second:"<<runner2<<endl;
                            
                            cout<<"Third:"<<runner3<<endl;
                        }
    
                        else
                            
                        {
                            cout<<"First:"<<runner1<<endl;
                            
                            cout<<"Second:"<<runner3<<endl;
                            
                            cout<<"Third:"<<runner2<<endl;
                        }
    // if the time is negative comes here
                        else
                            cout<<"oh oh! invalid time You cant enter the negative time ";
    
    return 0;
    
}

