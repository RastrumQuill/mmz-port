// sub_080B5FE4 at 0x080B5FE4 (thumb)

undefined4 sub_080B5FE4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar4 + 0x183) < 0x20) {
    iVar3 = (int)*(short *)(iVar4 + 0x8c);
    uVar2 = *(byte *)(iVar4 + 0x183) + 4;
    if (0x20 < uVar2) {
      uVar2 = 0x20;
    }
    *(char *)(iVar4 + 0x183) = (char)uVar2;
    if ((*(byte *)(iVar4 + 0x17a) & 0x40) == 0) {
      uVar2 = iVar3 + 4;
    }
    else {
      uVar2 = iVar3 + 8;
    }
    uVar1 = sub_0801C5CC(iVar4);
    if ((uVar1 & 0xff) < uVar2) {
      uVar2 = uVar1 & 0xff;
    }
    *(short *)(iVar4 + 0x8c) = (short)uVar2;
    *(char *)(iVar4 + 0x114) = (char)uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  sub_080B6058(param_1);
  return in_lr;
}

