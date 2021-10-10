void defragment()
{
    filenm[0].s_addr=0;
    for(int k=1;<n;k++)
    {
        filenm[k].s_addr=filenm[k-1].s_addr + filenm[k-1].size1;
    }
    disp();

    cout<<"\n"<<"Defragmentation completed."<<"\n";
}
void search_file(string name)
{
    int r;
    int l=0;
    cout<<"\n"<<"Searching in progress..."<<"\n";
    for(r=0;r<n;r++)
    {
        if(filenm[r].name==name)
        {
            l=1;
            cout<<" "<<filenm[r].name<<" "<<"     "<<" "<<filenm[r].s_addr<<" "<<"     "<<" "<<filenm[r].size1<<" "<<"     "<<" "<<filenm[r].type<<" "<<"    "<<filenm[r].file_time<<"\n"<<"\n";


        }
    }
    if(l==0)
        cout<<"\n"<<"File Not Found"<<"\n";
}
