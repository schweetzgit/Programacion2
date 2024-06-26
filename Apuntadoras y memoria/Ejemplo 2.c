// funcion guarda en el vector de Productos en un archivo
void GuardaVectorEnArchivo()
{
	char nombreRutaArchivo[120];
	FILE *A;
	printf("\n Dar ruta y nombre del archivo de inventario: \n");
	fflush(stdin);
	gets(nombreRutaArchivo);
	A = fopen(nombreRutaArchivo, "a");
	if(A == NULL)
	{
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	for(int i = 0; i < n; i++)
	{
		fprintf(A, "\n%d\n", VectInventario[i].IdProd);
		fprintf(A, "%s\n", VectInventario[i].NomProd);
		fprintf(A, "%s\n", VectInventario[i].Descripcion);
		fprintf(A, "%f\n", VectInventario[i].PrecioUCompra);
		fprintf(A, "%f", VectInventario[i].PrecioUVenta);
	}
	fclose(A);
	printf("\n Los datos fueron almacenados exitosamente\n");
	system("pause");
}
// Funcion leer productos en un archivo y los imprime en pantalla
void LeeInventarioArchivo()
{
	char x [130];
	FILE *F;
	prod aux[n];
	char auxi[3];
	printf("\n Nombre y ruta del archivo del archivo de inventario: \n");
	fflush(stdin);
	gets(x);  
	F = fopen(x, "r");
	if(F==NULL)
	{
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	while(!feof(F))
	{
		fscanf(F, "%d\n", &aux.IdProd);     
		fflush(stdin);
		fgets(aux.NomProd, 60,  F);         
		fgets(aux.Descripcion, 120, F);
		fscanf(F, "%f", &aux.PrecioUCompra);
		fscanf(F, "%f", &aux.PrecioUventa);
		printf("\n%d \n%s %s %f \n%f \n",aux.IdProd, aux.NomProd, aux.Descripcion, aux.PrecioUCompra, aux.PrecioUventa);
	}
	fclose(F);
	system("pause");
}

()
{
	FILE *f;
	fflush(stdin);
	gets(nomarchivoOrigen);
	f = fopen(nomarchivoOrigen, "r");
	if(f==NULL)
	{
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	while(!feof(f))
	{
		fscanf(f, "%d\n", &aux.IdProd);     
		fflush(stdin);
		fgets(aux.NomProd, 60,  f);         
		fgets(aux.Descripcion, 120, f);
		fscanf(f, "%f", &aux.PrecioUCompra);
		fscanf(f, "%f", &aux.PrecioUventa);
		if(IDborrar == aux.IdProd){
			printf("El producto con ID = %d fue borrado con exito \n Oprime enter para continuar", IDborrar);
			getch();
			centinela = 1;
		}
		else
		{
			b = fopen("c:/borrame/temporal.txt", "a";);
			fprintf(b, "\n%d\n", aux.IdProd);
			fprintf(b, "%s\n", aux.NomProd);
			fprintf(b, "%s\n", aux.Descripcion);
			fprintf(b, "%f\n", aux.PrecioUCompra);
			fprintf(b, "%f", aux.PrecioUVenta);
			fclose(b);
		}
	}
}

/*fprintf(A, "\n Titulo ");
		fgets(lib[i].titulo, 70, A);
		fprintf(A, "\n Autor ");
		fgets(lib[i].autor,60, A);
		fprintf(A, "\n Codigo del libro: ");
		fscanf(A, "%d", &lib[i].cod);
		fprintf(A, "\n Cantidad de ejemplares: ");
		fscanf(A, "%d", &lib[i].cant_inv);
		fprintf(A, "\n Cantidad de ejemplares prestados:",lib[i].cant_prest);
		fscanf(A, "%d", &lib[i].cant_prest);
		fprintf(A, "\n%s",lib[i].titulo);
		fprintf(A, "\n%s",lib[i].autor);
		fprintf(A, "\n%d",lib[i].cod);
		fprintf(A, "\n%d",lib[i].cant_inv);
		fprintf(A, "\n%d",lib[i].cant_prest);*/
		
		
		//for(int i = 0; i < n; i++){
			
			fflush(stdin);
			fgets(aux.titulo, 70, B);      
			fgets(aux.autor, 50, B);
			fscanf(B,"%d", &aux.cod);
			fscanf(B,"%d", &aux.cant_inv);
			fscanf(B,"%d", &aux.cant_prest);
			printf(" %s%s",aux.titulo, aux.autor);
			//printf("\n %s %s %d %d %d",aux.titulo, aux.autor, aux.cod, aux.cant_inv, aux.cant_prest);
			//printf("\n Autor: %s",aux.autor);
			/*fflush(stdin);
			fgets(aux[i].titulo, 70, B);
			fflush(stdin);         
			fgets(aux[i].autor, 50, B);
			printf("\n Titulo: %s",aux[i].autor);
			fscanf(B, "%d", &aux[i].cod);
			fscanf(B, "%d", &aux[i].cant_inv);
			fscanf(B, "%d", &aux[i].cant_prest);
			printf("\n Titulo: %s",aux[i].titulo);*/
		//	printf("\n Titulo: %s\n Autor: %s\n Codido del libro: %d\n Cantidad de ejemplares: %d\n Catidad de ejemplares prestados: %d \n",aux[i].titulo, aux[i].autor, aux[i].cod, aux[i].cant_inv, aux[i].cant_prest);
		//}
	}
	//fwrite(&aux, sizeof(aux),0,B);


void borrar()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo de producto a consultar: ");
    int cod;
    scanf("%i", &cod);
    tproducto producto;
    int existe=0;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
        if (cod == producto.codigo)
        {
           printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
           existe=1;
           break;
        }
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(arch);
}











