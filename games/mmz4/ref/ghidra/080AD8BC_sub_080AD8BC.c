// sub_080AD8BC at 0x080AD8BC (thumb)

undefined4 sub_080AD8BC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x191) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x191) {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return in_lr;
}

