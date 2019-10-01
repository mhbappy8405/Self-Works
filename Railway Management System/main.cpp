#include <iostream>
#include<cstring>
#include<iomanip>
#include<fstream>
#include<stdlib.h>
#include<fstream>
using namespace std;

string stations[]={"AKHAURA", "ASHUGANJ", "AZAMPUR", "BHAIRAB BAZAR", "BRAHMANBARIA", "BAJITPUR", "BHANUGACH", "BHUIYAPUR",
 "B.B.SHETU EAST","BIMAN BANDAR", "COMILLA", "CHATTOGRAM", "CHANDPUR", "DEWANGANJ", "DHAKA", "FENI", "GOCHIHATA", "GAFARGAON",
  "HOROSHPUR", "HASANPUR", "HAJIGANJ", "ISLAMPUR BAZAR", "JAMALPUR TOWN", "JOYDEBPUR", "KULIARCHAR", "KISHOREGANJ", "KULAURA",
   "LAKSAM", "MANIK KHALI", "MYMENSINGH", "MONTOLA", "MELANDOHOBAZAR", "MUKUNDUPUR", "MODHU ROAD", "MAIJGAON", "NARSHINGDI", "NOYAPARA",
    "NONDINA", "NANGOLKOT", "NATHER PETUA", "NOAKHALI", "PIARPUR", "QOSBA", "TARAKANDI", "SHORARCHAR", "SHAHJIBAZAR", "SHAISTAGANJ",
     "SHRIMANGAL" ,"SHAMSHERNAGAR", "SYLHET"};

