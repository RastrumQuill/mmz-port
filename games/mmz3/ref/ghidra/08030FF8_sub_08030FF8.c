// sub_08030FF8 at 0x08030FF8 (thumb)

undefined4 sub_08030FF8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x127) = 2;
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x2e00);
    sub_08039D38(param_1,1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_08034558(param_1,0x2e00);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2e00) {
    sub_080177CC(param_1,0x2e00,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x127) = 0xff;
    sub_080177CC(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0xec) = 0;
  }
  return in_lr;
}

