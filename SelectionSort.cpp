nclude "SelectionSort.h"



SelectionSort::SelectionSort()

{



}





void SelectionSort::sort(Container* container)

{

    int i, j, first;

    base* temp;

      int numLength = container->size();

      for (i= numLength - 1; i > 0; i--)

     {

           first = 0;                 // initialize to subscript of first element

           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.

          {

                 if (container->at(j) < container->at(first))

                 first = j;

          }

         temp = container->at(first);   // Swap smallest found with element in position i.

         container->add_element(container->at(first));

         container->add_element(temp);

     }

     return;



}