int arr[430][3]={ {14, 23, 45}, {14, 35, 60}, {14, 3, 85}, {14, 17, 85}, {14, 24, 100}, {14, 5, 105}, {14, 44, 105}, {14, 1, 110},
    {14, 28, 115}, {14, 29, 120}, {14, 16, 120}, {14, 4, 120}, {14, 25, 125},{14, 0, 135}, {14, 2, 135}, {14, 41, 140}, {14, 32, 145},
    {14, 42, 145}, {14, 18, 150}, {14, 37, 150}, {14, 30, 155}, {14, 22, 160}, {14, 36, 165}, {14, 31, 170}, {14, 10, 170}, {14, 45, 170},
    {14, 46, 180}, {14, 21, 180}, {14, 43, 185}, {14, 13, 185}, {14, 47, 200}, {14, 27, 190}, {14, 38, 200}, {14, 19, 205}, {14, 6, 210},
    {14, 8, 220}, {14, 15, 220}, {14, 48, 220}, {14, 40, 225},{14, 26, 230}, {14, 49, 265}, {14, 11, 285}, {35, 3, 45}, {35, 1, 60},
    {35, 4, 70}, {35, 0, 85}, {35, 42, 100}, {35, 10, 125}, {35, 27, 145}, {35, 40, 185}, {35, 38, 155}, {35, 19, 160}, {35, 15, 175},
    {35, 11, 245}, {3, 1, 45}, {3 ,4, 45}, {3, 2, 60}, {3, 32, 70}, {3, 18, 80}, {3, 30, 85}, {3, 36, 95}, {3, 45, 105}, {3, 46, 110},
    {3, 47, 135}, {3, 6, 145}, {3, 48, 150}, {3, 26, 165}, {3, 49, 205}, {3, 0, 60}, {3, 42, 75}, {3, 10, 105}, {3, 38, 135}, {3, 19, 135},
    {3, 15, 155}, {3, 27, 125}, {3, 11, 225}, {3, 40, 160}, {1, 4, 45}, {1, 2, 45}, {1, 32, 45}, {1, 18, 55}, {1, 30, 60}, {1, 36, 75},
    {1, 45, 80}, {1, 46, 90}, {1, 47, 115}, {1, 6, 125}, {1, 48, 135}, {1, 26, 145}, {1, 49, 185}, {1, 0, 45}, {1, 42, 50}, {1, 10, 80},
    {1, 27, 105}, {1, 38, 115}, {1, 19, 115}, {1, 15, 135}, {1, 11, 205}, {1, 40, 140}, {4, 2, 45}, {4, 32, 45}, {4, 18, 45}, {4, 30, 45},
    {4, 36, 60}, {4, 45, 65}, {4, 46, 75}, {4, 47, 105}, {4, 6, 110}, {4, 48, 120}, {4, 26, 135}, {4, 49, 175}, {4, 0, 45}, {4, 42, 45},
    {4, 10, 65}, {4, 27, 90}, {4, 38, 100}, {4, 19, 105}, {4, 15, 125}, {4, 11, 195}, {4, 12, 130}, {4, 40, 130}, {0, 42, 45}, {0, 10, 50},
    {0, 27, 75}, {0, 38, 85}, {0, 19, 90}, {0, 15, 110}, {0, 11, 180}, {0, 4, 45}, {0, 1, 45}, {0, 3, 60}, {0, 35, 85}, {0, 14, 135},
    {0, 2, 45}, {0, 32, 45}, {0, 18, 45}, {0, 30, 45}, {0, 36, 45}, {0, 45, 50}, {0, 46, 60}, {0, 47, 90}, {0, 6, 100}, {0, 48, 105},
    {0, 26, 125}, {49, 26, 50}, {49, 48, 70}, {49, 6, 80}, {49, 47, 90}, {49, 46, 115}, {49, 45, 125}, {49, 36, 130}, {49, 30, 140},
    {49, 18, 145}, {49, 32, 150}, {49, 2, 160}, {49, 0, 160}, {49, 4, 175}, {49, 1, 185}, {49, 3, 205}, {49, 14, 265}, {26, 6, 45},
    {26, 47, 45}, {26, 46, 45}, {26, 45, 70}, {26, 36, 80}, {26, 30, 90}, {26, 18, 100}, {26, 32, 110}, {26, 2, 120}, {26, 4, 135},
    {26, 1, 145}, {26, 3, 165}, {26, 14, 230}, {47, 46, 45}, {47, 45, 45}, {47, 36, 50}, {47, 30, 65}, {47, 18, 70}, {47, 32, 75},
    {47, 2, 85}, {47, 4, 105}, {47, 1, 115}, {47, 3, 135}, {47, 14, 200}, {46, 45, 45}, {46, 36, 45}, {46, 30, 45}, {46, 18, 45},
    {46, 32, 45}, {46, 2, 55}, {46, 4, 75}, {46, 1, 90}, {46, 3, 110}, {46, 14, 180}, {2, 3, 45}, {2, 1, 45}, {2, 4, 45}, {2, 0, 45},
    {2, 32, 45}, {2, 18, 45}, {2, 30, 45}, {2, 36, 45}, {2, 45, 45}, {2, 46, 50}, {2, 47, 85}, {2, 6, 95}, {2, 48, 100}, {2, 26, 100},
    {2, 49, 100}, {11, 15, 90}, {11, 19, 110}, {11, 38, 115}, {11, 27, 125}, {11, 10, 145}, {11, 42, 170}, {11, 0, 180}, {11, 4, 195},
    {11, 3, 225}, {11, 35, 245}, {11, 14, 285}, {11, 12, 165}, {11, 18, 205}, {11, 36, 215}, {11, 46, 225}, {11, 47, 250}, {11, 48, 260},
    {11, 26, 280}, {11, 49, 315}, {15, 19, 45}, {15, 38, 45}, {15, 27, 45}, {15, 10, 65}, {15, 42, 95}, {15, 0, 110}, {15, 4, 125},
    {15, 1, 135}, {15, 3, 155}, {15, 35, 175}, {15, 14, 220}, {15, 12, 90},{15, 18, 130}, {15, 36, 140}, {15, 46, 155}, {15, 47, 180},
    {15, 48, 195}, {15, 26, 210}, {15, 49, 245}, {19, 38, 45}, {19, 27, 45}, {19, 10, 45}, {19, 12, 70}, {19, 42, 75}, {19, 0, 90},
    {19, 4, 105}, {19, 18, 115}, {19, 36, 125}, {19, 3, 135}, {19, 46, 135}, {19, 35, 160}, {19, 47, 160}, {19, 48, 175}, {19, 26, 195},
    {19, 14, 205}, {19, 49, 230}, {38, 27, 45}, {38, 10, 45},{38, 12, 65}, {38, 42, 70}, {38, 0, 85}, {38, 4, 100}, {38, 18, 110},
    {38, 36, 120}, {38, 3, 130}, {38, 46, 135}, {38, 35, 155}, {38, 47, 160}, {38, 48, 175}, {38, 26, 190}, {38, 14, 200}, {38, 49, 225},
    {27, 38, 45}, {27, 19, 45}, {27, 10, 45}, {27, 12, 50}, {27, 42, 55}, {27, 0, 75}, {27, 4, 85}, {27, 18, 100}, {27, 36, 110},
    {27, 46, 125}, {27, 47, 150}, {27, 48, 165},{27, 26, 180}, {27, 49, 215}, {10, 42, 45}, {10, 1, 50}, {10, 4, 65}, {10, 40, 75},
    {10, 1, 80}, {10, 3, 105}, {10, 35, 125}, {10, 14, 170}, {23, 17, 55}, {23, 29, 90}, {23, 41, 115},{23, 37, 125}, {23, 22, 135},
    {23, 31, 145}, {23, 21, 155}, {23, 43, 160}, {23, 13, 160}, {23, 8, 190}, {17, 29, 45}, {17, 41, 55}, {17, 37, 85}, {17, 22, 95},
    {17, 31, 105}, {17, 21, 115},{17, 43, 115}, {17, 13, 120}, {17, 8, 150}, {29, 41, 45}, {29, 37, 45}, {29, 22, 55}, {29, 31, 65},
    {29, 21, 80}, {29, 43, 80}, {29, 13, 90}, {29, 8, 125},{22, 31, 45}, {22, 21, 45}, {22, 43, 45}, {22, 13, 45}, {22, 8, 75},
    {13, 17, 120}, {13, 29, 90}, {13, 41, 65}, {13, 37, 45}, {13, 22, 45}, {13, 31, 45}, {13, 21, 45}, {8, 43, 45}, {8, 37, 85},
    {8, 41, 100}, {12, 11, 165}, {12, 15, 90}, {12, 19, 70}, {12, 38, 65}, {12, 27, 55}, {25, 14, 125}, {25, 35, 80}, {25, 3, 50},
    {25, 24, 45}, {25, 5, 45}, {25, 44, 45}, {25, 28, 45}, {25, 16, 45}, {21, 41, 50}, {21, 37, 45}, {31, 41, 45}, {31, 37, 45},
    {48, 32, 90}, {48, 18, 85}, {48, 30, 80}, {48, 36, 70}, {48, 45, 60}, {48, 6, 45}, {6, 32, 90}, {6, 18, 80}, {6, 30, 75},
    {6, 36, 65}, {6, 45, 55}, {36, 32, 45}, {36, 18, 45}, {36, 30, 45}, {36, 45, 45}, {24, 5, 45}, {24, 44, 45}, {24, 28, 45},
    {24, 16, 45}, {5, 44, 45}, {5, 28, 45}, {5, 16, 45}, {44, 28, 45}, {44, 16, 45}, {34, 26, 50}, {34, 48, 70}, {34, 6, 80},
    {34, 47, 90}, {34, 46, 115}, {34, 45, 125}, {34, 36, 130}, {34, 30, 140}, {34, 18, 145}, {34, 32, 150}, {34, 2, 160}, {34, 0, 160},
    {34, 4, 175}, {34, 1, 185}, {34, 3, 205}, {14, 34, 265}, {3, 34, 205}, {1, 34, 185}, {27, 34, 215}, {10, 34, 205}, {38, 34, 225}, {19, 34, 230},
 {15, 34, 245}, {11, 34, 315}, {10, 49, 205}, {10, 26, 185}, {10, 48, 155}, {10, 47, 140}, {10, 46, 105}, {10, 36, 95}, {10, 18, 85} };

 string TRAINAME[40]={"SUBARNA EXPRESS", "SUBARNA EXPRESS", "MOHANAGAR GODHULI", "MOHANAGAR PROVATI", "TISTA EXPRESS", "TISTA EXPRESS",
 "PARABOT EXPRESS", "PARABOT EXPRESS", "UPAKUL EXPRESS", "UPAKUL EXPRESS", "JOYENTEEKA EXPRESS", "JOYENTEEKA EXPRESS", "KALANI EXPRESS",
  "KALANI EXPRESS", "UPABAN EXPRESS", "UPABAN EXPRESS", "PAHARIKA EXPRESS", "PAHARIKA EXPRESS", "UDDAYAN EXPRESS", "UDDAYAN EXPRESS",
  "KISHOREGANJ EXPRESS", "EGAROSINDUR GODHULI", "KISHOREGANJ EXPRESS", "EGAROSINDUR PROVATI", "SONAR BANGLA EXPRESS", "SONAR BANGLA EXPRESS", "TURNA EXPRESS", "TURNA EXPRESS",
  "MOHANAGAR EXPRESS", "MOHANAGAR EXPRESS", "MEGHNA EXPRESS", "MEGHNA EXPRESS", "BIJOY EXPRESS", "BIJOY EXPRESS", "AGNIBINA EXPRESS", "AGNIBINA EXPRESS",
  "JAMUNA EXPRESS", "JAMUNA EXPRESS", "BHARAMAPUTRA EXPRESS", "BHARAMAPUTRA EXPRESS"};

 class SNIGDHA
{
public:
    string name="KA";
    int available=55;
    int booked=0;
    int seatsavail[55]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55};
    int seatbooked[55];
    void display()
    {
        int i=0;

        while(i<52)
        {
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<"\t";
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<endl;

        }
        cout<<seatsavail[i++]<<" ";
        cout<<seatsavail[i++]<<" ";
        cout<<"\t   ";
        cout<<seatsavail[i];
    }
};
class SHOVON
{
    public:
    string name[2]={"DHA", "NO"};
    int available=60;
    int booked=0;
    int seatsavail[60]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    int seatbooked[60];
    void display()
    {
        int i=0;

        while(i<60)
        {
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<"\t";
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<endl;

        }
    }
};
class SH_CHAIR
{
    public:
    string name[10]={"GHA", "UMO", "CCA", "CHA", "JO", "JHA", "NIO", "TTO", "THA", "DA"};
    int available=55;
    int booked=0;
    int seatsavail[55]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55};
    int seatbooked[55];
    void display()
    {
        int i=0;

        while(i<52)
        {
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<"\t";
            cout<<seatsavail[i++]<<" ";
            cout<<seatsavail[i++]<<" ";
            cout<<endl;

        }
        cout<<seatsavail[i++]<<" ";
        cout<<seatsavail[i++]<<" ";
        cout<<"\t   ";
        cout<<seatsavail[i];
    }

};
class AC_SEAT
{
    public:
    string name="KHA";
    int available=33;
    int booked=0;
    int seatsavail[33]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    int seatbooked[33];
    void display()
    {
        int i=0;

        while(i<33)
        {
            cout<<seatsavail[i++]<<"    ";
            cout<<seatsavail[i++]<<"    ";
            cout<<seatsavail[i++]<<"    ";
            cout<<endl;

        }

    }
};
class FIRST_CLASS
{
    public:
    string name="GA";
    int available=33;
    int booked=0;
    int seatsavail[33]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    int seatbooked[33];
    void display()
    {
        int i=0;

        while(i<33)
        {
            cout<<seatsavail[i++]<<"    ";
            cout<<seatsavail[i++]<<"    ";
            cout<<seatsavail[i++]<<"    ";

            cout<<endl;

        }

    }

};
float GET_FARE(int from, int to, int q, int cls)
{
    int i;
    float amt;
    for(i=0; i<430; i++)
    {
        if((arr[i][0]==from || arr[i][1]==from) && (arr[i][0]==to || arr[i][1]==to) )
        {
           //cout<<"\nFARE :"<<arr[i][2]<<" BDT"<<endl;
           switch(cls)
           {
           case 1:
               amt=arr[i][2]*q;
               break;
           case 2:
               amt=((arr[i][2]*.2)+arr[i][2])*q;
               break;
           case 3:
               amt=((arr[i][2]*2)*.15+arr[i][2]*2)*q;
               break;
           case 4:
               amt=((arr[i][2]*.6)+arr[i][2])*q;
               break;
           case 5:
               amt=((arr[i][2]*2.4)*.15+arr[i][2]*2.4)*q;
               break;


           }
           break;
        }
    }
    return amt;
}
void SaveInfo(char name[], char ID[], int from, int to, int tn, int dd, int mm, int yy, float fare, int sn[], int q)
{
    fstream mystream;
    int i;
    mystream.open("PASSENGER INFO.txt", ios::app);

    mystream<<"\n\nPASSENGER NAME : "<<name<<endl;
    mystream<<"PASSENGER NID    : "<<ID<<endl;
    mystream<<"TRAIN NAME   : "<<TRAINAME[tn]<<endl;
    mystream<<"FROM STATION : "<<stations[from]<<endl;
    mystream<<"TO STATION   : "<<stations[to]<<endl;
    mystream<<"JOURNEY DATE : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
    mystream<<"TOTAL FARE   : "<<fare<<" BDT"<<endl;
    mystream<<"SEAT NUMBER  : ";
    //mystream<<comp;
    for(i=0; i<q; i++)
        mystream<<"-"<<sn[i];
    mystream.close();

}
class DaySeatCap
{
public:
    string DAYNAME;
    int dd, mm, yy;
    SHOVON A[2];
    SH_CHAIR B[10];
    SNIGDHA C;
    AC_SEAT D;
    FIRST_CLASS E;

