void create_priority(string name,int size1,string type)
{
    int i;
    int p=0;
    int total_size=0;
    if(size1>4096 || size1<0)
        cout<<"ERROR:File size is greater than 4GB"<<"\n";
    else
    {
         for(i=0;i<n1;i++){
            if(filenm_priority[i].name==name && filenm_priority[i].type==type){
                cout<<"\n"<<"ERROR: File with same Name and Type already exists, Please change the name or type!\n\n";
                p=1;
                break;
            }
        }
        for(i=0;i<n1;i++){
            total_size=total_size + filenm_priority[i].size1;
        }
        total_size=total_size + size1;

         if(p==0){
            n1++;
            filenm_priority[n1].name=name;
            filenm_priority[n1].size1=size1;
            filenm_priority[n1].s_addr=0;
            filenm_priority[n1].type=type;
         cout<<"\nFile Added in priority list!\n\n";
        }
    }
}
