// sub_080B5F8C at 0x080B5F8C (thumb)

undefined4 sub_080B5F8C(int param_1)

{
  int iVar1;
  short sVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar1 + 0x17a) & 0x40) == 0) {
    *(byte *)(iVar1 + 0x17a) = *(byte *)(iVar1 + 0x17a) | 0x40;
    sVar2 = *(short *)(iVar1 + 0x8c) + (ushort)*(byte *)(iVar1 + 0x183);
    *(short *)(iVar1 + 0x8c) = sVar2;
    *(char *)(iVar1 + 0x114) = (char)sVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  sub_080B6058(param_1);
  return in_lr;
}

