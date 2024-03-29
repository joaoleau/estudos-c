#include <stdio.h>
#define MAX 10

typedef struct list
{
    int datas[MAX];
    int last;
} List;

void initialize(List *list)
{
    list->last = -1;
    return;
}

void destrutor(List *list)
{
    list->last = -1;
}

int is_full(List *list)
{
    return list->last == MAX - 1;
}

int is_empty(List *list)
{
    return list->last == -1;
}

int add(List *list, int value)
{
    if (is_full(list))
    {
        printf("Lista já esta cheia");
        return -1;
    }
    list->datas[++list->last] = value;
}

int remove_data(List *list)
{
    if (is_empty(list))
    {
        printf("Ja esta vazia");
        return -1;
    }

    // printf("%d", list->datas[list->last--]);
    return list->datas[list->last--]; // Retorna o que sera tirado e decrementa!
}

void view(List *list)
{
    printf("\n");
    for (int i = 0; i <= list->last; ++i)
    {
        printf("%d ", list->datas[i]);
    }
    return;
}

int add_first(List *list, int value)
{
    if (is_full(list))
    {
        printf("Lista já esta cheia");
        return -1;
    }
    ++list->last;
    for (int aux = list->last; aux > 0; --aux)
    {
        list->datas[aux] = list->datas[aux - 1];
    }
    list->datas[0] = value;
    return 0;
}

int remove_first(List *list)
{
    if (is_empty(list))
    {
        printf("Lista ja esta vazia");
    }

    int value = list->datas[0];
    --list->last;
    for (int position = 0; position <= list->last; ++position)
    {
        list->datas[position] = list->datas[position + 1];
    }
    return value;
}

int add_data(List *list, int value, int target)
{
    if (is_full(list))
    {
        printf("Lista já esta cheia");
    }
    else
    {
        if (0 < target <= list->last + 1)
        {
            ++list->last;
            for (int position = list->last; position > target; --position)
            {
                list->datas[position] = list->datas[position - 1];
            }
            list->datas[target] = value;
            return 0;
        }
        printf("\nDestino incorreto\n");
    }
    return -1;
}

void crescent(List *list)
{
    int maior;
    for (int i = 0; i <= list->last; ++i)
    {
        for (int j = 0; j <= list->last; ++j)
        {
            if (list->datas[i] <= list->datas[j])
            {
                maior = list->datas[i];
                list->datas[i] = list->datas[j];
                list->datas[j] = maior;
            }
        }
    }
}

void decrescent(List *list)
{
    int menor;
    for (int i = 0; i <= list->last; ++i)
    {
        for (int j = 0; j <= list->last; ++j)
        {
            if (list->datas[i] >= list->datas[j])
            {
                menor = list->datas[i];
                list->datas[i] = list->datas[j];
                list->datas[j] = menor;
            }
        }
    }
}

int view_last(List *list)
{
    return list->last;
}

int main()
{
    List list;
    initialize(&list);
    add_first(&list, 19);
    add_first(&list, 2);
    add_first(&list, 1);
    view(&list);
    // add(&list, 10);
    // add(&list, 3);
    // add_first(&list, 4);
    // view(&list);
    // remove_data(&list);
    // view(&list);
    // remove_data(&list);
    // view(&list);
    // add(&list, 49);
    // view(&list);
    // remove_first(&list);
    // view(&list);
    // add_data(&list, 13, 2);
    // view(&list);
    // add(&list, 30);
    // add(&list, 50);
    // add(&list, 3);
    // add(&list, 10);
    // crescent(&list);
    // view(&list);
    // decrescent(&list);
    // view(&list);
    // printf("\n%d", view_last(&list));
    // add(&list, 10);
    // printf("\n%d", view_last(&list));
    return 0;
}