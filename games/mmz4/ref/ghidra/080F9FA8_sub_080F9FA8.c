// sub_080F9FA8 at 0x080F9FA8 (thumb)

undefined4 sub_080F9FA8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8c03);
    sub_080CAAD0(param_1 + 100,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xbe) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

