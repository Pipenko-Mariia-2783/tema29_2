#include "Plant.h"
#include "Tree.h"
#include "Rose.h"
#include "Color.h"

int main()
{
    Plant a("Тюльпан", "Квітка");
    a.showInfo();

    Tree b("Дуб","Дерево",25);
    b.showInfoTree();

    Rose c("Хризантема", "Квітка", 60);
    c.showInfo();

    Color d("Роза", "Квітка", "Червоний");
    d.showInfo();
}