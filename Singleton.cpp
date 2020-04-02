// Singleton Design Pattern
#include<bits/stdc++.h>
using namespace std;

// Admin class is a singleton class as in our system only one Admin can exist
class Admin
{
    public:
        string name;
        int id;
        static Admin *AdminInstance;
    
    private:
        // make the constructor private
        Admin(string name, int id)
        {
            this -> name = name;
            this -> id = id;
        }
    public:
        // static function to get the only instance
        static Admin* getInstance(string name, int id)
        {
            if(!AdminInstance)
                AdminInstance = new Admin(name, id);
            return AdminInstance;
        }
    
};

// initializing static variable AdminInstance to nullptr 
Admin* Admin:: AdminInstance = nullptr;


int main()
{
    Admin *obj1 = Admin::getInstance("Venkat", 502);
    cout<<obj1->name<<endl;
    
    // we will get the reference of obj1 itself   
    Admin *obj2 = Admin:: getInstance("Pavan", 502);
    cout<<obj2->name<<endl;
    
    return 0;
}