/*Los Gigabyte*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

void gotoxy (int x, int y);
void cuadro (int x1, int y1, int x2, int y2);

int main(){
	int menua;
	do{
		char menuc[5], cat, r, r2, nom[50], a[2] = "a", b[2] = "b", c[2] = "c", d[2] = "d";
		int repetir = 1, hrex, hrex_pr, sueldo, cat_num, ty, tp, s1 = 17, totalpago = 0;
		int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0, p9 = 0, p10 = 0, p11 = 0, mc;
		float isr;
		
		system("COLOR 2");
		cuadro(0,0,70,10);
		cuadro(1,1,65,3);
	    gotoxy(20,2);
	    printf("N%cMINA DE BEAVER TAIL",233,224);
	    gotoxy(20,5);
		printf("[1] Mostrar cat%clogos",160);
		gotoxy(20,6);
    	printf("[2] N%cmina de un trabajador",162);
    	gotoxy(20,7);
    	printf("[0] Salir");
    	gotoxy(20,9);
        printf("Seleccione una opci%cn: ",162);
    	scanf("%d",&menua);
    	
        switch(menua){
        	case 1:  
			    system("cls");
			    printf("\n      MEN%c CAT%cLOGOS\n\n",233,181);
			    
				while (repetir){
        			printf("   [a] Cat%clogo de sueldos\n",160);
        			printf("   [b] Cat%clogo de ISR\n",160);
        			printf("   [c] Cat%clogo de productos\n",160);
        			printf("   [d] Regresar al men%c principal\n\n",163);
        			printf("   Seleccione un cat%clogo: ",160);
        			fflush(stdin);
            		gets(menuc); 
					system("cls"); 
					
					if(strcmp(menuc,a) == 0){
						mc = 1;
					} else if(strcmp(menuc,b) == 0){
						mc = 2;
					} else if(strcmp(menuc,c) == 0){
						mc = 3;
					} else if(strcmp(menuc,d) == 0){
						mc = 4;
					} else{
						mc = 5;
					}
            		switch (mc){
            			case 1:
                    		printf("\n                  CAT%cLOGO DE SUELDOS\n\n",181);
                    		printf("   Categor%ca          Descripci%cn             Sueldo base\n",161,162);
                    		printf("       A       Jefe de sistemas                 $30,000\n");
                    		printf("       B       Administrador de Base de Datos   $26,000\n");
                    		printf("       C       Programador Senior               $21,000\n");
							printf("       D       Webmaster                        $15,000\n");
                    		printf("       E       Programador Junior               $8,000\n\n\n"); 
						break;
                		case 2:
                    		printf("\n           CAT%cLOGO DE ISR\n\n",181);
                    		printf("     Sueldo base        Porcentaje\n");
                			printf("       $30,000           6.98%%\n");
                    		printf("       $26,000           5.87%%\n");
                			printf("       $21,000           3.46%%\n");
                			printf("       $15,000           2.68%%\n");
                    		printf("       $8,000            1.97%%\n\n\n");
                    	break;
                    	case 3:
                    		printf("\n           CAT%cLOGO DE PRODUCTOS\n\n",181);
                    		printf("       Id.      Descripci%cn      Precio\n",162);
                    		printf("       1       Vaso met%clico      $50\n",160);
                    		printf("       9       Gorra              $150\n");
                    		printf("       16      Sudadera           $350\n");
                    		printf("       54      Lapicera           $50\n");
                    		printf("       96      Mochila            $300\n");
                    		printf("       3       Aud%cfonos          $250\n",161);
                    		printf("       18      Bocina             $500\n");
                			printf("       34      Abrecartas         $300\n");
                    		printf("       89      Alcanc%ca           $150\n",161);
                    		printf("       5       Termo              $250\n");
                    		printf("       8       Bolsa              $350\n\n\n");
						break;
						case 4:
                			repetir = 0;	
                		break;	
						default:
							printf("\a");
							printf("\n    Opci%cn inv%clida, intente nuevamente\n\n\n",162,160);  
                		break;	
                	}
				}	
			break;
	    	case 2:
            	system("cls");
				printf("\n   Ingrese nombre del empleado: ");
				fflush(stdin);
            	gets(nom); 
            	
            	printf("\n   Categor%ca    Descripci%cn\n",161,162);
                printf("       A       Jefe de sistemas\n");                  
                printf("       B       Administrador de Base de Datos\n");   
                printf("       C       Programador Senior\n");            
				printf("       D       Webmaster\n");
                printf("       E       Programador Junior\n"); 
				             
            	do{
                    printf("\n   Ingrese una categor%ca: ",161);
                    fflush(stdin);
                    scanf("%c",&cat);
            		cat_num = cat;
                    if (pow(cat_num-67,2) > 4 && pow(cat_num-99,2)>4){
                    	printf("\a");
                    	printf("   Categor%ca inv%clida, intente nuevamente\n",161,160);
					} 
            	} while (pow(cat_num-67,2) > 4 && pow(cat_num-99,2)>4);
        
            	do{
            		hrex = -1;
                    printf("\n   Ingrese horas extras trabajadas: ");
                    fflush(stdin);
                    scanf("%d",&hrex);
                    if (pow(hrex-10,2)>100){
                    	printf("\a");
						printf("   Horas inv%clidas, intente nuevamente\n",160);
                    }
                } while (pow(hrex-10,2)>100);
                
                do{
					printf("\n   %cEl trabajador compro un art%cculo? s/n: ",168,161);
					fflush(stdin);
            		scanf("%c",&r);
            		if (r == 's'|| r == 'n'|| r == 'S'|| r == 'N'){ 
            			ty = 1;
					} else if (r != 's' || r != 'n' || r != 'S' || r != 'N'){
						printf("\a");
                		printf("   Respuesta inv%clida, intente nuevamente\n",160);
					}
            	} while (ty != 1);
            	
				if (r == 's' || r == 'S'){
					system("cls");
					gotoxy(5,1);
                    printf("Introduzca el id y cantidad del/los art%cculos comprados\n\n",161);
                    printf("       Id.      Descripci%cn      Precio\n",162);
                    printf("       1       Vaso met%clico      $50\n",160);
					printf("       9       Gorra              $150\n");
                    printf("       16      Sudadera           $350\n");
                    printf("       54      Lapicera           $50\n");
                    printf("       96      Mochila            $300\n");
                    printf("       3       Aud%cfonos          $250\n",161);
                    printf("       18      Bocina             $500\n");
                	printf("       34      Abrecartas         $300\n");
                    printf("       89      Alcanc%ca           $150\n",161);
                	printf("       5       Termo              $250\n");
                    printf("       8       Bolsa              $350\n\n\n");
                    
                    gotoxy(5,16);
					printf("Id. Art%cculo",161);
					gotoxy(19,16);
					printf("Cantidad");
					gotoxy(30,16);
					printf("Item",161);
					gotoxy(52,16);
					printf("Total a pagar");
					
					do{
						int numitem = 0, cant = 0, total = 0;
						gotoxy(5,s1);
						scanf("%d",&numitem);
						gotoxy(19,s1);
						scanf("%d",&cant);
	
				    	if (cant >= 0){
							switch(numitem){
								case 1:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Vaso met%clico",160);
									total = 50 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p1 = 1;
								break;
								case 9:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Gorra");
									total = 150 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p2 = 1;
								break;
								case 16:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Sudadera");
									total = 350 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p3 = 1;
								break;
								case 54:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Lapicera");
									total = 50 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p4 = 1;
								break;
								case 96:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Mochila");
									total = 300 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p5 = 1;
							    break;
								case 3:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Aud%cfonos",161);
									total = 250 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p6 = 1;
								break;
								case 18:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Bocina");
									total = 500 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p7 = 2;
								break;
								case 34:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Abrecartas");
									total = 300 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p8 = 1;
								break;
								case 89:
									gotoxy(30,s1);
									fflush(stdin);           		
									printf("Alcanc%ca",161);
									total = 150 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p9 = 1;
								break;
								case 5:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Termo");
									total = 250 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p10 = 1;
								break;
								case 8:
									gotoxy(30,s1);
									fflush(stdin);
									printf("Bolsa");
									total = 350 * cant;
									gotoxy(52,s1);
									printf("$%d",total);
									p11 = 1;
								break;
								default:
									gotoxy(30,s1);
									fflush(stdin);
									printf("\a");
									printf("Art%cculo inexistente",161);
								break;		           				          		 
							}
							totalpago = total + totalpago; 
						} else {
							printf("\a");
							gotoxy(5,s1);
							printf("         ");
							gotoxy(19,s1);
							printf("         ");	
						}  	
						s1 = s1 + 1;
						
						do{
							gotoxy(70,16);	
							fflush(stdout);
							printf("%cDesea agregar otro art%cculo? s/n: ",168,161);
							gotoxy(105,16);		
							fflush(stdin);
							scanf("%c",&r2);
            				if (r2 == 's'|| r2 == 'n'|| r2 == 'S'|| r2 == 'N'){ 
            					tp = 1;
                        		gotoxy(70,18);
                				printf("                                          ");
							} else if (r2 != 's' || r2 != 'n' || r2 != 'S' || r2 != 'N'){
								tp = 2;
                				gotoxy(70,18);
                				printf("\a");
                				printf("Respuesta inv%clida, intente nuevamente",160);
							}
						} while (tp != 1);
						gotoxy(105,16);
						printf("      ");
           				 
				 	} while (r2 == 's' || r2 == 'S');
					
					gotoxy(45,s1+1);
					printf("Total: $%d",totalpago);	
					gotoxy(70,16);							
                    system("pause");
            	}
            	
            	system("cls");
            	printf("\n   Nombre del trabajdor: %s\n",nom);
            	
            	if (cat_num == 65 || cat_num == 97){
					printf("\n   Descripci%cn de la categor%ca: Jefe de sistemas",162,161);
                	printf("\n   Sueldo mensual base: $30,000\n");
                    sueldo = 30000;
                    hrex_pr = 600;
                    isr = 0.0698;
                    if(hrex > 10){
						hrex ++;
						printf("\n   *Aplica recompensa por m%cs de 10 horas de trabajo\n",160);
					}
				} else if (cat_num == 66 || cat_num == 98){
					printf("\n    Descripci%cn de la categor%ca: Administrador de Base de Datos",162,161);
                	printf("\n    Sueldo mensual base: $26,000\n");
                    sueldo = 26000;
                    hrex_pr = 520;
                    isr = 0.0587;
                    if(hrex > 9){
						hrex ++;
						printf("\n   *Aplica recompensa por m%cs de 9 horas de trabajo\n",160);
					}
				} else if (cat_num == 67 || cat_num == 99){
					printf("\n   Descripci%cn de la categor%ca: Programador Senior\n",162,161);
                	printf("\n   Sueldo mensual base: $21,000\n");
					sueldo = 21000;
                    hrex_pr = 420;
                    isr = 0.0346;
                    if(hrex > 8){
						hrex ++;
						printf("\n   *Aplica recompensa por m%cs de 8 horas de trabajo\n",160);
					}
				} else if (cat_num == 68 || cat_num == 99){
					printf("\n   Descripci%cn de la categor%ca: Webmaster",161,162);
                	printf("\n   Sueldo mensual base: $15,000\n");
                    sueldo = 15000;
                    hrex_pr = 300;
                    isr = 0.0268;
                    if(hrex > 7){
						hrex ++;
						printf("\n   *Aplica recompensa por m%cs de 7 horas de trabajo\n",160);
					}
				} else if (cat_num == 69 || cat_num == 100){
					printf("\n   Descripci%cn de la categor%ca: Programador Junior",162,161);
                	printf("\n   Sueldo mensual base: $8,000\n");
                    sueldo = 8000;
                    hrex_pr = 160;
                    isr = 0.0197;
                    if(hrex > 6){
						hrex ++;
						printf("\n   *Aplica recompensa por m%cs de 6 horas de trabajo\n",160);
					}
				}
				
            	printf("\n   Horas extras trabajadas: %d",hrex);
            	printf("\n   El sueldo extra es de: $%d \n",hrex * hrex_pr);
            	int f= 500;
            	if(hrex > 5){
            		printf("   Aplica bono de fidelidad: $%d \n",f);
				} else{
					int f = 0;
					printf("   No aplica bono de fidelidad \n");
				}
				
            	printf("\n   El ISR correspondiente al sueldo es de:  $%.0f",(sueldo * isr)); 
				printf("\n   Sueldo libre de impuestos:  $%.0f\n",sueldo - (isr * sueldo));
            	printf("\n   El total de los art%cculos comprados es de: $%d",161,totalpago);
            	
				if (r == 'n'|| r == 'N' || totalpago == 0){
					printf("\n   No compro ning%cn art%cculo\n",163,161);
					printf("\n   El importe mensual por cobrar es de: $%.2f\n", ((sueldo - (isr * sueldo)) + (hrex * hrex_pr) + f) - totalpago);
                	gotoxy(3,20);
                	system("pause");
				} else{
					printf("\n   Art%cculos comprados:\n",161);
					if (p1 == 1){
						printf("   - Vaso met%clico\n",160);
					}
					if (p2 == 1){
						printf("   - Gorra\n");
					}
					if (p3 == 1){
						printf("   - Sudadera\n");
					}
					if (p4 == 1){
						printf("   - Lapicera\n");
					}
					if (p5 == 1){
						printf("   - Mochila\n");
					}
					if (p6 == 1){
						printf("   - Audifonos\n");
					}
					if (p7 == 2){
						printf("   - Bocina\n");
					}
					if (p8 == 1){
						printf("   - Abrecartas\n");
					}
					if (p9 == 1){
						printf("   - Alcancia\n");
					}
					if (p10 == 1){
						printf("   - Termo\n");
					}
					if (p11 == 1){
						printf("   - Bolsa\n");
					}
					printf("\n   El importe mensual por cobrar es de: $%.2f\n", ((sueldo - (isr * sueldo)) + (hrex * hrex_pr) + f) - totalpago);
                	gotoxy(3,25);
                	system("pause");
				}
			break;
			case 0:
				system("cls");
				printf("Saliendo del programa... Esto puede tardar unos segundos");
				Sleep(3000);
				exit(0);
			break;
		    default:
		    	printf("\a");
		    	printf("\n   Opci%cn inv%clida, intente nuevamente",162,160); 
		    	fflush(stdout);
		    	Sleep(2000);
		    break;  
        } 
        system("cls");
    } while(menua);
	system("cls");
	system("pause");
	return 0;
}
void cuadro (int x1, int y1, int x2, int y2){
	int k;
	for(k = x1; k < x2; k++){
		gotoxy(k,y1);printf("Ä");
		gotoxy(k,y2);printf("Ä");
	}
	for(k = y1; k < y2; k++){
		gotoxy(x1,k);printf("³");
		gotoxy(x2,k);printf("³");
	}
	gotoxy(x1,y1);printf("Ú");
	gotoxy(x1,y2);printf("Á");
	gotoxy(x2,y1);printf("¿");
	gotoxy(x2,y2);printf("Ù");
}

void gotoxy(int x, int y)
{
	HANDLE lina;
	lina = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordenadas;
	coordenadas.X = x;
	coordenadas.Y = y;
	SetConsoleCursorPosition(lina,coordenadas); 
}
