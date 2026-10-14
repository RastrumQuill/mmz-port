// sub_080686E8 at 0x080686E8 (thumb)

undefined4 sub_080686E8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa91d);
    sub_08005784(param_1 + 0x74,&DAT_08857cc0);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    if ((uVar1 * 2 >> 0x11 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xd;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

