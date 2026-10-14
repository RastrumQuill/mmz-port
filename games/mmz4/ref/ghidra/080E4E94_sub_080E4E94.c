// sub_080E4E94 at 0x080E4E94 (thumb)

undefined4 sub_080E4E94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(DAT_0202dbf0 + 0x54);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E4D94(param_1 + 0x54,0,1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    if (*(int *)(param_1 + 0x54) < iVar1) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    }
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865904 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

