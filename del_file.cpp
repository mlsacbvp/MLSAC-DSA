void del_file_30(int);

void del_file_30(int index)
{
    int i;
    for(i=index;i<n-1;i++)
        {
            filenm[i]=filenm[i+1];
        }
    n=n-1;
}