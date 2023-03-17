#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
int main()
{
    int i=0,check=0,cout=0,erb=0,c=0,e=0;
    char name[40],stl[7]="circle";
    float P,S,r,PI=3.14;
    FILE * ptrFile = fopen("123" , "r");
    fgets(name,40,ptrFile);
    
    
    if (ptrFile == NULL) perror("Ошибка открытия файла");
   else
   {
    while (i <= 28){
        if(name[i]==' '){
            i++;
        }
        if(strncmp(name,stl,6) !=0 ){
            if(check == 1)break;
            
            puts (name);
            printf(" expected circle");
            break;
        }else{
            check++;
            i+=6;
        }
        
        if(name[i] != '('){
            if(cout == 1)break;
            puts (name);
            printf(" expected '('");
            break;
        }else{
            i++;
            cout++;
        }
        
        if('0' <= name[i] && name[i] <= '9'){
           // a=name[i] - '0';
            i++;
            erb++;
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }
        
         if(name[i] == '.'){
           i++;
                
         }
            if('0' <= name[i] && name[i] <= '9'){
           // a=name[i] - '0';
            i++;
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }
       
            
            if(name[i]==' '){
            i++;
        }

           if('0' <= name[i] && name[i] <= '9'){
           // a=name[i] - '0';
            i++;
            erb++;
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }
        
         if(name[i] == '.'){
           i++;
                
         }
            if('0' <= name[i] && name[i] <= '9'){
           // a=name[i] - '0';
            i++;
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }




        if(name[i] != ','){
            if(c == 1)break;
            puts (name);
            printf(" expected ','");
            
            break;
        }else{
            i++;
            c++;
        }

         if(name[i]==' '){
            i++;
        }
        
        
         if('0' <= name[i] && name[i] <= '9'){
            if(name[i+1] == '.'){
           r=name[i]- '0' + (name[i+2]-'0')*0.1;
               
            i++;
             P=2*PI*r;
              printf("\n P=%f",P);
             S=PI*r*r;
              printf("\n S=%f",S);
         }else{
            r=name[i] - '0';
            if( r < 0){
              printf("incorrect r");
              break;
              } 
            i++;
             P=2*PI*r;
              printf("\n P=%f",P);
             S=PI*r*r;
              printf("\n S=%f",S);
            }
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }
        
         if(name[i] == '.'){
           i++;
                if('0' <= name[i] && name[i] <= '9'){
           // a=name[i] - '0';
            i++;
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }
         }
     /*   if(name[i] != ','){
            if(check == 4)break;
            puts (name);
            printf(" expected ','");
            break;
        }else{
            i++;
            check++;
        }
        
          if('0' <= name[i] && name[i] <= '9'){
             c1=name[i] - '0';
            i++;
            
            
        }else{
            if(erb == 1)break;
            puts (name);
            printf(" expected number ");
            break;
        }*/ 
          if(name[i]==' '){
            i++;
        }
        
         if(name[i] != ')'){
            if(e == 1)break;
            puts (name);
            printf(" expected ')'");
            break;
        }else{
            i++;
            e++;
        }
              

           if('0' <= name[i] && name[i] <= '9'){
             if(erb == 1)break;
            puts (name);
            printf(" unexpected number ");
            break;
        }else{
           i++;
        }
        
        
        
    }
     }
    fclose (ptrFile);
     puts(name);

    return 0;
}
