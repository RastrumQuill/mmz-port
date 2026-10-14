// sub_08089508 at 0x08089508 (thumb)

undefined4 sub_08089508(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) + 0x1f06);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885bc08 + (uint)(byte)(&DAT_0885bd70)[*(byte *)(param_1 + 0xc0)] * 0x18);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = sub_08128A9C(*(undefined *)(param_1 + 0x12),6);
  if (cVar1 == '\0') {
    if ((DAT_0202cac0 & 0xf) == 1) {
      sub_080BDE5C(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,1);
    }
    else {
      sub_080BDE5C(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,3);
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    sub_08002B10(0x13c);
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

