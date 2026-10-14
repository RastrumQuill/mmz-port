// sub_080B159C at 0x080B159C (thumb)

undefined4 sub_080B159C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xbb01);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x71) == '\x03')) {
    sub_08005784(param_1 + 0x74,&DAT_0885ff64);
  }
  cVar1 = sub_080B16D0(param_1);
  if (cVar1 == '\0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\x01') {
    sub_080CE30C(param_1 + 0x54,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08002B10(0x2d);
    uVar2 = 0xbb03;
LAB_080b1624:
    sub_0801CF00(param_1,uVar2);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        cVar1 = '\0';
        *(undefined *)(param_1 + 0xd) = 0;
        goto LAB_080b163a;
      }
      uVar2 = 0xbb02;
      goto LAB_080b1624;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b163a:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

