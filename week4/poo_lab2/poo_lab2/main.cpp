#include "NumberList.h"

int main()
{
    NumberList List;
    List.Init();
    List.Add(5);
    List.Add(8);
    List.Add(4);
    List.Add(7);
    List.Add(2);
    List.Add(9);

    List.Sort();
    List.Print();

	return 0;
}