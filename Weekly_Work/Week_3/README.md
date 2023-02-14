# CMAKE 

When building a program you need a file to state what is what is what in your project. But with 
VS studio it automatical make these for you this is a problem because these file can only be used 
with VS studio. The way to work around this is to use a builder like **CMAKE**.

# Precompiled Headers

template<typename T>
class MyClass {
    private: 
        T val;
}

THis is a class template, you specify template paramters where you have to specify type of items.
Example:

MyClass<float> O1;
MyClass<string> O2;
MyClass<float> O3;

Class template doesnt equal class. You can't not have a hpp and cpp file for class templates. Class 
can have hpp and cpp because compiler can not construct it before it is being called. Doesnt know how to handle.
Class templates are impelmented inside cpp file.

if you have 2 cpp files with #include <vector> the compiler will compile the 2 file separtly and then combine them
with the linker. Imagine you have 1000 files with #include <vector> you will have to wait for a build time for days.

The way to fix the problem is to use precompile headers. We will give c++ a list of header files that will be pre-compile.
And c++ will compile them as much as it can and wait for header call and only compile the header once. WHen you do pre-compile
it last until something changes even if you re-compile.

vector<int> STORE;  ---> can now be written vector STORE{1,2,5};
Vector template is debucted for type.

# Entry Point for a Game Engine

* Program the just run
We need a loop sometimes called a application loop or game loop. 

while(true) {
    //Collect Input
    OnUpdate();
    //Apply Input (Change the game world)

    //Create a new frame (loop will have to happen 60 time a second for 60 fps)
}

They will exist a class **GameApp** supplied with our game engine, game creator will have to make there own class **MyGame** and inherite
the GameApp class write you own game udpate function *virtual*. Put what you want to happen in the loop 

class GameApp;

class MyGame : GameApp {
    void OnUpdate()
}

Once you finish your class you will use a macro we give you mabye **START_GAME** and then a parameter we give you.