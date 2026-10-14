// sub_08041AD0 at 0x08041AD0 (thumb)

undefined4 sub_08041AD0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') goto LAB_08041be8;
    sub_08002B10(0x37);
    sub_08005794(param_1 + 0x74,&DAT_0885255c,0xffffffff,0xffffffff,0xffffffff,
                 *(undefined *)(param_1 + 0x12));
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 6) goto LAB_08041be8;
    sub_0801CF00(param_1,0x8024);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (iVar4 = *(int *)(param_1 + 0x5c) + -0x1000, *(int *)(param_1 + 0x5c) = iVar4,
         iVar4 < 0xc00)) {
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
      goto LAB_08041be8;
    }
    if ((bVar1 != 0) ||
       (iVar4 = *(int *)(param_1 + 0x5c) + 0x600, *(int *)(param_1 + 0x5c) = iVar4, iVar4 < 0x2c01))
    goto LAB_08041be8;
    *(undefined4 *)(param_1 + 0x5c) = 0x2c00;
    sub_0801CF00(param_1,0x8025);
    sub_08005794(param_1 + 0x74,&DAT_0885255c,0xffffffff,0xffffffff,0xffffffff,1);
    *(undefined *)(param_1 + 0x12) = 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08041be8:
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  uVar3 = (uint)*(byte *)(iVar5 + 0x24);
  *(byte *)(param_1 + 0x24) = *(byte *)(iVar5 + 0x24);
  uVar2 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x54) -
            (iVar4 * *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) >> 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x54) +
            (iVar4 * *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) >> 8);
  }
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar4 * (short)(&DAT_08128c10)[uVar3] >> 8)
  ;
  return in_lr;
}

