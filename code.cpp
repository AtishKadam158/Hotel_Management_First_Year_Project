#include<stdio.h>
main()
{
printf("\n\t\t\t\t********WEL-COME TO THE FUNDAMENTAL PROGRAMMING PROJECT********\n");
printf("\n\t\t\t\t\t**CREATED BY ATISH KADAM,VIRAJ PATHRIKAR,AMAN GURUMUKHI,SHUBHAM KADAM,VISHWAJEET KADAM**\n");
printf("\n\t\t\t\t\t\t******WEL-COME TO GOA******");
int a,b,c,e,g,h,l,m,n,z,t,u,v,k,i,j;
int r[5],o[10];
printf("\n\nKINDLY CHOOSE THE AREA WHERE WOULD YOU LIKE TO VISIT HOTEL (NORTH GOA=1,SOUTH GOA=2,CENTRAL GOA=3)=");
scanf("%d",&a);
if(a==1)//north goa
      {//area one
      printf("\n\nFOR WHAT PURPOSE YOU ARE LOOKING FOR HOTEL IN NORTH GOA (PARTY=1,FOOD=2,LODGE=3)=");
      scanf("%d",&b);
     if(b==1) //party
             {printf("\n\nFOR WHAT TYPE OF HOTEL YOU PARTY (FIVE STAR=1,THREE STAR=2,MID RANGE=3)=");
             scanf("%d",&c);
                if(c==1)//Five star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int t[]={4000,3500,5500,4700,5300};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL PARTY ZONE*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL PARTY ZONE *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);}
             if(c==2) //three star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                          int t[]={2000,3000,3500,2500,3000};
                          float tota,rent;
                          char *u[5]={"Family get together       ","Birthday party     ","Marriage engagement     ","Dj party      ","Wedding        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL of  GLAMOUR*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int p[]={122,152,162,182,152,232,132,232,212,12};
                          float tot,fo;
                          char *s[10]={"Rice       ","PAV BHAJI       ","MISAL       ","RASGULLA         "," FRIED CHICKEN               ","HOT DOG             ","PIZZA         ","BEER           ","DESI DARU             ","SWEETS              "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL of  GLAMOUR *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);}
            if(c==3) //mid range party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int t[]={500,600,520,900,800};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL GANESH *** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);
                          int p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"VADA PAV       ","MISAL PAV      ","Sahi Paneer      ","DAL RICE       ","CHOLE KULCHE             ","MOMOS             ","Mutton Kosa           ","papads       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL GANESH*** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);
                            }}
      else if(b==2)       //food   DONE
      {   printf("\n\nFOR WHAT TYPE OF HOTEL IN CENTRAL GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
          scanf("%d",&e);
             if(e==1)       //five star food
                        { printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                          int i,o[10],p[]={40,60,55,85,95,90,130,25,20,10};
                          float tot;
                             char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO HOTEL LOVELY*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);}



              if(e==2)         //three star food
                         {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                           int i,o[10],p[]={40,60,55,85,95,90,130,25,20,10};
                           float tot;
                             char *s[10]={"matar paneer       ","palak paneer       ","Sahi Paneer  ","kadhai paneer         ","butter naan       ","rumal roti        ","papad     ","Salad       ","Soft Drinks          ","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO HOTEL COUNTRY*** \n\t\tLodging 3750 per night\n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);}

              if(e==3)     //mid range food
                      {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                      int i,o[15],p[]={40,40,120,130,110,20,300,220,120,60,55,85,95,90,130};
                         float tot;
                             char *s[15]={ "butter naan       ","rumal roti        ","papad     ","Salad       ","Soft Drinks          ","Sweets        ""Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab       ","Chilli Chicken             ","Mutton Kosa              ","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO  HOTEL PRIDE*** \n \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);} }
      else if(b==3)      //LODGING
                  {printf("\n\nFOR WHAT TYPE OF HOTEL IN CENTRAL GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
                   scanf("%d",&g);
             if(g==1)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int k,r[5],t[]={1100,1000,1500,1700,5000};
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL DELICIOUS  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL DELICIOUS  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);}
              if(g==2)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={500,400,600,800,1000 };
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL  TAJ LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);
                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL TAJ  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                            printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);}
              if(g==3)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={500,400,600,800,1000 };
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL  FANTASY LODGE*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);
                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"UNLIMITED THALI           ","SIMPLE THALI        ","SPECIAL THALI       ","Chicken Kosa         ","Chicken Kabab                 ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL FANTASY  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);}
                            }
      else{printf("Oops choose the integer");}    }
if(a==2)



