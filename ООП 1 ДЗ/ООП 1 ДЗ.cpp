// ООП 1 ДЗ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//class Microphone {
//    int weight = 100;
//    int energy = 100;
//    int state = 100;
 //   int quality = 100;
//    int appearance = 100;

//public:
 //   void Sing() {
//        energy -= 5;
//        state --;
 //       quality--;
 //       appearance--;
//    }
//    void Fix() {
 //       state = 100;
//        quality = 100;
//        appearance = 100;
//    }
//    void Charge() {
//       energy = 100;
 //   }
 //   void Broke() {
       
//        state = 0;
//        quality = 0;
//        appearance = 0;
//    }
//    void Disassemble() {
 //       weight --;
//    }
//    void PrintInfo() {
 //       cout << "Weight " << weight << "\n";
//        cout << "State "  << state  << "\n";
 //       cout << "Quality " << quality << "\n";
//        cout << "Appearance " << appearance << "\n";
 //   }

//};


// class number = 5;
//  int water = 5;
//  int smell = 100;
//  int quality = 100;
 // int week = 1;

// public:
//  void PrintInfo() {
//      cout << "Number " << number << "\n";
//      cout << "Water " << water << "\n";
//      cout << "Smell  " << smell << "\n";
//      cout << "Quality " << quality << "\n";
 //     cout << "Week  " << week << "\n";
 // }
//  void Smell() {
 //     smell--;
 // }
 // void Decorate() {
 //     week++;
 //     quality--;
//      smell--;
//      water--;
//  }
//  void Water(){
//      water = 5;
//  }
 // void Remove() {
 //     number--;
 // }
 // void Add() {
  //    number++;
 // }
// };

//class AcousticGuitar {
//    int quality = 100;
 //   int strings = 6;
//    int energy = 100;
//    int mood = 100;
//    int size = 135;
//public:
//    void PrintInfo() {
//        cout << "Quality " << quality << "\n";
//        cout << "Strings " << strings << "\n";
 //       cout << "Energy  " << energy << "\n";
//        cout << "Mood " << mood << "\n";
//        cout << "Size  " << size << "\n";
//    }
//    void Play() {
//        energy--;
//        mood--;
//        quality--;
 //   }
//    void Broke() {
//        energy = 0;
//        mood = 0;
 //       size = 135;
//    }
 //   void ChangeMood() {
//        mood = 100;
//    }
//    void ChangeSizeBelt() {
 //       size++;
 //   }
//};

//class Sansevieria {
 //   int weight = 2;
 //   int height = 2;
 //   int week = 1;
 //   int water = 5;
 //   int number = 1;
//public:
  //  void PrintInfo() {
  //            cout << "Weight " << weight << "\n";
  //            cout << "Height " << height << "\n";
 //             cout << "Week " << week << "\n";
  //            cout << "Water  " << water << "\n";
  //            cout << "Number   " << number << "\n";
  //        }
  //  void Water() {
  //      water = 5;
 //   }
 //   void Cut() {
  //      height--;
 //   }
 //   void Look() {
  //      week++;
 //   }
 //   void Add() {
 //       number++;
  //      weight++;
  //      water++;
  //  }
  //  void Removed() {
   //     weight = 0;
//height = 0;
   //     week = 0;
   //     water = 0;
    //    number = 0;
//    }

//  };


class Book{
    int weight = 1;
    int pages = 446;
    int quality = 100;
    int price = 450;
    int year = 1994;
public:
    void PrintInfo() {
                cout << "Weight " << weight << "\n";
                  cout << "pages " << pages << "\n";
                  cout << "quality " << quality << "\n";
                cout << "price " << price << "\n";
                   cout << "year  " << year << "\n";
     }
    void Read() {
        quality--;
    }
    void Learn() {
        quality--;
    }
    void Cut() {
        weight--;
        pages--;
        quality--;
    }
    void Sell() {
        price = 350;
    }
    
    
};


int main(){
   
    Book p;
    p.PrintInfo();
    cout << "========\n";
    p.Read();
    p.PrintInfo();
    cout << "========\n";
    p.Learn();
    p.PrintInfo();
    cout << "========\n";
    p.Cut();
    p.PrintInfo();
    cout << "========\n";
    p.Sell();
    p.PrintInfo();

    
     
//    Sansevieria p;
//    p.PrintInfo();
//    cout << "========\n";
   
//    p.Water();
//    p.PrintInfo();
//    cout << "========\n";
//    p.Cut();
//    p.PrintInfo();
//    cout << "========\n";
//    p.Look();
 //   p.PrintInfo();
 //   cout << "========\n";
 //   p.Removed();
 //   p.PrintInfo();
 //   cout << "========\n";
 //   p.Add();
  //  p.PrintInfo();
    

  //  AcousticGuitar p;
  //  p.PrintInfo();
  //  cout << "========\n";
  //  p.Play();
  //  p.PrintInfo();
 //   cout << "========\n";
  //  p.Broke();
  //  p.PrintInfo();
  //  cout << "========\n";
  //  p.ChangeMood();
  //  p.PrintInfo();
  //  cout << "========\n";
 //   p.ChangeSizeBelt();
 //   p.PrintInfo();

    
        //Microphone p;
       // p.PrintInfo();
        //cout << "========\n";
       // p.Fix();
       // p.PrintInfo();
       // cout << "========\n";
      //  p.Sing();
      //  p.PrintInfo();
      //  cout << "========\n";
     //   p.Charge();
      //  p.PrintInfo();
     //   cout << "========\n";
     //   p.Broke();
    //    p.PrintInfo();
    //    cout << "========\n";
     //   p.Disassemble();
     //   p.PrintInfo();


    // Peonies p;
    // p.PrintInfo();
   // cout << "=====\n";
 // p.Smell();
 // p.PrintInfo();
 // cout << "=====\n";
 // p.Decorate();
 // p.PrintInfo();
//  cout << "=====\n";
// p.Water();
 // p.PrintInfo();
 // cout << "=====\n";
 // p.Remove();
 // p.PrintInfo();
 // cout << "=====\n";
 // p.Add();
 // p.PrintInfo();


   




}






