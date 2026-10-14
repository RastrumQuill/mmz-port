// sub_08042ED4 at 0x08042ED4 (thumb)

undefined4 sub_08042ED4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  if (*(byte *)(iVar5 + 0xc) < 2) {
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
    iVar4 = *(int *)(iVar5 + 0x54);
    iVar2 = FUN_081288bc(*(int *)(iVar6 + 0x54) - iVar4,5);
    *(uint *)(param_1 + 0x54) = iVar4 + (*(byte *)(param_1 + 0x11) + 1) * iVar2;
    iVar2 = *(int *)(iVar5 + 0x58);
    iVar5 = FUN_081288bc(*(int *)(iVar6 + 0x58) - iVar2,5);
    *(uint *)(param_1 + 0x58) = iVar2 + (*(byte *)(param_1 + 0x11) + 1) * iVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

