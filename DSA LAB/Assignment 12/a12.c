#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct HashNode {
    int key;
    int value;
};

struct HashTable {
    struct HashNode* array[SIZE];
};

struct HashTable* createHashTable() {
    struct HashTable* table = (struct HashTable*)malloc(sizeof(struct HashTable));
    for (int i = 0; i < SIZE; i++) {
        table->array[i] = NULL;
    }
    return table;
}

int hashFunction(int key) {
    return key % SIZE;
}

void insert(struct HashTable* table, int key, int value) {
    int index = hashFunction(key);

    while (table->array[index] != NULL) {
        // Linear probing to find the next available slot
        index = (index + 1) % SIZE;
    }

    struct HashNode* newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    newNode->key = key;
    newNode->value = value;

    table->array[index] = newNode;
}

int search(struct HashTable* table, int key) {
    int index = hashFunction(key);

    while (table->array[index] != NULL) {
        if (table->array[index]->key == key) {
            return table->array[index]->value;
        }

        // Linear probing to check the next slot
        index = (index + 1) % SIZE;
    }

    // Key not found
    return -1;
}

int main() {
    struct HashTable* hashTable = createHashTable();

    insert(hashTable, 1, 10);
    insert(hashTable, 2, 20);
    insert(hashTable, 3, 30);

    // Search for keys
    printf("Value for key 2: %d\n", search(hashTable, 2));
    printf("Value for key 4: %d\n", search(hashTable, 4));

    free(hashTable);

    return 0;
}

