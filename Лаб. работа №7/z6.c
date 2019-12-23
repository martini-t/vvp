int main(void)
{
float a,b,c;
printf("a:");
scanf ("%f", &a);

printf("b:");
scanf ("%f", &b);

printf("c:");
scanf ("%f", &c);

printf("%d\n",(a==b) & (a==c) & (b==c));
return 0;
}