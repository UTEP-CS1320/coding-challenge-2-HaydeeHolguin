#include <stdio.h>
//  This file measures a person's blood pressure readings and reports their category.

int main(void) { // Values will be read by the user
  int s, d;

  scanf("%d %d", &s, &d); // s = Systolic  and d = Diastolic

  if((s < 120) && (d < 80)){  //if systolic is less than 120 and diastolic is less than 80.
    printf("Normal\n");
    }

  if (((s > 120) &&(s < 129)) && (d < 80)){ //if systolic is more than 120 and less than 129 and diastolic is less than 80.
    printf("Elevated\n");
       }

  if (((s > 130) && (s < 139)) || ((d > 80) && (d < 89))){ //if systolic is more than 130 and less than 139 or diastolic is more than 80 and less than 89.
    printf("Stage 1 Hypertension\n");
       }

  if ((s > 140) || (d >90)){ //if systolic is more than 140 or diastolic is more than 90.
    printf("Stage 2 Hypertension\n");
    }

if ((s > 180) || (d > 120)) { // If systolic is more than 180 and or diastolic is more than 120.
    printf("Hypertensive Crysis\n");
}

  }