{//Loop two
      printf("\n\nFOR WHAT PURPOSE YOU ARE LOOKING FOR HOTEL IN SOUTH GOA (PARTY=1,FOOD=2,LODGE=3)=");
      scanf("%d",&h);
     if(h==1) //party
             {printf("\n\nFOR WHAT TYPE OF HOTEL YOU PARTY (FIVE STAR=1,THREE STAR=2,MID RANGE=3)=");
             scanf("%d",&l);
                if(l==1)//Five star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={4100,3600,5600,4800,5400};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL PARTY NIGHT*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                        int i,j,o[10],p[]={125,155,165,185,155,235,135,235,215,12};
                          float tot,fo;
                          char *s[10]={"Rice       "," Biryani      ","Potato sabji       ","Rotis 4 per plate      ","Chicken Kabab          ","Chilli Chicken            ","Beer           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO  HOTEL PARTY NIGHT *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is=%f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo); }
               if(l==2) //three star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={1000,1200,1300,1500,1600};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO SHAHENSHAH HOTEL*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int i,j,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"JEERA RICE       ","FULL PLATE       ","SPECIAL PLATE        ","UNLIMITED THALI          ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO SHAHENSHAH HOTEL *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);
                          }
               if(l==3) //mid range party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={1800,1900,2000,3200,3600};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL  JAI KRISHNA*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int i,j,o[10],p[]={50,30,15,25,90,50,60,35,60,80};
                          float tot,fo;
                          char *s[10]={"pani puri       ","special pakodas    ","SAMOSA           ","TIKIYAN            ","SPRITE 100 ML          ","THUMS UP 200ML            ","Mutton Kosa           ","papads       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL  JAI KRISHNA *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);

                            }}
      else if(h==2)       //food   DONE
      {   printf("\n\nFOR WHAT TYPE OF HOTEL IN SOUTH GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
          scanf("%d",&m);
             if(m==1)       //five star food
                        { printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int i,o[10],p[]={150,180,240,240,250,280,280,25,20,10};
                        float tot;
                          char *s[]={"Veg Au gratin       ","Veg sizzler  ","Lamb strew  ","Southern fired chicken  ","Chicken steak ","Chicken Al keiv","CHICKEN STROGANOF ","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO The Glory Hotel*** \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                          }



              if(m==2)         //three star food
                         {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int i,o[15],p[]={40,40,120,130,110,20,300,220,120,60,55,85,95,90,130};
                         float tot;
                             char *s[15]={ "butter naan       ","rumal roti        ","papad     ","Salad       ","Soft Drinks          ","Sweets        ""Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO DIVINE*** \n \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                           }

              if(m==3)     //mid range food
                      {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                      int i,o[15],p[]={40,40,120,130,110,20,300,220,120,60,55,85,95,90,130};
                         float tot;
                             char *s[15]={ "cheess pizza       ","burger                   ","papad          ","Salad                ","Soft Drinks          ","Sweets          ""gulab jamun        ","Fried Rice            ","Sahi Paneer   ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO  HOTEL PRIME*** \n \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                     } }
      else if(h==3)      //LODGING
                  {printf("\n\nFOR WHAT TYPE OF HOTEL IN SOUTH GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
                   scanf("%d",&n);
             if(n==1)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={1150,1050,1550,1700,5200};
                          float tota;
                          char *u[5]={"One room with galary          ","One room without galary         ","Two room with galary             ","Two room without galary             ","Family                 "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL DELIGHT  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL DELIGHT  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);
                         }
              if(n==2)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={800,900,700,800,1200};
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL NISARG  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"VEG P=KOLHAPURI       ","VEG  MARATHA        ","MATAR PANEER                        ","Chicken Kosa                      ","Chicken Kabab                           ","Chilli Chicken                     ","Mutton Kosa                  ","Salad               ","Soft Drinks              ","Sweets              "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL NISARG  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);
                        }
              if(n==3)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={1100,1000,1500,1700,5000};
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL TULIP  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL TULIP FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);
                          }
                            }
      else{printf("Oops choose the integer");}    }
if (a==3)
{//Loop three
      printf("\n\nFOR WHAT PURPOSE YOU ARE LOOKING FOR HOTEL IN CENTRAL GOA (PARTY=1,FOOD=2,LODGE=3)=");
      scanf("%d",&r);
     if(z==1) //party
             {printf("\n\nFOR WHAT TYPE OF HOTEL YOU LIKE FOR PARTY (FIVE STAR=1,THREE STAR=2,MID RANGE=3)=");
             scanf("%d",&t);
                if(t==1)//Five star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={4000,3500,5500,4700,5300};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL RELAX INN *** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int i,j,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL  RELAX INN *** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);
                         }
               if(t==2) //three star party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int k,r[5],t[]={1800,1900,2000,3200,3600};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL SULTAN*** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);

                          int i,j,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"pani puri       ","special pakodas    ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","papads       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL SULTAN*** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);
                          }
               if(t==3) //mid range party
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int k,r[5],t[]={500,600,520,900,800};
                          float tota,rent;
                          char *u[5]={"Birthday party       ","Family get together     ","Wedding     ","Marriage engagement       ","Dj party        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL SHIV *** \n\t\ \n");
                           printf("\n Booking of Halls\n\t you have to pay 30 percent of total rent");
                             printf(" \n\n\t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             rent=0.3*tota;
                             }
                             printf("\n\t Your Total booking amount for room is\t:\t  %f\n",rent);
                          int i,j,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot,fo;
                          char *s[10]={"VADA PAV       ","MISAL PAV      ","Sahi Paneer      ","DAL RICE       ","CHOLE KULCHE             ","MOMOS             ","Mutton Kosa           ","papads       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL SHIV*** \n\t\ \n");
                             printf("Decide items in food plate ");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t cost per plate is\t:\t  %f\n",tot);
                             printf("Enter the number of peoples=");
                             scanf("%d",&j);
                             fo=tot*j;
                             printf("\n \t ***Total expenditure is=%f",fo);
                            }}
      else if(z==2)       //food   DONE
      {   printf("\n\nFOR WHAT TYPE OF HOTEL IN CENTRAL GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
          scanf("%d",&u);
             if(u==1)       //five star food
                        { printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int i,o[10],p[]={40,60,55,85,95,90,130,25,20,10};
                         float tot;
                             char *s[10]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO HOTEL FRIENDSHIP INN*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                          }



              if(u==2)         //three star food
                         {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                          int i,o[15],p[]={40,40,120,130,110,20,300,220,120,60,55,85,95,90,130};
                         float tot;
                             char *s[15]={ "butter naan       ","rumal roti        ","papad     ","Salad       ","Soft Drinks          ","Sweets        ""Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO PARIVAR*** \n \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                           }

              if(u==3)     //mid range food
                      {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                       int i,o[15],p[]={40,40,120,130,110,20,300,220,120,60,55,85,95,90,130};
                         float tot;
                             char *s[15]={ "butter naan       ","rumal roti        ","papad     ","Salad       ","Soft Drinks          ","Sweets        ""Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab       ","Chilli Chicken             ","Mutton Kosa              ","Salad       ","Soft Drinks","Sweets        "};
                             printf("\t \n\n\t\t**WELCOME TO  HOTEL SPOTLIGHT*** \n \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }
                             printf("\n\t Your Total Billing amount is\t:\t  %f\n",tot);
                     } }
      else if(z==3)      //LODGING
                  {printf("\n\nFOR WHAT TYPE OF HOTEL IN CENTRAL GOA ARE SEARCHING FOR(FIVE STAR=1,THREE SATAR=2,MID RANGE=3)==");
                   scanf("%d",&v);
             if(v==1)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                         int k,r[5],t[]={1150,1050,1550,1750,5050};
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family        "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL PARADISE  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"JEERA RICE       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab          ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL PARADISE  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);

                         }
              if(v==2)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={300,350,450,600,800};
                          float tota;
                          char *u[5]={"One room with galary and bathroom      ","One room without galary  without bathroom             ","Two room with galary               ","Two room without galary             ","Family                "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL HEAVEN  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"PIZZA       ","UNLIMITED PLATE         ","BAHUBALI THALI          ","MIX VEG    ","TANDOORI ROTI            ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL HEAVEN  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);
                        }
              if(v==3)
                        {printf ("****HERE WE HAVE BEST RESULT FOR YOU AS CUSTMOUR REVIEWS ****");
                        int k,r[5],t[]={700,800,900,950,1500};
                          float tota;
                          char *u[5]={"One room with galary       ","One room without galary     ","Two room with galary     ","Two room without galary       ","Family            "};
                           printf("\t \n\n\t\t**WELCOME TO HOTEL CANDLEWOOD  LODGING*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                              for(k=0;k<5;k++)
                             {
                             printf(" %d. %s \t\t %d (Per days)\n",k+1,u[k],t[k]);
                             printf("\n  %d  \t   %s   \t\t   :\t",k+1,u[k]);
                             scanf("%d",&r[k]);
                             tota=tota+(r[k]*t[k]);
                             }
                             printf("\n\t Your Total Billing amount for room is\t:\t  %f\n",tota);

                          int i,o[10],p[]={120,150,160,180,150,230,130,230,210,10};
                          float tot;
                          char *s[10]={"UNLIMITED THALI           ","SIMPLE THALI        ","SPECIAL THALI       ","Chicken Kosa         ","Chicken Kabab                 ","Chilli Chicken            ","Mutton Kosa           ","Salad       ","Soft Drinks            ","Sweets        "};

                             printf("\t \n\n\t\t**WELCOME TO HOTEL CANDLEWOOD  FOOD*** \n\t\ \n");
                             printf(" \t ITEMS \t\t\t PRICE\n");
                             for(i=0;i<10;i++)
                             {
                             printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
                             printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
                             scanf("%d",&o[i]);
                             tot=tot+(o[i]*p[i]);
                             }

                             printf("\n\t Your Total Billing amount for food is\t:\t  %f\n",tot);

                          }
                            }
      else{printf("Oops choose the integer");}    }

if (a!=1 && a!=2 && a!=3 )
{printf("\nOops choose the correct integer");}
}