    int shovon_counter=120;
    int sh_chair_counter=550;
    void booking(int tn, int from, int to, int dd, int mm, int yy)
    {
        int choice, choice2, com_no;
        float fare;
        string name;
        cout<<"\nSELECT CLASS:\n\t1. SHOVON\n\t2. SHOVON CHAIR\n\t3. SNIGDHA\n\t4. FIRST CLASS\n\t5. AC SEAT\nENTER CHOICE: ";
        cin>>choice;
        int q, sn, i, j=0;
        int x;
        cout<<"\n   QUANTITY OF SEATS(MAX 4) :";
        cin>>q;
        int seatsno[q];
        switch(choice)
        {
        case 1:
            fare=GET_FARE(from, to, q, 1);
            cout<<"\nTOTAL FARE: "<<fare<<" BDT\n\t1. BUY\n\t2. CANCEL\nCHOICE:";
            cin>>choice2;
            if(choice2==1)
            {
            shovon_counter-=q;
            com_no=shovon_counter/60;
            com_no--;
            name=A[com_no].name[com_no];
            while(j<q)
            {
                system("CLS");
                Y:
                A[com_no].display();
                cout<<"\nENTER SEAT NO.";
                cin>>x;
                for(i=0; i<A[com_no].booked; i++)
                {
                    if(A[com_no].seatbooked[i]==x)
                    {
                        cout<<"THIS SEAT IS NOT AVAILAVLE!"<<endl;
                        goto Y;
                    }
                }
                A[com_no].seatbooked[A[com_no].booked]=x;
                seatsno[j]=A[com_no].seatbooked[A[com_no].booked];
                for(i=0; i<60; i++)
                {
                     if(A[com_no].seatsavail[i]==A[com_no].seatbooked[A[com_no].booked])
                     {
                         A[com_no].seatsavail[i]=0;
                         A[com_no].available--;
                     }
                }
                A[com_no].booked++;
                j++;

            }
            }
            else
                return;
            break;
        case 2:
            fare=GET_FARE(from, to, q, 2);
            cout<<"\nTOTAL FARE: "<<fare<<" BDT\n\t1. BUY\n\t2. CANCEL\nCHOICE:";
            cin>>choice2;
            if(choice2==1)
            {
            sh_chair_counter-=q;
            com_no=sh_chair_counter/55;
            com_no--;
            name=B[com_no].name[com_no];
            while(j<q)
            {
                system("CLS");
                Z:
                B[com_no].display();
                cout<<"\nENTER SEAT NO.";
                cin>>x;
                for(i=0; i<B[com_no].booked; i++)
                {
                    if(B[com_no].seatbooked[i]==x)
                    {
                        cout<<"THIS SEAT IS NOT AVAILAVLE!"<<endl;
                        goto Z;
                    }
                }
                B[com_no].seatbooked[B[com_no].booked]=x;
                seatsno[j]=B[com_no].seatbooked[B[com_no].booked];
                for(i=0; i<55; i++)
                {
                     if(B[com_no].seatsavail[i]==B[com_no].seatbooked[B[com_no].booked])
                     {
                         B[com_no].seatsavail[i]=0;
                         B[com_no].available--;
                     }
                }
                B[com_no].booked++;
                j++;

            }
            }
            else
                return;
            break;
        case 3:
            fare=GET_FARE(from, to, q, 3);
            cout<<"\nTOTAL FARE: "<<fare<<" BDT\n\t1. BUY\n\t2. CANCEL\nCHOICE:";
            cin>>choice2;
            if(choice2==1)
            {
            name=C.name;
            while(j<q)
            {
                system("CLS");

                if(C.available<q)
                {
                    cout<<"THAT QUANTITY SEAT NOT AVAILABLE!!!!!!!"<<endl;
                    return;
                }
                P:
                C.display();
                cout<<"\nENTER SEAT NO.";
                cin>>x;
                for(i=0; i<C.booked; i++)
                {
                    if(C.seatbooked[i]==x)
                    {
                        cout<<"THIS SEAT IS NOT AVAILAVLE!"<<endl;
                        goto P;
                    }
                }
                C.seatbooked[C.booked]=x;
                seatsno[j]=C.seatbooked[C.booked];
                for(i=0; i<55; i++)
                {
                     if(C.seatsavail[i]==C.seatbooked[C.booked])
                     {
                         C.seatsavail[i]=0;
                         C.available--;
                     }
                }
                C.booked++;
                j++;

            }
            }
            else
                return;
            break;
        case 4:
            fare=GET_FARE(from, to, q, 4);
            cout<<"\nTOTAL FARE: "<<fare<<" BDT\n\t1. BUY\n\t2. CANCEL\nCHOICE:";
            cin>>choice2;
            if(choice2==1)
            {
            name=D.name;
            while(j<q)
            {
                system("CLS");
                if(D.available<q)
                {
                    cout<<"THAT QUANTITY SEAT NOT AVAILABLE!!!!!!!"<<endl;
                    return;
                }
                Q:
                D.display();
                cout<<"\nENTER SEAT NO.";
                cin>>x;
                for(i=0; i<D.booked; i++)
                {
                    if(D.seatbooked[i]==x)
                    {
                        cout<<"THIS SEAT IS NOT AVAILAVLE!"<<endl;
                        goto Q;
                    }
                }
                D.seatbooked[D.booked]=x;
                seatsno[j]=D.seatbooked[D.booked];
                for(i=0; i<33; i++)
                {
                     if(D.seatsavail[i]==D.seatbooked[D.booked])
                     {
                         D.seatsavail[i]=0;
                         D.available--;
                     }
                }
                D.booked++;
                j++;

            }
            }
            else
                return;
            break;
        case 5:
            fare=GET_FARE(from, to, q, 5);
            cout<<"\nTOTAL FARE: "<<fare<<" BDT\n\t1. BUY\n\t2. CANCEL\nCHOICE:";
            cin>>choice2;
            if(choice2==1)
            {
            name=E.name;
            while(j<q)
            {
                system("CLS");
                if(E.available<q)
                {
                    cout<<"THAT QUANTITY SEAT NOT AVAILABLE!!!!!!!"<<endl;
                    return;
                }
                R:
                E.display();

                cout<<"\nENTER SEAT NO.";
                cin>>x;
                for(i=0; i<E.booked; i++)
                {
                    if(E.seatbooked[i]==x)
                    {
                        cout<<"THIS SEAT IS NOT AVAILAVLE!"<<endl;
                        goto Y;
                    }
                }
                E.seatbooked[E.booked]=x;
                seatsno[j]=E.seatbooked[E.booked];
                for(i=0; i<33; i++)
                {
                     if(E.seatsavail[i]==E.seatbooked[E.booked])
                     {
                         E.seatsavail[i]=0;
                         E.available--;
                     }
                }
                E.booked++;
                j++;

            }
            }
            else
                return;
            break;


        }
        cin.ignore();
        char p_Name[30];
        char p_NID[15];
        cout<<"PASSENGER NAME: ";
        cin.get(p_Name, 30);
        cin.ignore();
        cout<<"PASSENGER NID NO. : ";
        cin.get(p_NID, 15);
        cin.ignore();
        system("CLS");
        cout<<"\t\t\t\TICKET BUYING COMPLETE!!!!!!!\n\n\n\tTICKET INFORMATIONS:\n-------------------------------------"<<endl;
        cout<<"TRAIN NAME   : "<<TRAINAME[tn]<<endl;
        cout<<"FROM STATION : "<<stations[from]<<endl;
        cout<<"TO STATION   : "<<stations[to]<<endl;
        cout<<"JOURNEY DATE : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
        cout<<"TOTAL FARE   : "<<fare<<" BDT"<<endl;
        cout<<"SEAT NUMBER  : ";
        cout<<name;
        for(i=0; i<q; i++)
            cout<<"-"<<seatsno[i];
        cout<<"\nPASSENGER NAME : "<<p_Name<<endl;
        cout<<"PASSENGER NID    : "<<p_NID<<endl;

        SaveInfo(p_Name, p_NID, from, to, tn, dd, mm, yy, fare, seatsno, q);
    }

};

