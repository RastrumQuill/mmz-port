// sub_080055C8 at 0x080055C8 (thumb)

void sub_080055C8(int param_1,int *param_2)

{
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  *param_2 = *(int *)(param_1 + 0x10);
  *(int **)(param_1 + 0x10) = param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}

