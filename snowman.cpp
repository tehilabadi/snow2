#include "snowman.hpp"
#include <iostream>
using namespace std;
#include <string>

enum casees {
case_A = 1,
case_B = 2,
case_C = 3,
case_D = 4,
small = 11111111,
big = 44444444,
div1 = 10000000,
div2 = 1000000,
div3 = 100000,
div4 = 10000,
div5 = 1000,
div6 = 100,
div7 = 10, 
};


string ariel::snowman(int num){
    string temp = "magic";
    if(num<small||num>big){
        try
        {
        throw "not a snowman";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    else{
        int hat = num/div1; //hat
        int nose = num/div2 -  hat*div7;//nose
        int leye = num/div3 - (hat*div6+nose*div7);//left eye
        int reye = num/div4 - (hat*div5+nose*div6+   leye*div7);//right eye
        int lhand = num/div5 - (hat*div4+nose*div5+  leye*div6+reye*div7);//left hand
        int rhand = num/div6 - (hat*div3+nose*div4+ leye*div5+reye*div6+lhand*div7);//right hand
        int torso = num/div7 - (hat*div2+nose*div3+leye*div4+reye*div5+lhand*div6+rhand*div7);//torso
        int base = num - (hat*div1+nose*div2+leye*div3+reye*div4+lhand*div5+rhand*div6+torso*div7);//base
        if(hat>case_D||nose>case_D||leye>case_D||reye>case_D||lhand>case_D||rhand>case_D||torso>case_D||base>case_D){
            throw "too big number";
        }
        if(hat<case_A||nose<case_A||leye<case_A||reye<case_A||lhand<case_A||rhand<case_A||torso<case_A||base<case_A){
            throw "too small";
    }
        string snow8 = "hat";
        switch (hat)
        {
        case case_A:
            snow8 =" _===_\n";
            break;
        case case_B:
            snow8 ="  ___ \n .....\n";
            break;
        case case_C:
            snow8 ="   _\n  /_\\\n";
            break;
        case case_D:
            snow8 ="  ___ \n (_*_)\n";
            break;
        }
        
        string snow7 = "leye";//left eye first
        switch (leye)
        {
        case case_A:
            snow7 ="(.";
            break;
        case case_B:
            snow7 ="(o";
            break;
        case case_C:
            snow7 ="(O";
            break;
        case case_D:
            snow7 ="(-";
            break;

    }
       string snow6 = "nose";//nose
        switch (nose)
        {
        case case_A:
            snow6 =",";
            break;
        case case_B:
            snow6 =".";
            break;
        case case_C:
            snow6 ="_";
            break;
        case case_D:
            snow6 =" ";
            break;
     
    }
       
       string snow5 = "reye";//right eye
          switch (reye)
        {
        case case_A:
            snow5 =".)";
            break;
        case case_B:
            snow5 ="o)";
            break;
        case case_C:
            snow5 ="O)";
            break;
        case case_D:
            snow5 ="-)";
            break;
    }
    
       string snow4 = "lhand";//left hand
          switch (lhand)
        {
        case case_A:
            snow4 ="<";
            break;
        case case_B:
            snow4 ="\\";
            break;
        case case_C:
            snow4 ="/";
            break;
        case case_D:
            snow4 =" ";
            break;

    }
    string snow3 = "rhand";//right arm
          switch (rhand)
        {
        case case_A:
            snow3 =">";
            break;
        case case_B:
            snow3 ="/";
            break;
        case case_C:
            snow3 ="\\";
            break;
        case case_D:
            snow3 =" ";
            break;
    }


    string snow2 = "torso";//torso
          switch (torso)
        {
        case case_A:
            snow2 ="( : )";
            break;
        case case_B:
            snow2 ="(] [)";
            break;
        case case_C:
            snow2 ="(> <)";
            break;
        case case_D:
            snow2 ="(   )";
            break;
    }
    
    string snow1 = "base";//base
          switch (base)
        {
        case case_A:
            snow1 =" ( : )";
            break;
        case case_B:
            snow1 =" (\" \")";
            break;
        case case_C:
            snow1 =" (___)";
            break;
        case case_D:
            snow1 =" (   )";
            break;

    }
        if(lhand==2&&rhand==2){
            temp = snow8 + snow4 + snow7 + snow6 + snow5 + snow3 + "\n" + " " + snow2 +"\n"+ snow1;
        }
        else if(lhand==2&&rhand!=2){
            temp = snow8 + snow4 + snow7 + snow6 + snow5 + "\n" + " " +snow2 + snow3 + "\n"  + snow1;
        }
        else if(rhand==2&&lhand!=2){
            temp = snow8 + " " + snow7 + snow6 + snow5 + snow3 + "\n"  + snow4 + snow2 +"\n"  + snow1;
        }
        else{
            temp = snow8  +" " + snow7 + snow6 + snow5 + " " + "\n" + snow4 + snow2 + snow3 + "\n" + snow1;
        }
    }
    return temp;

}
