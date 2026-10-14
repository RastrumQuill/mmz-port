// sub_080B0FB4 at 0x080B0FB4 (thumb)

undefined4 sub_080B0FB4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar1 = sub_080B0C4C(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      *(char *)(param_1 + 0xc2) = '\x01';
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0xc))) {
    if (*(char *)(iVar2 + 0xc2) == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x50;
      *(undefined *)(param_1 + 0xc2) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return in_lr;
}

