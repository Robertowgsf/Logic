#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#define MAX 50

typedef struct {
    int Value;
} Element;

typedef struct {
    Element Elements[MAX];
    int Length;
} List;

void InitList(List* list) {
    list->Length = 0;

}

int Count(List* list) {
    return list->Length;
}

int IndexOf(List* list, int value) {
    for (int i = 0; i < list->Length; i++)
    {
        if (list->Elements[i].Value == value) {
            return i;
        }
    }
    
    return -1;
}

void PrintList(List* list) {
    printf("Elements: ");

    for (int i = 0; i < list->Length; i++)
    {
        printf("%i", list->Elements[i].Value);

        if (i < list->Length - 1) {
            printf(", ");
        }
    }
    
    printf("\n");
    int count = Count(list);
    int index = IndexOf(list, 55);
    printf("Count: %i\n", count);
    printf("Index of 55: %i\n", index);
}

bool AddAt(List* list, int index, int value) {
    if (list->Length == MAX || index < 0 || index > list->Length) {
        printf("Invalid index\n");
        return false;
    }

    for (int i = list->Length; i > index; i--)
    {
        list->Elements[i] = list->Elements[i - 1];
    }
    
    list->Elements[index].Value = value;
    list->Length++;

    return true;
}

bool Remove(List* list, int value) {
    int index = IndexOf(list, value);

    if (index == -1) {
        return false;
    }

    for (int i = index; i < list->Length - 1; i++)
    {
        list->Elements[i] = list->Elements[i + 1];
    }

    list->Length--;

    return true;
}

int main() {
    List* list = (List*) malloc(sizeof(List));
    InitList(list);
    list->Elements[0].Value = 21;
    list->Elements[1].Value = 9;
    list->Elements[2].Value = 55;
    list->Length = 3;
    int count = Count(list);
    int index = IndexOf(list, 9);
    PrintList(list);
    AddAt(list, 3, 10);
    PrintList(list);
    AddAt(list, 3, 20);
    PrintList(list);
    Remove(list, 55);
    PrintList(list);
    InitList(list);
    PrintList(list);
}