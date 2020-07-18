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

int IndexOf(List* list, Element element) {
    int left = 0;
    int right = list->Length - 1;
    int middle;

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (list->Elements[middle].Value == element.Value) {
            return middle;
        }
        else if (list->Elements[middle].Value < element.Value) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
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
    Element element;
    element.Value = 55;
    int index = IndexOf(list, element);
    printf("Count: %i\n", count);
    printf("Index of %i: %i\n", element.Value, index);
}

bool Add(List* list, Element element) {
    if (list->Length >= MAX) {
        printf("List is full\n");
        return false;
    }

    int index = list->Length;

    while (index > 0 && list->Elements[index - 1].Value > element.Value)
    {
        list->Elements[index] = list->Elements[index - 1];
        index--;
    }
    
    list->Elements[index] = element;
    list->Length++;

    return true;
}

bool Remove(List* list, Element element) {
    int index = IndexOf(list, element);

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
    Element element;
    InitList(list);
    element.Value = 21;
    Add(list, element);
    element.Value = 9;
    Add(list, element);
    element.Value = 55;
    Add(list, element);
    int count = Count(list);
    element.Value = 9;
    int index = IndexOf(list, element);
    PrintList(list);
    element.Value = 20;
    Add(list, element);
    PrintList(list);
    element.Value = 10;
    Add(list, element);
    PrintList(list);
    Remove(list, element);
    PrintList(list);
    InitList(list);
    PrintList(list);
}