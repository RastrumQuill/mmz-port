// sub_080055A4 at 0x080055A4 (thumb)

void sub_080055A4(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  iVar1 = DAT_02000024;
  *param_1 = *(int *)(DAT_02000024 + 0x10);
  *(int **)(iVar1 + 0x10) = param_1;
  *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
  return;
}

