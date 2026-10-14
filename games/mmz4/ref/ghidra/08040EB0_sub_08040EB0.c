// sub_08040EB0 at 0x08040EB0 (thumb)

undefined4 sub_08040EB0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  uVar2 = (uint)*(byte *)(iVar3 + 0xc0);
  if (uVar2 < 3) {
    uVar2 = (uint)*(byte *)(iVar3 + 0xc1);
  }
  uVar1 = *(undefined2 *)((uint)*(byte *)(iVar3 + 0xc3) * 0xc + *(int *)(&DAT_08852460 + uVar2 * 4))
  ;
  sub_0801CD28(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801CF00(param_1,uVar1);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x12) = 8;
  sub_08040D90(param_1);
  return in_lr;
}

