// // #include <stdio.h>
// // void main()
// // {
// //     int *ptr;
// //     int arr[5];
// //     ptr = &arr;
// //     for (int i = 0; i < 5; i++)
// //     {
// //         scanf("%d", ptr + i);
// //     }
// //     for (int i = 0; i < 5; i++)
// //     {
// //         printf("%d ", (*(ptr + i) * (*(ptr + i))));
// //     }
// // }

// #include <stdio.h>
// void main()
// {
//     int *ptr;
//     int *ptr2;
//     int x = 10;
//     int y = 20;
//     int temp = 0;
//     ptr = &x;
//     ptr2 = &y;
//     printf("x = %d \n", *ptr);
//     printf("y = %d \n", *ptr2);
//     temp = *ptr;
//     *ptr = *ptr2;
//     *ptr2 = temp;
//     printf("after swap\n");
//     printf("x = %d \n", *ptr);
//     printf("y = %d \n", *ptr2);
// }