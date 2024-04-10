car_model: car_model.o main.o 
    gcc -o car_model car_model.o main.o

car_model.o: car_model.c car_model.h
    gcc -c car_model.c 

main.o: main.c car_model.h
    gcc -c main.c  

clean:
    rm car_model *.o 
