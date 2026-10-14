// sub_08030408 at 0x08030408 (thumb)

undefined4 sub_08030408(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x127) = 1;
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x2c00);
    sub_08039D38(param_1,0);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_08034558(param_1,0x2c00);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2c00) {
    sub_080177CC(param_1,0x2c00,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x127) = 0xff;
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_080177CC(param_1,0x403,2,1);
    }
    else {
      sub_080177CC(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0xec) = 0;
  }
  return in_lr;
}

