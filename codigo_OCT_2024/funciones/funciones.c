

double sumar(double a, double b){
	return a+b;
}

double restar(double a, double b){
	return a-b;
}

void imprimirArray(int *ptr, int n){
	int i;
	
	//n = sizeof(ptr) / sizeof(int); OJO calcula el tam. del puntero --> 8 bytes
	for (i = 0 ; i < n ; i++)
		printf("i = %d, num = %d\n", i, ptr[i]);
}
 
