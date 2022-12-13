// your name surname and age from user
int main()
{
    char firstname[20], lastname[20];
    int yas;
    printf("What Is Your Firstname: ");
    scanf("%s", firstname);
    printf("What Is Your Lastname: ");
    scanf("%s", lastname);
    printf("How Old Are You: ");
    scanf("%d", &yas);
    printf("Your Name Is: %s\nYour Surname Is: %s\nYour Age Is: %d \n", firstname, lastname, yas);
    return 0;
}
