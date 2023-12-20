

// place your function definitions here
enum errorcode
{
    true,
    false
};
int contains(const int *arr, int size, int x)
{
    for (int i = 0; i < size; i++, arr++)
    {
        if (*arr == x)
        {
            return true;
        }
    }
    return false;
}
int containsWithin(const int *arr, int size, int x, int i, int j)
{
    for (; arr[i] <= arr[j]; i++)
    {

        if (*arr == x)
        {
            return true;
        }
    }
    return false;
}