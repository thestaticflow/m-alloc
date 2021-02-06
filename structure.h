#IFNDEF STRUCTURE_H
#DEFINE STRUCTURE_H
//#pragma once -> better for MSVC Compiler
#include <iostream>
#include <ctype.h>
#include <string>

//written by m-s3c
//Friday Feb 6 2021

struct E {
                                                char text[40];
                                                int digits;
}E;

int *ptomem;

struct* E ptomem;

ptomem = (int*) malloc(sizeof(stuct E));

if(ptomem == NULL){
                                         std::cerr<<"Error"<<endl;
  
}else{

//In case we successifully allocated some memory

                                        scanf("%d", &ptomem->digits);

                                        printf("%d", &ptomem->digits);

}

#endif
