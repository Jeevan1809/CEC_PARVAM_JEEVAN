#include <iostream>
#include <string>
using namespace std;

class  FIR{
    public:
      string complainantName;

      FIR (string name): complainantName(name){}

      virtual void registerCase() = 0;

      virtual ~FIR(){}
};

class TheftCase : public FIR{
    public:
      TheftCase(string name) : FIR(name){}

      void registerCase() override{
        cout << "Theft FIR regitered for" << complainantName << "." << endl;
        cout << "Action Investigation started for stolen property." << endl;
      }
};

class AccidentCase : public FIR{
    public:
      AccidentCase(string name) : FIR(name) {}

      void registerCase() override{
        cout << "Accident FIR regitered for" << complainantName << "." << endl;
        cout << "Accident Ambulance dispatched and accident site team notified." << endl;
      }
};

class MissingPersonCase : public FIR{
    public:
      MissingPersonCase(string name) : FIR(name) {}

      void registerCase() override{
         cout << "Missing Person FIR regitered for" << complainantName << "." << endl;
         cout << "Action: Local patrol units alarted and investigation initiated." << endl;
      }
};

int main(){
    FIR *case1 = new TheftCase("SHIVA");
    FIR *case2 = new AccidentCase("ADITYA");
    FIR *case3 = new MissingPersonCase("KARAN");

    cout << "=== FIR Registration ===" << endl;
    case1->registerCase();
    cout << endl;
    case2->registerCase();
    cout << endl;
    case3->registerCase();
    cout << endl;

    delete case1;
    delete case2;
    delete case3;

    return 0;
}
