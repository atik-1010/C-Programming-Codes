#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 84;
    final_marks = 90;

    total_marks = ft_marks / 4.00 + st_marks /4.0 + final_marks / 2.0;
    printf("%0.0lf", total_marks);


    return 0;
}
