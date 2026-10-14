// sub_080E52AC at 0x080E52AC (thumb)

undefined4 sub_080E52AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined2 auStack_c [2];
  
  sub_08128B5C(auStack_c,&DAT_08129bd8,4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E5194(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0xfffffff4;
  }
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar1 = *(int *)(param_1 + 100) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar1 >> 8;
  }
  sub_0801CF00(param_1,auStack_c[*(byte *)(param_1 + 0x11)]);
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

