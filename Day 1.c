//program to declare and read int, double and string data types

int main()
{
    int x;
    double y;
    char z[100];
    scanf("%d",&x);
    scanf("%lf",&y);
    scanf("%*[\n] %[^\n]", z);
    printf("%d\n",x+i);
    printf("%.01lf\n",y+d);
    printf("%s%s", s, z);

    return 0;
}
