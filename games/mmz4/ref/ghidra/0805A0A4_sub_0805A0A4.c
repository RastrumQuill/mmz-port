// sub_0805A0A4 at 0x0805A0A4 (thumb)

undefined4 sub_0805A0A4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0xb5;
  local_10 = 0xb6;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_14 + iVar1));
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    iVar1 = sub_0805C370(param_1);
    *(int *)(param_1 + 0x5c) = iVar1 + 0xd000;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0xb4) + -0x47ff;
    iVar1 = sub_0805C370(param_1);
    *(int *)(param_1 + 100) = iVar1 - (*(int *)(param_1 + 0x54) + -0xd000);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) - (*(int *)(param_1 + 0x58) + 0x47ff);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((DAT_0202e922 & 1) == 0) {
      sub_0805BF54(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar1 = (uint)*(byte *)(param_1 + 0x12) * -*(int *)(param_1 + 100);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 6);
    iVar1 = -*(int *)(param_1 + 0x68) * (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar1 >> 8);
  }
  return in_lr;
}

