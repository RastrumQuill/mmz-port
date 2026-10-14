// sub_080AF368 at 0x080AF368 (thumb)

undefined4 sub_080AF368(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    iVar2 = *(int *)(iVar3 + 0x54);
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x54) =
         iVar2 + *(short *)((int)&DAT_080fe64c +
                           ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) * 8;
    iVar3 = *(int *)(iVar3 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 8;
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x12) + 0x20;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar1 < 0x6001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

