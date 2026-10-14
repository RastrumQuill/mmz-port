// sub_08042D50 at 0x08042D50 (thumb)

undefined4 sub_08042D50(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x60) + -0x80;
  *(int *)(param_1 + 0x60) = iVar3;
  iVar2 = *(int *)(param_1 + 0x5c) + iVar3;
  *(int *)(param_1 + 0x5c) = iVar2;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (-1 < iVar3) goto LAB_08042e14;
    sub_08005794(param_1 + 0x74,&DAT_08852680,0xffffffff,0xffffffff,0xffffffff,2);
  }
  else {
    if (bVar1 < 2) {
      if ((bVar1 != 0) || (0x1ff < iVar3)) goto LAB_08042e14;
      uVar4 = 0x8021;
    }
    else {
      if (bVar1 != 2) {
        if ((bVar1 == 3) && (iVar2 < 0)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
          return in_lr;
        }
        goto LAB_08042e14;
      }
      if (-0x201 < iVar3) goto LAB_08042e14;
      uVar4 = 0x8022;
    }
    sub_0801CF00(param_1,uVar4);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08042e14:
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  uVar5 = (uint)*(byte *)(iVar6 + 0x24);
  uVar4 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar4 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) -
            (iVar3 * *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17)) >> 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) +
            (iVar3 * *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17)) >> 8);
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar3 * (short)(&DAT_08128c10)[uVar5] >> 8)
  ;
  return in_lr;
}

