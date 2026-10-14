// sub_08032114 at 0x08032114 (thumb)

undefined4 sub_08032114(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x127) = 3;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x3000);
    sub_08039D38(param_1,1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_08034558(param_1,0x3000);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x3000) {
    sub_080177CC(param_1,0x3000,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x127) = 0xff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_080321d0;
    }
    uVar1 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_080321d0;
    }
    uVar1 = 0x705;
  }
  sub_080177CC(param_1,uVar1,1,1);
LAB_080321d0:
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

