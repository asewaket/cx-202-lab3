CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: Task1 Task2 Task3

task1: Task1.c
	$(CC) $(CFLAGS) -o Task1 Task1.c

task2: Task2.c
	$(CC) $(CFLAGS) -o Task2 Task2.c

task3: Task3.c
	$(CC) $(CFLAGS) -o Task3 Task3.c

run_task1: Task1
	./Task1

run_task2: Task2
	./Task2

run_task3: Task3
	./Task3

run: run_task1 run_task2 run_task3

