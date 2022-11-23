// *****************************************Prefix ++ Increment Operator Overloading with no return type********************************************** //

#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check(): i(0) {  }
       void operator ++() 
          { ++i; }
       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
    Check obj;
    obj.Display();
    ++obj; 
    obj.Display();

    return 0;
}

// // ************************************* Prefix Increment ++ operator overloading with return type************************************************** //
// #include <iostream>
// using namespace std;

// class Check
// {
//   private:
//     int i;
//   public:
//     Check(): i(0) {  }

//     // Return type is Check
//     Check operator ++()
//     {
//        Check temp;
//        ++i;
//        temp.i = i;

//        return temp;
//     }

//     void Display()
//     { cout << "i = " << i << endl; }
// };

// int main()
// {
//     Check obj, obj1;
//     obj.Display();
//     obj1.Display();

//     obj1 = ++obj;

//     obj.Display();
//     obj1.Display();

//     return 0;
// }

// // *************************************Postfix Increment ++ Operator Overloading************************************************** //


// #include <iostream>
// using namespace std;

// class Check
// {
//   private:
//     int i;
//   public:
//     Check(): i(0) {  }
//     Check operator ++ ()
//     {
//         Check temp;
//         temp.i = ++i;
//         return temp;
//     }

//     // Notice int inside barcket which indicates postfix increment.
//     Check operator ++ (int)
//     {
//         Check temp;
//         temp.i = i++;
//         return temp;
//     }

//     void Display()
//     { cout << "i = "<< i <<endl; }
// };

// int main()
// {
//     Check obj, obj1;    
//     obj.Display(); 
//     obj1.Display();

//     // Operator function is called, only then value of obj is assigned to obj1
//     obj1 = ++obj;
//     obj.Display();
//     obj1.Display();

//     // Assigns value of obj to obj1, only then operator function is called.
//     obj1 = obj++;
//     obj.Display();
//     obj1.Display();

//     return 0;
// }


// // *************************************Operator Overloading of Decrement -- Operator************************************************** //

// #include <iostream>
// using namespace std;

// class Check
// {
//   private:
//     int i;
//   public:
//     Check(): i(3) {  }
//     Check operator -- ()
//     {
//         Check temp;
//         temp.i = --i;
//         return temp;
//     }

//     // Notice int inside barcket which indicates postfix decrement.
//     Check operator -- (int)
//     {
//         Check temp;
//         temp.i = i--;
//         return temp;
//     }

//     void Display()
//     { cout << "i = "<< i <<endl; }
// };

// int main()
// {
//     Check obj, obj1;    
//     obj.Display(); 
//     obj1.Display();

//     // Operator function is called, only then value of obj is assigned to obj1
//     obj1 = --obj;
//     obj.Display();
//     obj1.Display();

//     // Assigns value of obj to obj1, only then operator function is called.
//     obj1 = obj--;
//     obj.Display();
//     obj1.Display();

//     return 0;
// }