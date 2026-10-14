// sub_080F9EEC at 0x080F9EEC (thumb)

undefined4 sub_080F9EEC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8c01);
    sub_080CAAD0(param_1 + 100,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x100;
    sub_08002B10(0x179);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

