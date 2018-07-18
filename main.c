#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COUNT 50

struct student
{
    char name[15];
    char phone[15];
    char ID[15];
    int tmp;
    char age[15];
    char input[15];
    int ag;
    //char *ptr;
};
typedef struct student student;

int main()
{
    char button,fg[COUNT],*pch,*delim=",",com[COUNT],wwg[COUNT],*wpch,www[COUNT];
    char *upch,ufg[COUNT],*dpch,dfg[COUNT],*spch,sfg[COUNT],*fpch,ffg[COUNT];
    int n=0,u,i=0,ii,d,o,j,k,z,zexist,b=0,h=0,uexist,iexist,gg;
    FILE *fp;
    student s[COUNT],cs[COUNT],ds[COUNT],us[COUNT],os[COUNT],f[COUNT],ww[COUNT];//,ag[COUNT];
    printf("Please input command(i/d/u/f/l/s/w/q) and data.\n");
    while(1)
    {
        z=0,u=0,ii=0,h=0,d=0,o=0,zexist=0,b=0,uexist=0,iexist=0;
        scanf("%c",&button);
        switch(button)
        {
        case 'i':
            fgets(fg,COUNT,stdin);
            //puts(fg);
            pch=strtok(fg,delim);
            while(pch!=NULL)
            {
                //printf("%s\n",pch);
                strcpy(f[ii].input,pch);
                pch=strtok(NULL,delim);
                ii++;
            }
            //for(i=0;i<u;i++) printf("%s\n",f[i].input);
            strcpy(s[n].ID,f[0].input);
            strcpy(s[n].name,f[1].input);
            strcpy(s[n].phone,f[2].input);
            strcpy(s[n].age,f[3].input);
            gg=atoi(s[n].age);//char age[15]
            //s[n].ag=gg;       //int ag[15]
            for(i=0; i<n; i++)
            {
                if(strcmp(s[i].ID,s[n].ID)==0)
                {
                    printf("Insert error! studentID is exists!\n");
                    iexist++;
                    n--;
                    break;
                }
            }
            if(iexist==0)
            {
                printf("%s,%s,%s,%s",s[n].ID,s[n].name,s[n].phone,s[n].age);
                printf("Insert success!\n");
            }
            n++;

            break;


        case 'l':
            for(i=0; i<n; i++)
            {
                printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }
            break;


        case 'q':
            return 0;


        case 'f':
            fgets(ffg,COUNT,stdin);
            fpch=strtok(ffg,delim);
            while(fpch!=NULL)
            {
                //printf("%s\n",fpch);
                strcpy(cs[h].input,fpch);
                fpch=strtok(NULL,delim);
                h++;
            }
            //想問為甚麼用指標會產生位初始化的錯誤, 指標如何初始化
            sscanf(cs[0].input,"%[0-9a-z]",com);
            //strncpy(ccs[0].input,cs[0].input,strlen((cs[0].input)-3));
            //printf("%s\n",com);
            //printf("%s\n",ccs[0].input);
            for(i=0; i<n; i++)
            {
                if(strstr(s[i].ID,com)!=NULL)
                {
                    //if((s[h].ptr)!=NULL)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
                }
                else if(strstr(s[i].name,com)!=NULL)
                {
                    //if((s[h].ptr)!=NULL)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
                }
                else if(strstr(s[i].phone,com)!=NULL)
                {
                    //if((s[h].ptr)!=NULL)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
                }
            }
            break;


        case 'd':
            fgets(dfg,COUNT,stdin);
            dpch=strtok(dfg,delim);
            while(dpch!=NULL)
            {
                //printf("%s\n",dpch);
                strcpy(ds[d].input,dpch);
                dpch=strtok(NULL,delim);
                d++;
            }
            //printf("%s\n",ds[0].input);
            for(i=0; i<n; i++)
            {
                if(strncmp(s[i].ID,ds[0].input,strlen(s[i].ID))==0)
                {
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
                    for(k=i+1; k<=n-1; k++)
                    {
                        strcpy((s[k-1].ID),s[k].ID);
                        strcpy((s[k-1].name),s[k].name);
                        strcpy((s[k-1].phone),s[k].phone);
                        strcpy((s[k-1].age),s[k].age);
                    }
                    zexist++;
                    z++;//toatal times
                }
            }
            if(zexist==0)
            {
                printf("Delete error! studentID not exists!\n");
            }
            else printf("Success delet!\n");
            if(z!=0) n=n-1;
            break;


        case 'u':
            fgets(ufg,COUNT,stdin);
            upch=strtok(ufg,delim);
            while(upch!=NULL)
            {
                //printf("%s\n",upch);
                strcpy(us[u].input,upch);
                upch=strtok(NULL,delim);
                u++;
            }
            for(i=0; i<n; i++)
            {
                if(strcmp(s[i].ID,us[0].input)==0)
                {
                    printf("%s,%s,%s,%s\n",us[1].input,us[2].input,us[3].input,us[4].input);
                    strcpy((s[i].ID),us[1].input);
                    strcpy((s[i].name),us[2].input);
                    strcpy((s[i].phone),us[3].input);
                    strcpy((s[i].age),us[4].input);
                    uexist++;
                }
            }
            if(uexist==0)
                printf("Update error! studentID not exists!\n");
            break;


        case 's':
            fgets(sfg,COUNT,stdin);
            spch=strtok(sfg,delim);
            while(spch!=NULL)
            {
                //printf("%s\n",upch);
                strcpy(os[o].input,spch);
                spch=strtok(NULL,delim);
                o++;
            }
            if(strlen(os[h].input)==10) b=1;// +\n
            else if(strlen(os[h].input)==5) b=2;
            else if(strlen(os[h].input)==6) b=3;
            else if(strlen(os[h].input)==4) b=4;
            struct student tmp;
            if(b==1)
            {
                for(i=0; i<n-1; i++)
                {
                    for(j=i; j<n; j++)
                    {
                        if(strcmp(s[i].ID,s[j].ID)>0)
                        {
                            tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                        }
                    }
                }
                for(i=0; i<n; i++)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }

            else if(b==2)
            {
                for(i=0; i<n-1; i++)
                {
                    for(j=i; j<n; j++)
                    {
                        if(strcmp(s[i].name,s[j].name)>0)
                        {
                            tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                        }
                    }
                }
                for(i=0; i<n; i++)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }

            else if(b==3)
            {
                for(i=0; i<n-1; i++)
                {
                    for(j=i; j<n; j++)
                    {
                        if(strcmp(s[i].phone,s[j].phone)>0)
                        {
                            tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                        }
                    }
                }
                for(i=0; i<n; i++)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }
            else if(b==4)
            {
                /*for(i=0; i<n-1; i++)
                {
                    for(j=i; j<n; j++)
                    {
                        if(strcmp(s[i].age,s[j].age)>0)
                        {
                            tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                        }
                    }
                }*/
                /*for(i=0; i<n; i++)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);*/
                for(i=0; i<n-1; i++)
                {
                    for(j=i; j<n; j++)
                    {
                        //if(strcmp(s[i].age,s[j].age)>0)
                        if(strlen(s[i].age)>strlen(s[j].age))
                        {
                            tmp=s[i];
                            s[i]=s[j];
                            s[j]=tmp;
                        }
                        else if(strlen(s[i].age)==strlen(s[j].age))
                        {
                            if(strcmp(s[i].age,s[j].age)>0)
                            {
                                tmp=s[i];
                                s[i]=s[j];
                                s[j]=tmp;
                            }
                        }
                    }
                }
                for(i=0; i<n; i++)
                    printf("%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }

            break;



        case 'w':
            fgets(wwg,COUNT,stdin);
            wpch=strtok(wwg,delim);
            ii=0;
            while(wpch!=NULL)
            {
                strcpy(ww[ii].input,wpch);
                wpch=strtok(NULL,delim);
                ii++;
            }
            printf("%s\n",ww[0].input);
            sscanf(ww[0].input,"%[0-9.a-z]",www);
            fp=fopen(www,"w+t");
            if(fp==NULL)
                break;
            //fwrite(s,sizeof(s),n,fp);
            for(i=0; i<n; i++)
            {
                fprintf(fp,"%s,%s,%s,%s\n",s[i].ID,s[i].name,s[i].phone,s[i].age);
            }
            printf("Writing file successful!\n");
            fclose(fp);
            break;
            //printf("Please input command:\n");
        }
    }
    //system("cls");//delet¤å¦r
    return 0;
}
