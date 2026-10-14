// sub_080D6E78 at 0x080D6E78 (thumb)

undefined4 sub_080D6E78(int param_1)

{
  int iVar1;
  short sVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar1 + 0x202) & 1) == 0) {
    *(byte *)(iVar1 + 0x202) = *(byte *)(iVar1 + 0x202) | 1;
    sVar2 = *(short *)(iVar1 + 0xa4) + (ushort)*(byte *)(iVar1 + 0x1fd);
    *(short *)(iVar1 + 0xa4) = sVar2;
    *(char *)(iVar1 + 0x17e) = (char)sVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  sub_080D6F44(param_1);
  return in_lr;
}

