                                #include <stdio.h>
                                int main()
                                {
                                        int a,b,c;
        
                                        printf(" Enter the sides of a triangle: ");
                                        scanf("%d%d%d",&a,&b,&c);


                                        if (a+b>c) {
                                        printf(" It is a valid triangle");

                                        
                                         if (b+c>a) {
                                        printf(" It is a valid triangle");
                                        }
                                         if (a+c>b) {
                                        printf(" It is a valid triangle");
                                        }
                                        }
                                        else {
                                        printf("It is an invalid triangle");
                                        }
                                return 0;
                                }