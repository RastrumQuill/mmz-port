// sub_080AF0DC at 0x080AF0DC (thumb)

undefined4 sub_080AF0DC(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (sVar1 = sub_08009A3C(iVar4 + *(short *)((int)&DAT_080fe64c +
                                             ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17
                                             )) * 8,
                           iVar3 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 8),
     sVar1 != 0)) {
    sub_0800471C(0x100);
    *(undefined *)(param_1 + 0x10) = 4;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

