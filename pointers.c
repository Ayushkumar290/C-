int main()
{
    int a;
    a = 100
    int *p;
    p = &a

    int **s;
    s = &p;

    printf("%d,%d,%d",**s,*p,a)
}