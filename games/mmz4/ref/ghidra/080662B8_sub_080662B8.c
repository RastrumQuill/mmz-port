// sub_080662B8 at 0x080662B8 (thumb)

void sub_080662B8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0202dbf0 + 0x58);
  iVar1 = (&DAT_08857bc8)[param_3 * 2];
  *param_1 = *(int *)(DAT_0202dbf0 + 0x54) +
             (&DAT_08857bc4)[param_3 * 2] * ((*(byte *)(DAT_0202dbf0 + 10) >> 4 & 1) * 2 + -1);
  param_1[1] = iVar2 + -0x1000 + iVar1;
  return;
}

