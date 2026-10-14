// sub_080FBB2C at 0x080FBB2C (thumb)

undefined4 sub_080FBB2C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0xd) == '\x03') && (*(int *)(iVar2 + 0x58) == *(int *)(param_1 + 0xb4))
         ) {
        *(undefined *)(param_1 + 0x12) = 0x40;
        *(undefined *)(param_1 + 0xd) = 1;
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0x58);
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) == 0) {
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = 0x200;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = 0x100;
    }
    *(int *)(param_1 + 0x68) = iVar2 + iVar3;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080FBBD0(param_1);
      return in_lr;
    }
  }
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return in_lr;
}

