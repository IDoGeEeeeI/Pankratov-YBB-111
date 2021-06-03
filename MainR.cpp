//
//  MainR.cpp
//  lab1
//
//  Created by Дмитрий Панкратов on 26.05.2021.
//

#include <stdio.h>
#include "Header.h"
#include <iostream>
using namespace std;
int main(){

Pair me0ow1(1,2);
Pair me0ow2(3,4);
Long me0ow3(4,5);
Long me0ow4(6,7);
    cout<<"me0ow1 = ("<<me0ow1<<")"<<endl;
    cout<<"me0ow2 = ("<<me0ow2<<")"<<endl;
    cout<<"сложение(Pair) = ("<<me0ow1+me0ow2<<")"<<endl;
    
    cout<<"me0ow3 = ("<<me0ow3<<")"<<endl;
    cout<<"me0ow4 = ("<<me0ow4<<")"<<endl;
    cout<<"сложение(Long) = ("<<me0ow3+me0ow4<<")"<<endl;
    cout<<"вычитание(Long) = ("<<me0ow3-me0ow4<<")"<<endl;
    cout<<"умножение(Long) = ("<<me0ow3*me0ow4<<")"<<endl;
}

