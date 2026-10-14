// sub_080460B0 at 0x080460B0 (thumb)

undefined4 sub_080460B0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa011);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x4f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (4 < bVar1) {
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xc1) = 1;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}

