

// place your function definitions here
int contains(const int *arr, int size, int x)
{
    for (int i = 0; i < size; i++, arr++)
    {
        if (*arr == x)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
