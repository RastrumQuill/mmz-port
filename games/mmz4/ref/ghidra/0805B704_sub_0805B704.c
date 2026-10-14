// sub_0805B704 at 0x0805B704 (thumb)

undefined4 sub_0805B704(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 < -0x400) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
  }
  if ((0x14000 < (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x58)) + 0x5001U) &&
     ((*(undefined *)(param_1 + 0x12) = 0, *(int *)(param_1 + 200) == 0 ||
      (*(char *)(param_1 + 0xbf) != '\x01')))) {
    sub_0805C13C(param_1);
  }
  return in_lr;
}