class DAY
{
public:
    DaySeatCap Day[10];
};

class Train : public DAY
{
public:

    char Name[25];
    int station[20], i, space, j, N;
    float Times[20];
    char From[20];
    char To[20];
    char Off[10];
    void SetInfo(char Nm[], char fr[], char to[], char off[10], int S[], float t[], int n)
    {
        strcpy(Name, Nm);
        strcpy(From, fr);
        strcpy(To, to);
        strcpy(Off, off);
        for(i=0; i<20; i++)
        {
            station[i]=S[i];
            Times[i]=t[i];
        }
        N=n;

    }

    void OutInfo()
    {
        cout<<Name<<"     From: "<<From<<"      To: "<<To<<endl;
         cout<<"---------------------------------------------------------------------------"<<endl;

        cout<<setprecision(2)<<fixed;
        for(i=0; i<N; i++)
        {
            cout<<stations[station[i]];
            space=40-stations[station[i]].size();
            for(j=0; j<space; j++)
                cout<<" ";
            cout<<Times[i]<<endl;

        }
        cout<<"\n";
    }
    friend void StationSchedule(Train t[], int s);


}T[100];
void StationSchedule()
{
    int i, j, sp, s, k=0, space, l;
    system("CLS");
    for(i=0; i<10; i++)
    {

        for(j=0; j<5; j++)
        {
            cout<<k+1<<"."<<stations[k];

            space=18-stations[k].size();
            for(l=0; l<space; l++)
                cout<<" ";

            k++;

        }
        cout<<"\n"<<endl;


    }
    cout<<"\n\tENTER CHOICE: ";
    cin>>s;
    s--;
    system("CLS");

    cout<<setprecision(2)<<fixed;
    for(i=0; i<40; i++)
    {
        if(T[i].station[0]==s)
        {
            cout<<"#"<<T[i].Name<<"    ";

            cout<<"STARTS FROM :"<<T[i].From<<"      ";
            cout<<"DESTINATION :"<<T[i].To<<"        ";
            cout<<"Departure at :"<<T[i].Times[0]<<endl;
            cout<<"---------------------------------------------------------------------------------------------"<<endl;
            cout<<"\n";
        }
        else if(T[i].station[T[i].N-1]==s)
        {
            cout<<"#"<<T[i].Name<<"    ";

            cout<<"STARTS FROM :"<<T[i].From<<"      ";
            cout<<"DESTINATION :"<<T[i].To<<"      ";
            cout<<"Arrival at :"<<T[i].Times[T[i].N-1]<<endl;
            cout<<"---------------------------------------------------------------------------------------------"<<endl;
            cout<<"\n";

        }
        else{
            for(j=0; j<T[i].N; j++)
            {

               if(T[i].station[j]==s)
               {
                    cout<<"#"<<T[i].Name<<"    ";

                    cout<<"STARTS FROM :"<<T[i].From<<"      ";
                    cout<<"DESTINATION :"<<T[i].To<<"      ";
                    cout<<"Arrival :"<<T[i].Times[j]<<"      ";
                    cout<<"Departure :"<<T[i].Times[j]+0.03<<endl;
                    cout<<"------------------------------------------------------------------------------------"<<endl;
                    cout<<"\n";
               }
            }
        }
    }
}
void TrainInfoSet()
{

    int i, j, k;

    int st[]={14, 9, 11};
    float time[]={15.00, 15.25, 20.10};
    T[0].SetInfo("SUBARNA EXPRESS", "DHAKA", "CHATTOGRAM", "MONDAY", st, time, 3);
    //for(i=0; i<10; i++)
        //T[0].Day[i].Change_Capacity(440, 0, 0, 440, 0);





    int st1[]={11, 9, 14};
    float time1[]={7.00, 11.45, 12.10};
    T[1].SetInfo("SUBARNA EXPRESS", "CHATTOGRAM", "DHAKA", "MONDAY", st1, time1, 3);
    //for(i=0; i<10; i++)
        //T[1].Day[i].Change_Capacity(440, 0, 0, 440, 0);


    int st2[]={11, 15, 27, 10, 0, 4, 3, 9, 14};
    float time2[]={15.00, 16.30, 17.15, 17.41, 18.45, 19.05, 19.28, 20.35, 21.10};
    T[2].SetInfo("MOHANAGAR GODHULI", "CHATTOGRAM", "DHAKA", "NO", st2, time2, 9);


    int st3[]={14, 9, 3, 4, 0, 10, 27, 15, 11};
    float time3[]={7.45, 8.10, 9.17, 9.45, 10.15, 11.04, 11.30, 12.08, 13.50};
    T[3].SetInfo("MOHANAGAR PROVATI", "DHAKA", "CHATTOGRAM", "NO", st3, time3, 9);

    int st4[]={14, 9, 23, 17, 29, 41, 22, 31, 21, 13};
    float time4[]={7.30, 7.57, 8.26, 9.28, 10.20, 10.55, 11.28, 11.52, 12.25, 12.40};
    T[4].SetInfo("TISTA EXPRESS", "DHAKA", "DEWANGANJ", "MONEDAY", st4, time4, 10);

    int st5[]={13, 21, 31, 22, 41, 29, 17, 9, 14};
    float time5[]={15.00, 15.13, 15.32, 15.55, 16.30, 17.07, 17.52, 19.25, 20.10};
    T[5].SetInfo("TISTA EXPRESS", "DEWANGANJ", "DHAKA", "MONEDAY", st5, time5, 9);

    int st6[]={14, 9, 3, 4, 2, 36, 46, 47, 6, 26, 34, 49};
    float time6[]={6.35, 7.00, 8.06, 8.30, 8.55, 9.36, 10.02, 10.44, 11.10, 11.47, 12.20, 13.20};
    T[6].SetInfo("PARABOT EXPRESS", "DHAKA", "SYLHET", "TUESDAY", st6, time6, 12);

    int st7[]={49, 34, 26, 6, 47, 46, 36, 2, 4, 3, 9, 14};
    float time7[]={15.00, 15.40, 16.15, 16.52, 17.14, 17.57, 18.22, 19.17, 19.44, 20.07, 21.20, 21.55};
    T[7].SetInfo("PARABOT EXPRESS", "SYLHET", "DHAKA", "TUESDAY", st7, time7, 12);

    int st8[]={14, 9, 35, 3, 1, 4, 0, 42, 10, 27, 39, 40};
    float time8[]={15.20, 15.47, 16.31, 17.00, 17.10, 17.30, 17.55, 18.22, 19.01, 19.40, 20.08, 21.20};
    T[8].SetInfo("UPAKUL EXPRESS", "DHAKA", "NOAKHALI", "TUESDAY", st8, time8, 12);

    int st9[]={40, 39, 27, 10, 42, 0, 4, 1, 35, 9, 14};
    float time9[]={6.00, 07.00, 07.30, 07.58, 08.36, 09.03, 09.32, 09.51, 10.32, 11.15, 11.50};
    T[9].SetInfo("UPAKUL EXPRESS2", "NOAKHALI", "DHAKA", "WEDNESDAY", st9, time9, 11);

    int st10[]={14, 9, 1, 4, 2, 32, 18, 30, 36, 45, 46, 47, 6, 26, 34, 49};
    float time10[]={12.00, 12.27, 13.51, 14.12, 14.42, 14.57, 15.09, 15.20, 15.40, 15.53, 16.10, 16.52, 17.33, 18.07, 18.40, 19.40};
    T[10].SetInfo("JOYENTEEKA EXPRESS", "DHAKA", "SYLHET", "NO", st10, time10, 16);

    int st11[]={49, 34, 26, 6, 47, 46, 45, 36, 30, 18, 35, 2, 4, 1, 9, 14};
    float time11[]={8.40, 9.18, 9.50, 10.26, 10.48, 11.32, 11.48, 12.02, 12.20, 12.33, 12.46, 13.08, 13.35, 13.39, 15.17, 16.00};
    T[11].SetInfo("JOYENTEEKA EXPRESS", "SYLHET", "DHAKA", "NO", st11, time11, 16);

    int st12[]={14, 9, 2, 46, 47, 48, 26, 34, 49};
    float time12[]={16.00, 16.32, 18.30, 19.40, 20.22, 20.45, 21.12, 22.25, 22.45};
    T[12].SetInfo("KALANI EXPRESS", "DHAKA", "SYLHET", "FRIDAY", st12, time12, 9);

    int st13[]={49, 34, 26, 48, 47, 46, 2, 3, 35, 9, 14};
    float time13[]={7.00, 7.38, 8.10, 8.35, 9.07, 9.50, 11.18, 12.05, 12.36, 13.15, 13.55};
    T[13].SetInfo("KALANI EXPRESS", "SYLHET", "DHAKA", "FRIDAY", st13, time13, 11);


    int st14[]={14, 9, 35, 3, 0, 46, 47, 6, 48, 26, 34, 49};
    float time14[]={21.50, 22.22, 23.06, 23.48, 1.20, 2.00, 2.30, 2.55, 3.10, 3.37, 4.24, 5.00};
    T[14].SetInfo("UPABAN EXPRESS", "DHAKA", "SYLHET", "WEDNESDAY", st14, time14, 12);

    int st15[]={49, 34, 26, 48, 6, 47, 46, 3, 9, 14};
    float time15[]={22.00, 22.50, 23.20, 23.45, 00.01, 00.21, 1.02, 3.00, 4.30, 5.10};
    T[15].SetInfo("UPABAN EXPRESS", "SYLHET", "DHAKA", "NO", st15, time15, 10);

    int st16[]={49, 34, 26, 48, 6, 47, 46, 36, 18, 0, 42, 10, 27, 38, 15, 11};
    float time16[]={10.15, 10.55, 11.30, 12.15, 12.25, 12.50, 13.32, 14.00, 14.38, 15.25, 16.07, 16.42, 17.10, 17.28, 17.57, 19.45};
    T[16].SetInfo("PAHARIKA EXPRESS", "SYLHET", "CHATTOGRAM", "SATURDAY", st16, time16, 16);

    int st17[]={11, 15, 38, 27, 10, 42, 0, 18, 36, 46, 47, 6, 48, 26, 34, 49};
    float time17[]={9.00, 10.32, 11.02, 11.22, 11.37, 12.33, 13.25, 13.52, 14.13, 14.37, 15.17, 15.38, 15.50, 16.17, 16.48, 17.50};
    T[17].SetInfo("PAHARIKA EXPRESS", "CHATTOGRAM", "SYLHET", "MONDAY", st17, time17, 16);

    int st18[]={49, 34, 26, 48, 47, 46, 0, 10, 27, 15, 11};
    float time18[]={21.20, 21.58, 22.28, 22.54, 23.22, 0.05, 1.30, 2.40, 3.10, 3.54, 5.50};
    T[18].SetInfo("UDDAYAN EXPRESS", "SYLHET", "CHATTOGRAM", "SUNDAY", st18, time18, 11);

    int st19[]={11, 15, 27, 10, 0, 46, 47, 48, 26, 34, 49};
    float time19[]={21.45, 23.17, 00.01, 00.26, 1.20, 2.55, 3.45, 4.15, 4.47, 5.20, 6.00};
    T[19].SetInfo("UDDAYAN EXPRESS", "CHATTOGRAM", "SYLHET", "SATURDAY", st19, time19, 11);

    int st20[]={14, 9, 35, 3, 24, 5, 44, 28, 16, 25};
    float time20[]={10.20, 10.47, 11.38, 12.50, 13.57, 14.05, 14.35, 15.28, 15.40, 16.10};
    T[20].SetInfo("KISHOREGANJ EXPRESS", "DHAKA", "KISHOREGANJ", "FRIDAY", st20, time20, 10);

    int st21[]={14, 9, 35, 3, 24, 5, 44, 28, 16, 25};
    float time21[]={18.40, 19.12, 20.02, 20.57, 21.19, 21.30, 21.40, 21.55, 22.15, 22.45};
    T[21].SetInfo("EGAROSINDUR GODHULI", "DHAKA", "KISHOREGANJ", "NO", st21, time21, 10);

    int st22[]={25, 28, 44, 5, 24, 3, 35, 9, 14};
    float time22[]={14.40, 15.07, 15.22, 16.25, 16.35, 17.20, 18.00, 19.18, 19.50};
    T[22].SetInfo("KISHOREGANJ EXPRESS", "KISHOREGANJ", "DHAKA", "FRIDAY", st22, time22, 9);

    int st23[]={25, 16, 28, 44, 5, 24, 3, 35, 9, 14};
    float time23[]={6.45, 7.01, 7.13, 7.30, 7.40, 7.51, 8.35, 9.22, 10.38, 11.15};
    T[23].SetInfo("EGAROSINDUR PROVATI", "KISHOREGANJ", "DHAKA", "NO", st23, time23, 10);

    int st24[]={14, 9, 11};
    float time24[]={7.00, 7.32, 12.20};
    T[24].SetInfo("SONAR BANGLA EXPRESS", "DHAKA", "CHATTOGRAM", "WEDNESDAY", st24, time24, 3);

    int st25[]={11, 9, 14};
    float time25[]={17.00, 22.05, 22.40};
    T[25].SetInfo("SONAR BANGLA EXPRESS", "CHATTOGRAM", "DHAKA", "TUESDAY", st25, time25, 3);

    int st26[]={14, 9, 3, 4, 0, 10, 27, 15, 11};
    float time26[]={23.30, 23.59, 1.23, 1.41, 2.28, 3.38, 4.13, 5.03, 6.00};
    T[26].SetInfo("TURNA EXPRESS", "DHAKA", "CHATTOGRAM", "NO", st26, time26, 9);

    int st27[]={11, 15, 27, 10, 0, 4, 3, 9, 14};
    float time27[]={23.00, 00.49, 1.38, 2.15, 3.33, 3.19, 4.23, 5.52, 6.30};
    T[27].SetInfo("TURNA EXPRESS", "CHATTOGRAM", "DHAKA", "NO", st27, time27, 9);

    int st28[]={14, 9, 35, 3, 1, 4, 0, 42, 10, 27, 38, 15, 11};
    float time28[]={21.00, 21.32, 22.14, 22.45, 22.52, 23.11, 23.53, 00.01, 00.50, 2.02, 2.20, 2.55, 4.05};
    T[28].SetInfo("MOHANAGAR EXPRESS", "DHAKA", "CHATTOGRAM", "SUNDAY", st28, time28, 13);

    int st29[]={11, 15, 38, 27, 10, 42, 0, 4, 1, 3, 35, 9, 14};
    float time29[]={12.30, 14.05, 14.46, 15.05, 15.33, 15.55, 16.43, 17.00, 17.20, 17.30, 18.00, 18.53, 19.30};
    T[29].SetInfo("MOHANAGAR EXPRESS", "CHATTOGRAM", "DHAKA", "SUNDAY", st29, time29, 13);

    int st30[]={11, 15, 38, 27, 20, 33, 12};
    float time30[]={17.15, 18.53, 19.27, 19.55, 20.54, 21.15, 21.35};
    T[30].SetInfo("MEGHNA EXPRESS", "CHATTOGRAM", "CHANDPUR", "NO", st30, time30, 7);

    int st31[]={12, 33, 20, 27, 38, 15, 11};
    float time31[]={5.00, 5.25, 5.40, 6.45, 7.20, 7.33, 9.25};
    T[31].SetInfo("MEGHNA EXPRESS", "CHANDPUR", "CHATTOGRAM", "NO", st31, time31, 7);

    int st32[]={29, 25, 3, 0, 10, 27, 15, 11};
    float time32[]={20.00, 22.00, 23.13, 0.27, 1.55, 2.45, 3.35, 5.20};
    T[32].SetInfo("BIJOY EXPRESS", "MYMENSING", "CHITTAGONG", "TUESDAY", st32, time32, 8);

    int st33[]={11, 15, 27, 10, 0, 3, 25, 29};
    float time33[]={7.20, 9.09, 9.55,10.23, 11.35, 12.38, 14.33, 16.00};
    T[33].SetInfo("BIJOY EXPRESS", "CHATTOGRAM", "MYMENSING", "WEDNESDAY", st33, time33, 8);

    int st34[]={14, 9, 17, 29, 22, 43};
    float time34[]={9.40, 10.12, 11.52, 12.43, 13.50, 15.10};
    T[34].SetInfo("AGNIBINA EXPRESS", "DHAKA", "TARAKANDI", "NO", st34, time34, 6);

    int st35[]={43, 22, 29, 17, 9, 14};
    float time35[]={16.30, 17.35, 19.17, 19.53, 21.57, 22.30};
    T[35].SetInfo("AGNIBINA EXPRESS", "TARAKANDI", "DHAKA", "NO", st35, time35, 6);

    int st36[]={14, 9, 23, 17, 29, 22, 43};
    float time36[]={16.40, 17.12, 17.55, 18.59, 20.30, 21.48, 22.30};
    T[36].SetInfo("JAMUNA EXPRESS", "DHAKA", "TARAKANDI", "NO", st36, time36, 7);

    int st37[]={43, 22, 29, 17, 23, 9, 14};
    float time37[]={2.10, 3.15, 4.40, 5.25, 6.35, 7.15, 7.40};
    T[37].SetInfo("JAMUNA EXPRESS", "TARAKANDI", "DHAKA", "NO", st37, time37, 7);

    int st38[]={14, 9, 23, 17, 29, 41, 37, 22, 21, 31, 13};
    float time38[]={18.00, 18.32, 19.00, 20.26, 21.30, 22.10, 22.35, 22.53, 23.13, 23.43, 23.50};
    T[38].SetInfo("BHARAMAPUTRA EXPRESS", "DHAKA", "DEWANGANJ", "NO", st38, time38, 11);

    int st39[]={13, 21, 31, 22, 37, 41, 29, 17, 9, 14};
    float time39[]={6.30, 6.50, 7.11, 7.40, 8.00, 8.25, 9.23, 10.08, 11.40, 12.30};
    T[39].SetInfo("BHARAMPUTRA EXPRESS", "DEWANGANJ", "DHAKA", "NO", st38, time39, 10);
    /*int st[]={};
    float time[]={};
    T[].SetInfo();*/




}
void SetDate()
{

    int i, j, k, dd, mm, yy;
    cout<<"ENTER TODAYS DATE: ";
    cin>>dd>>mm>>yy;
    cout<<"ENTER TODAYS DAY NAME: ";

    string dayname;

    cin>>dayname;

    string days[17]={"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY"};
    for(i=0; i<13; i++)
    {
        if(dayname==days[i])
        {
            break;

        }
    }
    int daynum=i;
    int date=dd;

    for(j=0; j<40; j++)
    {
        i=daynum;
        dd=date;
        for(k=0; k<10; k++)
        {
            T[j].Day[k].DAYNAME=days[i];
            T[j].Day[k].dd=dd;
            T[j].Day[k].mm=mm;
            T[j].Day[k].yy=yy;
            i++;
            dd++;
        }



    }
}
void TrainRoute()
{
    system("CLS");
    int i, choice;
    for(i=0; i<40; i++)
    {
        cout<<"\n\t\t\t"<<i+1<<" .\t"<<T[i].Name<<" (FROM : "<<T[i].From<<"   TO: "<<T[i].To<<" )"<<endl;
    }
    cout<<"\n\t\tENTER CHOICE: ";
    cin>>choice;
    choice--;
    system("CLS");
    T[choice].OutInfo();
}
void FareInq()
{


    system("CLS");
    int i, j, l, k=0, space, q;
    int from, to, choice, DES[50];
    cout<<"\n\t\tCHOOSE STATION FROM\n--------------------------------------------------------------------------------------------------"<<endl;
    for(i=0; i<10; i++)
    {

        for(j=0; j<5; j++)
        {
            cout<<k+1<<"."<<stations[k];

            space=18-stations[k].size();
            for(l=0; l<space; l++)
                cout<<" ";

            k++;

        }
        cout<<"\n"<<endl;


    }
    cout<<"\n\tENTER CHOICE: ";
    cin>>from;
    from--;
    system("CLS");
    cout<<"\n\t\tCHOOSE DESTINATION \n---------------------------------------------"<<endl;
    k=0;
    int flag=0;

    for(i=0; i<430; i++)
    {
        if(arr[i][0]==from )
        {
           DES[k]=arr[i][1];
           k++;
        }
    }
    for(i=0; i<430; i++)
    {
        if(arr[i][1]==from )
        {

           for(l=0; l<k; l++)
           {
               if(DES[l]==arr[i][0])
               {
                   flag=1;
               }
           }
            if(flag==0)
            {
                DES[k]=arr[i][0];
                k++;
            }
            flag=0;

        }
    }
    for(i=0; i<k; i++)
    {
        cout<<i+1<<"."<<stations[DES[i]]<<endl;
    }
    cout<<"\n\t"<<"ENTER CHOICE: ";
    cin>>choice;
    to=DES[choice-1];
    system("CLS");
    cout<<"\n\n\t\tCHOOSE CLASS\n-------------------------------------------------\n\t1. SHOVON\n\t2. SHOVON-CHAIR\n\t3. SNIGDHA\n\t4. FIRST CLASS\n\t5. AC-SEAT\n\nENTER CHOICE:";
    cin>>choice;
    cout<<"\n\t"<<"QUANTITY: ";
    cin>>q;
    cout<<"\nFROM: "<<stations[from]<<endl;
    cout<<"\nTO  : "<<stations[to]<<endl;

    for(i=0; i<430; i++)
    {
        if((arr[i][0]==from || arr[i][1]==from) && (arr[i][0]==to || arr[i][1]==to) )
        {
           //cout<<"\nFARE :"<<arr[i][2]<<" BDT"<<endl;
           switch(choice)
           {
           case 1:
               cout<<"\nTOATL FARE :"<<arr[i][2]*q<<" BDT"<<endl;
               break;
           case 2:
               cout<<"\nTOATL FARE :"<<((arr[i][2]*.2)+arr[i][2])*q<<" BDT"<<endl;
               break;
           case 3:
               cout<<"\nTOATL FARE :"<<((arr[i][2]*2)*.15+arr[i][2]*2)*q<<" BDT"<<endl;
               break;
           case 4:
               cout<<"\nTOATL FARE :"<<((arr[i][2]*.6)+arr[i][2])*q<<" BDT"<<endl;
               break;
           case 5:
               cout<<"\nTOATL FARE :"<<((arr[i][2]*2.4)*.15+arr[i][2]*2.4)*q<<" BDT"<<endl;
               break;


           }
           break;
        }
    }

}
void BUY_TICKET()
{

    int i, j, l, k=0, space, q;
    int from, to, choice, DES[50];
    system("CLS");
    cout<<"\n\t\tCHOOSE STATION FROM\n--------------------------------------------------------------------------------------------------"<<endl;
    for(i=0; i<10; i++)
    {

        for(j=0; j<5; j++)
        {
            cout<<k+1<<"."<<stations[k];

            space=18-stations[k].size();
            for(l=0; l<space; l++)
                cout<<" ";

            k++;

        }
        cout<<"\n"<<endl;


    }
    cout<<"\n\tENTER CHOICE: ";
    cin>>from;
    from--;
    system("CLS");
    cout<<"\n\t\tCHOOSE DESTINATION \n---------------------------------------------"<<endl;
    k=0;
    int flag=0;

    for(i=0; i<430; i++)
    {
        if(arr[i][0]==from )
        {
           DES[k]=arr[i][1];
           k++;
        }
    }
    for(i=0; i<430; i++)
    {
        if(arr[i][1]==from )
        {

           for(l=0; l<k; l++)
           {
               if(DES[l]==arr[i][0])
               {
                   flag=1;
               }
           }
            if(flag==0)
            {
                DES[k]=arr[i][0];
                k++;
            }
            flag=0;

        }
    }
    for(i=0; i<k; i++)
    {
        cout<<i+1<<"."<<stations[DES[i]]<<endl;
    }
    cout<<"\n\t"<<"ENTER CHOICE: ";
    cin>>choice;
    to=DES[choice-1];

    cout<<from<<"----"<<to<<endl;



    int trains[40], traincount=0;
    int ttimes[15];
    int cnt=0;
    int stopagecounter=0;
    int stopage[15];
    for(i=0; i<40; i++)
    {
        for(j=0; j<T[i].N; j++)
        {
            if(T[i].station[j]==from)
            {
                stopagecounter=0;
                for(k=j+1; k<T[i].N; k++)
                {

                    if(T[i].station[k]==to)
                    {
                       trains[traincount]=i;
                       stopage[traincount]=stopagecounter;
                       traincount++;

                    }
                    stopagecounter++;
                }

            }

        }

    }
    int x, y;
    system("CLS");

    for(i=0; i<traincount; i++)
    {
        cout<<"\n\n"<<i+1<<". "<<T[trains[i]].Name<<"         TOTAL STOPAGE: "<<stopage[i]<<endl;
    }
    cout<<"ENTER CHOICE: ";
    cin>>choice;
    choice--;
    x=trains[choice];
    int dd, mm, yy;
    cout<<"\n\nENTER JOURNEY DATE:\n\n    dd:";
    cin>>dd;
    cout<<"   mm: ";
    cin>>mm;
    cout<<"   yy: ";
    cin>>yy;
    for(j=0; j<10; j++)
    {
        if(T[x].Day[j].dd==dd)
        {
            T[x].Day[j].booking(x, from, to, dd, mm, yy);
        }
    }

}

