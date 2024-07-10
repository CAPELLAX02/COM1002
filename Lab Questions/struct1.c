#include <stdio.h>

struct Shape { 
  char shapeType;
  int edge1;
  int edge2;
  int area;
};

int main(void) { 
  struct Shape shape;

  printf("Enter shape type: ");
  scanf("%c", &shape.shapeType);
  
  printf("Enter first edge: ");
  scanf("%d", &shape.edge1);

  printf("Enter second edge: ");
  scanf("%d", &shape.edge2);

  if (shape.shapeType == 't') { 
    shape.area = (0.5) * shape.edge1 * shape.edge2;
    printf("Area of triangle: %d", shape.area);
  } else if (shape.shapeType == 'r') { 
    shape.area = shape.edge1 * shape.edge2;
    printf("Area of rectangle: %d", shape.area);
  }

  
}