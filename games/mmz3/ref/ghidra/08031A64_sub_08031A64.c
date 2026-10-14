// sub_08031A64 at 0x08031A64 (thumb)

undefined4 sub_08031A64(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 0x12;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x3e00);
    sub_0803964C(param_1);
    *pcVar2 = *pcVar2 + '\x01';
    return in_lr;
  }
  sub_08034558(param_1,0x3e00);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x3e00) {
    sub_080177CC(param_1,0x3e00,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_08031b20;
    }
    uVar1 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_08031b20;
    }
    uVar1 = 0x705;
  }
  sub_080177CC(param_1,uVar1,1,1);
LAB_08031b20:
  *(undefined *)(param_1 + 0x126) = 0xff;
  return in_lr;
}

