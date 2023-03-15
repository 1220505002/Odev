int Search(int D[], int N , int sayi)
{
int i = 0 ;  // 1 //
while (i<N) { // N+1 //
if (D[i] == sayi) break; // N //
i++;                    // N //
}
if (i<N) return i;    // 1 //
else return -1;      //  1  //
}
/*
T(n)= 3N+4

En iyi çalışma zamanı:İlk seferde istenen değeri bulduğumuz ve döngünün sadece bir kez çalıştığı durumdur.T(1)= 3*1+4= 7
En kötü çalışma zamanı:Son seferde istenen değeri bulduğumuz ve bu yüzden döngünün N defa çalıştığı durumdur.T(N)= 3*N+4 = 3N+4
Ortalama çalışma zamanı:N/2 defa döngünün çalıştığı zamandır.T(N/2)= 3*(N/2) + 4 = 3N/2 + 4
*/