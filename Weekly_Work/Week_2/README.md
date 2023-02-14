Executable is **65 KB** with *65865 lines* 

# MACRO

This is a macro that was used by microsoft developer to make it more readable
Each compiler have their own implementation of libaries 

#iostream macros version below 

_TRY_IO_BEGIN -> try {}
_STD -> ::std::
_CATCH_IO_END -> catch {......}

# INHERITHANCE & PALIMORPHISM

class B {
    public: 
        void HI(){
            cout << "Hi from B" << endl;
        }
}


class D {
    public: 
        void HI(){
            cout << "Hi from D" << endl;
        }
}

int main(){
    B b;
    D d;

    B* ptr{& b};

    ptr->Hi(); // THis will print "Hi from b";

    B* ptr{& d};

    ptr->Hi(); // THis will print "Hi from b"; unless the function is virtual

    D and B class place as a virtual function{
        class B >>>
        virtual void Hi() {}

        class D >>>
        virtual void Hi() override{}
    }
    
    B* ptr{& d};

    ptr->Hi(); // THis will print "Hi from d"; unless the function is virtual

    // you can not define or make an intial value for Hi() function by writing the below:
    virtual void Hi() = 0;
    
}

We can make a class **b and d** both of these class can be pointed to by the a base class
pointer**B* ptr{&b} or B* ptr{&d}**. When you run HI() it works with the base class varible but not
the derived class d. It will print *"Hi from D"* if **virtual** is not specified on the function.

* virtual void Hi(){};

No the function will work when called by the ptr. it is always best to add **override** key word to 
let people know that it was change. 

* virtual void Hi() override{}

If you would like to make an inital function in your base class that doesnt have a function definit
or just a placeholder for the derived class you will use the syntax bellow

* virtual void Hi() = 0 // In the base class D

## NEXT TIME

cmake and pre compile headers 