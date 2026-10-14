// sub_08066164 at 0x08066164 (thumb)

void sub_08066164(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_08857ba8 + param_3 * 8);
  iVar1 = *(int *)(param_2 + 0xd4);
  *param_1 = *(int *)(param_2 + 0xd0) + *(int *)(&DAT_08857ba4 + param_3 * 8) + 0x7800;
  param_1[1] = iVar1 + iVar2 + 0x8000;
  return;
}

