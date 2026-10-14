// sub_08030030 at 0x08030030 (thumb)

undefined4 sub_08030030(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xee) == '\0') {
    if (*(short *)(param_1 + 0x13e) == 0x3900) {
      sub_080177CC(param_1,0x3901,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
      uVar1 = 2;
    }
    else {
      sub_080177CC(param_1,0x3c01,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0x135) = uVar1;
    *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
  }
  if (*(char *)(param_1 + 0x135) == '\x02') {
    *(undefined *)(param_1 + 0x126) = 0x13;
    sub_08034558(param_1,0x3901);
  }
  else {
    *(undefined *)(param_1 + 0x126) = 0x14;
    sub_08034558(param_1,0x3c01);
  }
  if (-1 < *(int *)(param_1 + 0x60)) {
    sub_080177CC(param_1,0x404,2,1);
    *(undefined *)(param_1 + 0xec) = 0;
    *(undefined *)(param_1 + 0x126) = 0xff;
  }
  return in_lr;
}

