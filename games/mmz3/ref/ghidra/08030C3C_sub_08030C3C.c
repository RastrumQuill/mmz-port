// sub_08030C3C at 0x08030C3C (thumb)

undefined4 sub_08030C3C(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 0x11;
  pcVar1 = (char *)(param_1 + 0xee);
  if (*pcVar1 == '\0') {
    sub_08017700(param_1,0x3d00);
    sub_0803964C(param_1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    sub_08034558(param_1,0x3d00);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x3d00) {
      sub_080177CC(param_1,0x3d00,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080177CC(param_1,0x500,4,1);
      *(undefined *)(param_1 + 0xec) = 0;
      *(undefined *)(param_1 + 0x126) = 0xff;
    }
  }
  return in_lr;
}

