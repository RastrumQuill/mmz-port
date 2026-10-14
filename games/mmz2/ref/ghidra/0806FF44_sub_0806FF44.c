// sub_0806FF44 at 0x0806FF44 (thumb)

undefined4 sub_0806FF44(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1800);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0x1200;
    }
    else {
      local_14 = -0x1200;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58) + -0x1600;
    sub_080AC60C(3,&local_14);
  }
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    cVar1 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

