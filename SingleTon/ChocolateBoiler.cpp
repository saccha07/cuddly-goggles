#include<iostream>
#include<thread>

using namespace std;
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;
class ChocolateBoiler
{
    private:
    bool empty;
    bool boiled;
    static ChocolateBoiler * cb;
    ChocolateBoiler(const ChocolateBoiler &cb1);
    ChocolateBoiler & operator = (const ChocolateBoiler& cb1);
    public:
    static ChocolateBoiler * createInstance()
    {
        if(cb==NULL)
        {
        pthread_mutex_lock(&mutex);
        if(cb==NULL)
            cb=new ChocolateBoiler();
        pthread_mutex_unlock(&mutex);
        }
        return cb;
    }


    ChocolateBoiler()
    {
        cout<<"ST\n";
        empty=true;
        boiled=false;
    }
    void fill()
    {
        if(isempty()) {

            empty=false;
            boiled=false;
        }
    }
    void drain()
    {
        if(!isempty() && isBoiled()) {
            empty=true;
        }
    }
    void boil()
    {
        if(!isempty() && !isBoiled()) {
            boiled=true;
        }
    }
    bool isempty()
    {
        return empty;
    }
    bool isBoiled()
    {
        return boiled;
    }
    ~ChocolateBoiler() {}
};
ChocolateBoiler*ChocolateBoiler::cb=NULL;
int main()
{
    ChocolateBoiler *cb=NULL;
    cb = ChocolateBoiler::createInstance();
    cb->fill();
    ChocolateBoiler *cb1= cb;
    delete cb;
    return 0;
}
