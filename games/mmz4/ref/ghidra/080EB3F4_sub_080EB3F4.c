// sub_080EB3F4 at 0x080EB3F4 (thumb)

undefined4 sub_080EB3F4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0886616c);
    sub_0801CF00(param_1,0xaf04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08002B10(0x181);
    sub_0801CF00(param_1,0xaf03);
    DAT_0202dada._1_1_ = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

