// sub_080F9F50 at 0x080F9F50 (thumb)

undefined4 sub_080F9F50(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8c02);
    sub_080CAAD0(param_1 + 100,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