int main()
{
    TrainInfoSet();
    SetDate();
    int choice;
    char choice2;
    X:
    system("CLS");
    cout<<"\n\n\n\n\t\t\tWELCOME TO RAILWAY MANAGEMENT SYSTEM\n\----------------------------------------------------------------------------\n\t\t\t\t1.STATION SCHEDULE\n\t\t\t\t2.TRAIN ROUTE\n\t\t\t\t3.FARE INQUIRY\n\t\t\t\t4.BUY TICKET\n\t\tENTER CHOICE:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        StationSchedule();
        cout<<"\tPress 'm' and ENTER to go MAIN MANUE, Any key to exit!";
        cin>>choice2;
        switch(choice2)
        {
        case 'm':
            goto X;
        default:
            return 0;
        }
        break;
    case 2:
        TrainRoute();
        cout<<"\tPress 'm' and ENTER to go MAIN MANUE, Any key to exit!";
        cin>>choice2;
        switch(choice2)
        {
        case 'm':
            goto X;
        default:
            return 0;
        }
        break;
    case 3:
        FareInq();
        cout<<"\tPress 'm' and ENTER to go MAIN MANUE, Any key to exit!";
        cin>>choice2;
        switch(choice2)
        {
        case 'm':
            goto X;
        default:
            return 0;
        }
        break;
    case 4:
        BUY_TICKET();
        cout<<"\tPress 'm' and ENTER to go MAIN MANUE, Any key to exit!";
        cin>>choice2;
        switch(choice2)
        {
        case 'm':
            goto X;
        default:
            return 0;
        }
        break;


    }
    return 0;
}
