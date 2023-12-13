#include <iostream>
#include "DataSet.h"
#include "SinglyLinkedList.h"
using namespace std;

int main() {

 
  
   LinkedList lmStudioSettings;
   Node* node_Orca213BQ3KL = new Node("Orca213BQ3KLNewDefault", &a1);
  
   Node* node_Mistral2217BQ4KM = new Node("Mistral2217BQ4KMlMDefault", &a2);

   Node* node_Mistral2217BQ4KM4096 = new Node("Mistral2217BQ4KMFast4096", &a3);
  
   Node* node_ReplitOpenorcaggmlv1Q8 = new Node("ReplitOpenorcaggmlv1Q8", &a4);

  // append adds things to the tail
  // prepend adds them to the head
  lmStudioSettings.Append(node_Orca213BQ3KL);   
  lmStudioSettings.Append(node_Mistral2217BQ4KM);  

  // insert second room between the first and third
  lmStudioSettings.InsertAfter(node_Orca213BQ3KL, node_Mistral2217BQ4KM4096);

  // insert fourth LLM
  lmStudioSettings.Append(node_ReplitOpenorcaggmlv1Q8);

   // Output list
   cout << "List after adding nodes: ";
  lmStudioSettings.PrintList(cout);

      
  // remove hallway
  lmStudioSettings.RemoveAfter(node_Mistral2217BQ4KM);

  // output
  cout << "List after removing a node:" ;
  lmStudioSettings.PrintList(cout);

   
   // LinkedList destructor frees remaining nodes
}