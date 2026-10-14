// sub_0807EEE8 at 0x0807EEE8 (thumb)

undefined4 sub_0807EEE8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    iVar3 = *(int *)(iVar4 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar3;
    *(int *)(param_1 + 0x4c) = iVar3 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 8;
    iVar4 = *(int *)(iVar4 + 0x50);
    *(int *)(param_1 + 0x50) = iVar4;
    bVar1 = *(byte *)(param_1 + 0x12);
    *(int *)(param_1 + 0x50) = iVar4 + (short)(&DAT_080c8e24)[bVar1] * 8;
    *(byte *)(param_1 + 0x1f) = bVar1 + 0x20;
    *(byte *)(param_1 + 0x12) = bVar1 + 8;
    uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar2 < 0x6001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

