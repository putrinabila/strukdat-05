/*

Nama : Putri Nabila 
NPM : 140810180007
Kelas : A 
Tanggal Pemvbuatan : 26 Maret 2019 
Deksripsi : jawaban excercise 5
*/

#include<iostream>
using namespace std;

struct Pembalap {
   int nomor;
   char nama;
   int waktu;
   Pembalap* next;
   Pembalap* prev;
};

void createNode(Pembalap* &p,  int nomor, char nama){
  p = new Pembalap;
  cout<<"Nomor : ";cin>>p->nomor;
  cout<<"Nama  : ";cin>>p->nama;
  cout<<"Waktu :";cin>p->waktu;
  p->next=NULL;
  p->prev=NULL;
}

void insertFirst(Pembalap* &head, Pembalap* node){
  if (head==NULL){
   head=node;
  }
 
  else{
    node->next=head;
    head->prev=node;
    head=node;
  }
}


void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node){
  Pembalap pBantu;
  while (pBantu!=NULL){
    if(pBantu->nomor==nomorkey){
      if(pBantu->prev==NULL){
      insertFirst(head,node);
     }
   else {
     node->next=pBantu;
     node->prev=pBantu->prev;
     pBantu->prev->next=node;
     pBantu->prev=node;
    
    }
   pBantu=pBantu->next;
   }
  }
}


void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deletedNode){
  Pembalap pBantu;
  pBantu=head;
  while(pBantu!=NULL){
    if(pBantu->prev==nomorkey){
      if(pBantu->next==NULL){
        Pembalap last;
        last=head;
    while(last->next)
   }
  }
 }
}


void search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate){
 
}


void traversal(Pembalap* head){
 Pembalap* help;
 if (head==NULL){
  cout<<"***LIST KOSONG***\n";
 }
 else {
  help=head;
  while(help!=NULL){
   cout<<"Nomor : "<<help->nomor<<endl;
   cout<<"Nama  : "<<help->nama<<endl;
   cout<<"Waktu : "<<help->waktu<<endl;
   cout<<endl;
   help=help->next;
  }
 }
}


void sortingByNomor(Pembalap* &head){
  Pembalap pBantu;
  pBantu=head;
  while(pBantu!=NULL){
    if(pBantu->nomor > pBantu->next->nomor){
   
    }
  }
}


void update(Pembalap* firstNode, int nomorKey){
 
}



int main() {
 Pembalap* head = NULL;
 Pembalap* pBaru = NULL;
 Pembalap* pToUpdate = NULL;
 char nama = 'a';

 for (int i = 0; i < 4; i++) {
   createNode(pBaru, i+1, nama++);
   insertFirst(head, pBaru);
 }

 cout << ">>> List" << endl;
 traversal(head);

 int keyNomor = 2;

 cout << ">>> Insert Before nomor " << keyNomor << endl;
 createNode(pBaru, 99, 'z');
 insertBefore(head, keyNomor, pBaru); 
 traversal(head);
 cout << ">>> SortingByNomor" << endl;
 sortingByNomor(head);
 traversal(head);

 keyNomor = 3;
 cout << ">>> Delete nomor " << keyNomor << endl;
 Pembalap* pHapus = NULL;
 deleteByKey(head, keyNomor, pHapus);
 traversal(head);

 keyNomor = 4;
 cout << ">>> Update nomor " << keyNomor << endl;
 update(head, keyNomor);

 cout << ">>> Updated list\n";
 traversal(head);
}
