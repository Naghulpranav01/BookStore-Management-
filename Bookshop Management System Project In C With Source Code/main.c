#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
     int bno,bcost,baccno;
     char bname[20],bpub[20],bauthor[20];
}p[10];
int main()
{
     int n,i,ch;
     char pubname[20],authorname[20];
     printf("/*How Many Records of Books You Want to Add*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\tEnter Details of Book-%d",i+1);
          printf("\n------------------------------------------\n");
          printf("Book Number      : ");
          scanf("%d",&p[i].bno);
          printf("Book Name        : ");
          scanf("%s",p[i].bname);
          printf("Author Name     : ");
          scanf("%s",p[i].bauthor);
          printf("Publication : ");
          scanf("%s",p[i].bpub);
          printf("Cost             : ");
          scanf("%d",&p[i].bcost);
          printf("Accession Number : ");
          scanf("%d",&p[i].baccno);
          printf("------------------------------------------\n");
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("------------------------------------------\n");
          printf("\n1.Books of Specific Author");
          printf("\n2.Books of Specific Publisher");
          printf("\n3.All Books Costing Rs. 500 & Above");
          printf("\n4.All Books");
          printf("\n5.Exit");
          printf("\n------------------------------------------\n");
          printf("\nEnter Your Choice : ");
          scanf("%d",&ch);
          printf("\n");
          switch(ch)
          {
               case 1:
                    printf("Enter Author Name : ");
                    scanf("%s",authorname);
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(p[i].bauthor,authorname)==0)
                         printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n",p[i].bno,p[i].bname,p[i].baccno);
                    }
                    break;
               case 2:
                    printf("Enter Publication Name : ");
                    scanf("%s",pubname);
                    for(i=0;i<n;i++)
                    {
                         if(strcmp(p[i].bpub,pubname)==0)
                              printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n\n",p[i].bno,p[i].bname,p[i].baccno);
                    }
                    break;
               case 3:
                    for(i=0;i<n;i++)
                    {
                         if(p[i].bcost>=500)
                         {
                              printf("Book Number : %d\n",p[i].bno);
                              printf("Book Name : %s \n",p[i].bname);
                              printf("Cost : %d\n",p[i].bcost);
                              printf("Accession Number : %d\n",p[i].baccno);
                              printf("\n------------------------------------------\n");
                         }
                    }
                    break;
               case 4:
                    for(i=0;i<n;i++)
                    {
                         printf("Book Number   : %d\n",p[i].bno);
                         printf("Book Name : %s \n",p[i].bname);
                         printf("Author : %s\n",p[i].bauthor);
                         printf("Publisher : %s\n",p[i].bpub);
                         printf("Cost : %d\n",p[i].bcost);
                         printf("Accession Number : %d\n",p[i].baccno);
                         printf("\n------------------------------------------\n");
                    }
                    break;
               case 5:
                    exit(0);
          }
     }
     return 0;
}
