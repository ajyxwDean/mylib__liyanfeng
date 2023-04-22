#include <bits/stdc++.h>

using namespace std;
//A=65 a=97 '1'=49 

bool fd(string a,char b){
    for(int i = 0 ; i < a.size();i++){
        if(a[i] = b){
            return true;
        }
    }
    return false;
}

int j = 0;

int main(){
    string password;
    cin >> password;
    if(password.size() <= 16 && password.size() >= 8){
        for(int i = 65,j = 97; i <= 65+26 && j < 97+26; i++,j++){
            if(fd(password,i) || fd(password,j)){
                        printf("YES");
                        return 0;
            }else{
                for(int k = 48 ; k <= 58 ; k++){
                      if(fd(password,k)){
                        printf("YES");
                        return 0;
                    }else{
                        for(int h = 0 ; h < password.size() ; h++){
                            for(int a=65,b=97,c=48 ; a <= 65+26&&b<=97+26&&c<=48+10 ; a++,b++,c++){
                                if(password[h] != a && password[h] != b && password[h] != c){
                                    printf("YES");
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
            }else{
                for(int j = 97 ; j <= 97+26 ; j++){
                    if(fd(password,j)){
                        for(int k = 49 ; k <= 59 ; k++){
                            if(fd(password,k)){
                                printf("YES");
                                return 0;
                            }else{
                                printf("NO");
                            }
                        }
                    }else{
                        printf("NO");
                        return 0;
                    }
                }
            }
        }
    }
    else{
        printf("NO");
    }
    return 0;
}
//200ms 64M
