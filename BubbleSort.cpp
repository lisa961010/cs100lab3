#include "BubbleSort.h"



BubbleSort::BubbleSort()

{



}





void BubbleSort::sort(Container* container)

{

    int i, j, flag = 1;    // set flag to 1 to start first pass

        base* temp;             // holding variable

        int numLength = container->size();

        for(i = 1; (i <= numLength) && flag; i++)

        {

            flag = 0;

            for (j=0; j < (numLength -1); j++)

            {

                if (container->at(j+1) > container->at(j))     // ascending order simply changes to <

                {

                    temp = container->at(j);             // swap elements

                    container->add_element(container->at(j+1));

                    container->add_element(temp);

                    flag = 1;               // indicates that a swap occurred.

                }

            }

        }   //arrays are passed to functions by address; nothing is returned

}
