#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    //inisialisasi dan deskripsi variabel
    char  *s, nama_siswa, *kunci_jawaban ;  
    int pilihan;
    int nilai_siswa = 0;

        void koreksi(){
            
            printf("     Koreksi = 1\n");
            printf("     Berhenti = 2\n");
            scanf("%d", &pilihan);
        
            switch (pilihan)
            {
            case 1:
            
                s = malloc(1024 * sizeof(char));
                printf("Masukan Jawaban Siswa :");
                scanf(" %[^\n]", s);
        
                
                for (int i = 0; i < strlen(s); i++)
                {
                    if (s[i] == kunci_jawaban[i] )
                    {

                        nilai_siswa = nilai_siswa +1;

                    }
                    else{

                        nilai_siswa = nilai_siswa + 0;
                        
                    }
                }
        
                /* menyetak nilai akhir siswa */
        
                printf("\033[92mNilai akhir siswa adalah : \033[96m%d \033[0m\n", nilai_siswa);
                printf("\033[91m--------------------------------------------------------\033[0m\n");
                nilai_siswa = 0;
                free(s);
                koreksi();
        
            case 2:
                break;
            }
        
        }
        
    kunci_jawaban = malloc(1024* sizeof(char));
    
    //input parameter
    printf("------------ *** KOREKSI JAWABAN SISWA *** ------------:\n");
    printf("\033[33m========================================================\033[0m\n");
    printf("Masukan Kunci Jawaban :");
    scanf("%[^\n]", kunci_jawaban);
    
    // eksekusi fungsi dan method
    koreksi();

    printf("\033[33m========================================================\033[0m\n");
    printf("\033[34m-------------------*** SAMPAI JUMPA ***-----------------\033[0m\n");
    printf("\033[33m========================================================\033[0m\n");
    
    return 0;
    }
   
