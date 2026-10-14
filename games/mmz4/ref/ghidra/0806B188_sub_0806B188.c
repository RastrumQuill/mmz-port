// sub_0806B188 at 0x0806B188 (thumb)

undefined4 sub_0806B188(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x55ff) {
      sub_0801CF00(param_1);
    }
    if (DAT_0202e910 == 8) {
      sub_08002B10(0xc4);
    }
    else {
      sub_08002B10(0xc5);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

