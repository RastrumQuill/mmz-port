// sub_08059F54 at 0x08059F54 (thumb)

undefined4 sub_08059F54(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08059ffa;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0xdfff;
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff8;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + -0x1000;
    *(undefined4 *)(param_1 + 100) = 0x4100;
    *(undefined *)(param_1 + 0x12) = 0x41;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08059ffa:
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  return in_lr;
}

