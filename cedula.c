#include <stdio.h>
#include <stdlib.h>

#define ano_actual 2022

struct fecha{

  int dias;
  int mes;
  int ano;
};


struct datos {
  
char Nombre [40];
char Sexo [10];
char Nacionalidad [50];
char Estado_civil [30]; 
char Numero_indentidad[20];
char Ocupacion[40];
char fecha_expiracion[60];
char Sector[70];
struct fecha fecha_nacimiento;

 };
   
int fecha_es_valida(struct fecha f) {
int dias_mes[] = {0, 31, 28, 31, 30,
                 31, 30, 31, 31, 30,
                 31, 30, 31};
  
  if(f.mes < 1|| f.mes > 12)
   return 0; 
  if (f.dias < 1 || f.dias > dias_mes[f.mes])
    return 0;
  return 1;
  
}


int main(void) {
  
  struct datos d;
  
printf("Nombre completo: \n");
scanf("%[^\n]" , d.Nombre);
  
printf("\nEres mujer o hombre: \n");
scanf("%s" , d.Sexo); 

printf("\nDe que pais eres: \n");
scanf("%s" , d.Nacionalidad);

printf("\nEsta casado o soltero: \n");
scanf("%s" , d.Estado_civil);
  
printf("\nDigite el numero de indetidad: \n");
scanf("%s" , d.Numero_indentidad);

printf("\nOcupacion: \n");
scanf("%s" , d.Ocupacion);  

printf("\nColoque la fecha de expiracion: \n");
scanf("%s" , d. fecha_expiracion); 

printf("\nMunicipio: \n");
scanf("%s" , d.Sector);   

printf("fecha_nacimiento(dias, mes, ano): ");
scanf("%d" , &d.fecha_nacimiento.dias);
scanf("%d" , &d.fecha_nacimiento.mes);  
scanf("%d" , &d.fecha_nacimiento.ano); 

if(!fecha_es_valida(d.fecha_nacimiento)){
fprintf(stderr, "fecha es invalida\n");
exit(1);
  
 }
  
  
}


