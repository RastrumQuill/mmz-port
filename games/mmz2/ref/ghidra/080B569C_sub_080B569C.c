// sub_080B569C at 0x080B569C (thumb)

undefined4 sub_080B569C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_080127E4(param_1,0x1406);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 != 0) {
      iVar5 = uVar4 * -2 + 1;
      *(int *)(param_1 + 0x5c) = iVar5 * 0x60;
      *(int *)(param_1 + 100) = iVar5 * -4;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080b57b0;
    }
    *(uint *)(param_1 + 0x5c) = *(int *)(iVar5 + 0x5c) + (uVar4 * 2 + -1) * -0x90;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
    uVar2 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_080b57b0;
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      *(uint *)(param_1 + 0x5c) = *(int *)(iVar5 + 0x5c) + (uVar4 * 2 + -1) * -0x100;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
      uVar2 = 2;
    }
    else {
      iVar5 = uVar4 * -2 + 1;
      *(int *)(param_1 + 0x5c) = iVar5 * 0x300;
      *(int *)(param_1 + 100) = iVar5 * -0x40;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_080b57b0:
  sub_080B57C4(param_1);
  return in_lr;
}

