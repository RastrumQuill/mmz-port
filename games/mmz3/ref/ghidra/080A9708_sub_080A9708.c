// sub_080A9708 at 0x080A9708 (thumb)

undefined4 sub_080A9708(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_080177F4();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) +
         *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
         0xb;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0x16;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 0x10;
    iVar3 = *(int *)(param_1 + 0x5c) + -8;
    *(int *)(param_1 + 0x5c) = iVar3;
    uVar4 = 0xfffffe00;
    if (-0x201 < iVar3) goto LAB_080a97b6;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) +
         *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
         0xb;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0x16;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 0x10;
    iVar3 = *(int *)(param_1 + 0x5c) + 8;
    *(int *)(param_1 + 0x5c) = iVar3;
    uVar4 = 0x200;
    if (iVar3 < 0x201) goto LAB_080a97b6;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
LAB_080a97b6:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    sub_080A8B20(param_1,6,0);
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x5c);
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

