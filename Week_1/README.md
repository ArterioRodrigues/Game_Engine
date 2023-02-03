# SINGLETON
***

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

    private:
        Singleton();

        inline static Singleton * instance{nullptr};
}
`

Function INIT check if an object already exist and create one if not. 
Static class methods can be called without class being made. **Singleton::INIT()**