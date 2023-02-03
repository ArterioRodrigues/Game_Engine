# Week 1 Class 2

## SINGLETON

In software engineering, the singleton pattern is a software design pattern that restricts the instantiation of a 
class to a singular instance. One of the well-known "Gang of Four" design patterns, which describe how to solve 
recurring problems in object-oriented software, the pattern is useful when exactly one object is needed to 
coordinate actions across a system.

`

class Singleton 
{
    public:
    
    static void INIT(){ 
        if(!instance) instance = new Singleton;
    }

    static Singleton* GET(){
        return instance;
    }

    void DoWork();

    private:
        Singleton();

        inline static Singleton * instance{nullptr};
}

`

Function INIT check if an object already exist and create one if not. 
Static class methods can be called without class being made. **Singleton::INIT()**
To use a function in a singelton we will make a GET to access the created singleton and then call
the function with **Singleton::GET()->DoWork();**

## Modifications 

When using singleton you want to use it to initialize a service that will run program life cycle.
If you dont want to make it live not the whole life cycle you will need to destroy the pointer.
A function that can handle th **pointer instance**

## Smartpointers

Smartpointers are pointer where you do not need to account for memory leaks and destroy your pointers,
Memory leaks are easy to create and they hurt your programs preformance, memory accumalates over time.

    1. std::unique_ptr<double> ptr{new double}; **this creats a smart pointer that a double called ptr**
       when funcitons is over or out of scope functions are realsed. Unique_ptr has a requirement no other ptr
       can point to its memory. So copy assignment and constructor functionality are disable. 
       ptr2 = ptr  ❌

       When you see the void Foo(unique_ptr<double> num) << you know that this function will release memory at the 
       end of function call. But you can't call the function with it either you need to use the move function;
       Foo(ptr);    ❌
       Foo(std::move(ptr));    🟢
       <br/>
    2. std::shared_ptr<double> sp{new double}; this allows you to share you pointer memory addresss

## Inheritance & Polimorphism 

`
    class Base{
        private:
            int num;

        public:
            void Hi(){
                cout << "Hi \n";
            }
    }

    class Derived : public Base {
        private:

        public: 
            void Bye {
                cout << "Bye \n"; 
            }
    }

`

The *Derived* class inherites all of *Base* class functions.
main() >>

> Derived d;
> d.Hi();

Base * ptr {new Base};
Base * ptr {new Derived};

A *Base ptr* can point to base as well as *Derived* class. This is usefully because if you want to make a game
and you want to store a bunch of different items you can use this techiques to store all the values into an 
array. 

`

class Unit;

class Mage : Unit;
class Solider : Unit;
    ...
class Tank : Unit;

`

This give us access to all classes and we can make a vector for it. **vector<Unit *> units;**


## RAIL <LOOK UP>

Mutex Lock you can look it and you can unlock dont forget to do it. C++ Has 

`

    mutex 1;
    l.lock()
    l.unlock()

    ... 

    lock_guard<mutex> l;
    l.lock()

`