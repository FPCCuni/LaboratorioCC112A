Funci�n ordBurbuja(a,tam)
	Para i<-0 Hasta tam-1-1 Hacer
		Para j<-0 Hasta tam-1-1-i Hacer // tam - 1 n�mero de pasadas
			Si a[j]>a[j+1] Entonces // intercambios
				temp <- a[j] // condici�n oodenamiento
				a[j] <- a[j+1]
				a[j+1]<-temp
			FinSi
		FinPara
	FinPara
FinFunci�n

Funci�n imprimir_arreglo(a,tam)
	Para j<-0 Hasta tam-1 Hacer
		Escribir a[j], ' 'Sin Saltar
	FinPara
	Escribir ''
FinFunci�n

Algoritmo bubble_sort
	Definir temp, tam, a Como Entero
	tam <- 5
	Dimensionar a(tam)
	Para i<-0 Hasta tam-1 Hacer
		Escribir 'Ingrese el elemento ', i
		Leer a[i]
	FinPara
	Escribir 'Areglo original: '
	imprimir_arreglo(a,tam)
	ordBurbuja(a,tam)
	Escribir 'Arreglo ordenado '
	imprimir_arreglo(a,tam)
FinAlgoritmo
