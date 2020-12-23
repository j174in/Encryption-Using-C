/* Made by defaultRecTr0
 * This program is made with simple c
 * for encryption and decryption using the same algorithm
 * encryption method adds 1 to each characters ASCII value
 * Further development is needed 
 * Usage- From terminal gcc the program by providing the path of the file or from the file folder
 */

#include<stdio.h>
#include<string.h>//for string fuctions
#include<stdlib.h>//for exit

    //encryption function
    void encryption(char encrypt[]){
        for(int i =0;i<strlen(encrypt);i++){
            encrypt[i]= encrypt[i]+1;
        }
        printf("\nThe encrypted word:\n");
        puts(encrypt);
    }


    //decryption function
    void decryption(char decrypt[]){
        for(int i =0;i<strlen(decrypt);i++){
        decrypt[i]=decrypt[i]-1;
        }
        printf("\nThe decrypted word :\n");
        puts(decrypt);
    }


 int main()
    {
        //development needed to put this in loop, lots of error because of newline character catching by scanf
        char str[50];
        int n,c;
        printf("Enter the word:\n\n");
        scanf("%[^\n]s",str);//gets fuction making error so using scanf including spaces
        printf("\n\n\nEnter the choice\n\n1.Encryption\n\n2.Decryption\n\n3.Exit the program\n\nEnter whether 1/2/3\n\n");
        scanf("%*c%d",&n);
                switch(n)
                {
                    case 1 :
                    //function call
                            encryption(str);        
                            break;
                    case 2 :
                    //function call
                            decryption(str);        
                        break;
                    case 3 :
                    //exit
                            printf("Exiting..\n\n");
                            exit(0);
                            break;

                    default:
                        printf(".....Wrong choice.....\n");
                        break;
                }
        return 0;
    }
//efgbvmuSfdUs1 :))
//Happy Coding......