void disp()
{
    cout<<"\n";
    cout<<"                            Displaying Application File                         "<<"\n";
    cout<<"\n"<<"  NAME  "<<"     "<<"  S_ADDR  "<<"     "<<"  SIZE  "<<"     "<<"  TYPE  "<<"     "<<"  TIMESTAMP  "<<"\n";

   for(int r=0;r<n;r++)
    {
       cout<<"   "<<filenm[r].name<<"    "<<filenm[r].s_addr<<"    "<<filenm[r].size1<<"    "<<filenm[r].type<<"    "<<filenm[r].file_time<<"\n";

    }
    cout<<"\n";

}


int get_month(string month)
{
    int m;

    if(month=="January")
        m=1;
    if(month=="February")
        m=2;
    if(month=="March")
        m=3;
    if(month=="April")
        m=4;
    if(month=="May")
        m=5;
    if(month=="June")
        m=6;
    if(month=="July")
        m=7;
    if(month=="August")
        m=8;
    if(month=="September")
        m=9;
    if(month=="October")
        m=10;
    if(month=="November")
        m=11;
    if(month=="December")
        m=12;
    else
    cout<<"Invalid";

    return m;
}

