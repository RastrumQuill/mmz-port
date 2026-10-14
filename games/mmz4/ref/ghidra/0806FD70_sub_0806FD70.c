// sub_0806FD70 at 0x0806FD70 (thumb)

undefined4 sub_0806FD70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xd) != '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) != '\0')) {
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_0801CF00(param_1,0x8d02);
    *(undefined *)(*(int *)(param_1 + 0xbc) + 0xbf) = 1;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0xbf) = 1;
    *(undefined4 *)(param_1 + 0x68) = 4;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08002B10(0x15f);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_0806fde8;
    sub_0801CF00(param_1,0x8d03);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806fde8:
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  if ((0 < iVar1) && (*(int *)(param_1 + 0xb8) < iVar2)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xbf) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0xc0) + 0xbf) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

