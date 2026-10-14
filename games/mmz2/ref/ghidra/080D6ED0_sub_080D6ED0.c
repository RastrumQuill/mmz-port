// sub_080D6ED0 at 0x080D6ED0 (thumb)

undefined4 sub_080D6ED0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0x1fd) < 0x20) {
    iVar3 = (int)*(short *)(iVar4 + 0xa4);
    uVar2 = *(byte *)(iVar4 + 0x1fd) + 4;
    if (0x20 < uVar2) {
      uVar2 = 0x20;
    }
    *(char *)(iVar4 + 0x1fd) = (char)uVar2;
    if ((*(byte *)(iVar4 + 0x202) & 1) == 0) {
      uVar2 = iVar3 + 4;
    }
    else {
      uVar2 = iVar3 + 8;
    }
    uVar1 = sub_08037A3C(iVar4);
    if ((uVar1 & 0xff) < uVar2) {
      uVar2 = uVar1 & 0xff;
    }
    *(short *)(iVar4 + 0xa4) = (short)uVar2;
    *(char *)(iVar4 + 0x17e) = (char)uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  sub_080D6F44(param_1);
  return in_lr;
}

