// sub_0800551C at 0x0800551C (thumb)

void sub_0800551C(int param_1,int *param_2)

{
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  *param_2 = *(int *)(param_1 + 0x10);
  *(int **)(param_1 + 0x10) = param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}

