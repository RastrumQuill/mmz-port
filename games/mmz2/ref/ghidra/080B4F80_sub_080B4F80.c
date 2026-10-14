// sub_080B4F80 at 0x080B4F80 (thumb)

undefined4 sub_080B4F80(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3204);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar2 = (byte *)(param_1 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar2 = *pbVar2 & 0xdf;
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x5c) = 0x500;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  uVar3 = 0;
  do {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar4 = iVar1 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    iVar4 = iVar1 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
    *(int *)(param_1 + 0x5c) = iVar1 + -0x10;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B4F4C(param_1);
  return in_lr;
}

