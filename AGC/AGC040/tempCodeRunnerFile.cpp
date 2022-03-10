for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '>'){
            a[i-1] = max(a[i-1], a[i]+1);
        }
    }