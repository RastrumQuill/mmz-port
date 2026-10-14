// sub_080033DC at 0x080033DC (thumb)

void sub_080033DC(int **param_1,int *param_2)

{
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(char *)((int)param_1 + 6) = *(char *)(*param_2 + 1) + '\x01';
  *(undefined *)((int)param_1 + 7) = 0;
  return;
}

