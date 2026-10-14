// sub_08036A70 at 0x08036A70 (thumb)

void sub_08036A70(int param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*(byte *)(param_1 + 10) >> 4 & 1) != 0) {
    iVar1 = -1;
  }
  sub_08038E6C(*(int *)(param_1 + 0x2c4) - (*param_2 * iVar1 + *(int *)(param_1 + 0x54)),
               *(int *)(param_1 + 0x2c8) - ((int)param_2[1] + *(int *)(param_1 + 0x58)));
  return;
}

