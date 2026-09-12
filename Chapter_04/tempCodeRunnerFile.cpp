
    cin>>num;
    int a = 1;
    for(int i = 0 ; i < num ; i++){
        
        for(int j = 1+i ; j <= i+a ; j++){
            cout<<j<<" ";
        }
        a++;
        cout<<endl;
    }
    return 0;
}