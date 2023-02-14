# Game Day

You can build your project in my different was 
* x86 is for 32 bits (win32)
* x64 is for 64 bits (x86-64)

if you dont disable 32 bit then you can have errors with your library and not them building properly
because some my be built in 32 bit and they wont be compatible with your 64 bit code so on.

You then should change to the lastest version of C++. (C++20) Conveout is that you will require users 
to have your version of complier or it won't work on their system.

They your create your own project for the game engine and then your set the C++ version. And you want to 
build a dynamic library **(.dll)** microsoft 

Then you add reference to the floor project, you are say Game require engine project to run first.

C++ compiler require that if you want to use dll you need to see the class 

__declspec(dllexport)

inside of the game it should be 

__declspec(dllimport)


### Lookup preproccessor for vs code