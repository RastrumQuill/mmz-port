// sub_08038F80 at 0x08038F80 (thumb)

undefined4 sub_08038F80(undefined4 param_1,int param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_3;
  sub_08006AC4(param_1,1,param_2,0xec,iVar3);
  uVar2 = 0;
  if (0 < iVar3) {
    do {
      *(char *)((short)uVar2 * 0xec + param_2 + 0x1c) = DAT_0202e13c + (char)uVar2;
      uVar1 = (int)(short)uVar2 + 1;
      uVar2 = uVar1 & 0xffff;
    } while ((int)(uVar1 * 0x10000) >> 0x10 < iVar3);
  }
  DAT_0202e13c = DAT_0202e13c + (char)param_3;
  uVar2 = 0;
  DAT_0202f070 = param_1;
  do {
    (&DAT_02000038)[uVar2] = 0xffff;
    (&DAT_02000030)[uVar2] = 0xffff;
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 4);
  return in_lr;
}

