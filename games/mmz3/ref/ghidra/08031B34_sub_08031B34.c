// sub_08031B34 at 0x08031B34 (thumb)

undefined4 sub_08031B34(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x03') || (*(char *)(param_1 + 0xc1) == '\x03')) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 3;
    if ((*(uint *)(param_1 + 0x218) & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    if ((*(uint *)(param_1 + 0x218) & 0x20) != 0) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835affc + (uint)*(byte *)(param_1 + 0xed) * 4));
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_08031b90;
    }
    uVar1 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_08031b90;
    }
    uVar1 = 0x705;
  }
  sub_080177CC(param_1,uVar1,1,1);
LAB_08031b90:
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

