// sub_08051A44 at 0x08051A44 (thumb)

undefined4 sub_08051A44(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08854a38);
    sub_0801CF00(param_1,0xa105);
    sub_08002B10(0xe6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 0x1f;
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    if (uVar2 < 8) {
      uVar1 = 2;
    }
    else {
      if (uVar2 < 0x16) goto LAB_08051ad0;
      uVar1 = 4;
    }
  }
  else {
    if (0xf < uVar2) {
LAB_08051ad0:
      *(undefined *)(param_1 + 0xd6) = 3;
      goto LAB_08051ae0;
    }
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xd6) = uVar1;
LAB_08051ae0:
  *(undefined *)(param_1 + 0xd) = 0xe;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

