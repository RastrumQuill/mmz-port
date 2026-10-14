// sub_08006C28 at 0x08006C28 (thumb)

void sub_08006C28(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  iVar1 = DAT_0200001c;
  *param_1 = *(int *)(DAT_0200001c + 0x10);
  *(int **)(iVar1 + 0x10) = param_1;
  *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
  return;
}

