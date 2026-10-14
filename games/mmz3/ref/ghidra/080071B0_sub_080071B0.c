// sub_080071B0 at 0x080071B0 (thumb)

void sub_080071B0(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  iVar1 = DAT_020002a4;
  *param_1 = *(int *)(DAT_020002a4 + 0x10);
  *(int **)(iVar1 + 0x10) = param_1;
  *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
  return;
}

