#include<stdio.h>
#include<string.h>

struct car {
    char make[50];
    char model[50];
    int year;
    int price;
    int mileage;
};

void addCar(struct car Car[], int *pointer, char make[], char model[], int year, int price, int mileage) {
    strcpy(Car[*pointer].make, make);
    strcpy(Car[*pointer].model, model);
    Car[*pointer].year = year;
    Car[*pointer].price = price;
    Car[*pointer].mileage = mileage;
    printf("Car Added!\n");
    (*pointer)++;
}

void displayCars(struct car Car[], int *pointer){
	printf("Available Cars:\n");
	for (int i = 0; i < *pointer; i++){
		printf("%s %s\n",Car[i].make, Car[i].model);
	}
}

void searchMake(struct car Car[], int *pointer, char make[50]){
	for(int i = 0; i < *pointer; i++){
		if(strcmp(make, Car[i].make) == 0){
		 	printf("%s found in index %d", make, i);
			return;
		}
	}
	printf("%s not found", make);
}
void searchModel(struct car Car[], int *pointer, char model[50]){
	for(int i = 0; i < *pointer; i++){
		if(strcmp(model, Car[i].model) == 0){
			printf("%s found in index %d", model, i);
			return;
		}
	}
	printf("%s not found", model);
}

void main() {
    struct car Car[100];
    int pointer = 0;
    addCar(Car, &pointer, "Toyota", "Camry", 2022, 25000, 15000);
	addCar(Car, &pointer, "Honda", "Civic", 2020, 20000, 30000);
	printf("\n");
	displayCars(Car, &pointer);
	printf("\n");
	
	searchMake(Car, &pointer, "Camry");
	searchModel(Car, &pointer, "Camry");
}