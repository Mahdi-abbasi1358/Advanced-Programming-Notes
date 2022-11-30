#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class animal {
    protected: 
        string name;
        double weight;
        int vaccine_dose; 
    public:
        animal(string name_, double weight_,int vaccine_dose_){
        name= name_;
        weight= weight_;
        vaccine_dose=vaccine_dose_;
        cout << "A new animal is registerd in our veterinary medicine!";
        };
        string get_name() { return name; };
        double get_weight() { return weight;};
        int get_dose(){ return vaccine_dose;}
        virtual void make_noise()=0 ;
        virtual ~animal(){};
};

class dog: public animal {        
    public: 
        dog(string name_, double weight_,int vaccine_dose_ ): animal{name_, weight_,vaccine_dose_}{
        cout << "It's a dog. Its name is: "<< name << endl; 
        }
        virtual void make_noise(){ cout <<"woof woof."<< endl;};

};
class cat: public animal {        
    public: 
        cat(string name_, double weight_,int vaccine_dose_ ): animal{name_, weight_,vaccine_dose_}{
        cout << "It's a cat. Its name is: "<< name << endl; 
        }
        virtual void make_noise(){ cout <<"meiu meiu."<< endl;};
};

class hamster: public animal {        
    public: 
        hamster(string name_, double weight_,int vaccine_dose_): animal{name_, weight_,vaccine_dose_}{
        cout << "It's a hamster. Its name is: "<< name << endl; 
        }
        virtual void make_noise(){ cout <<"pech pech."<< endl;};
};


class vet{
    protected: 
        string name;
    public: 
        void give_shot(animal *a){
            // do something with animal 
            cout << "Dr. " << name << " is vacinating " << a->get_name() << ". The vaccine dose is:"<< a->get_dose()<< ". You may hear its noise like: ";
            a->make_noise(); // making a special noise during vaccination
        };
        string get_name(){return name;}
        void set_name( string  name_){ name= name_;}

};

int main (){
    vector<animal*> animals;
    cout << "Step1: The animals are now being registered for vaccination in Veterinary Medicine!" << endl<< endl;
    dog *dg =new dog("Snoopy", 50.0, 10);
    animals.push_back(dg);
    cat *ct =new cat("Garfield", 10.0, 5);
    animals.push_back(ct);
    hamster *hs= new hamster("Caren", 0.200, 1);
    animals.push_back(hs);

    cout << "Step2: The animals are now being vaccinated in Veterinary Medicine!" << endl << endl; 
    vet vt1;
    vt1.set_name("David Myres");
    for (int i = 0; i < animals.size(); i++)
        vt1.give_shot(animals[i]);
    return 0;
}
