// sub_0806EE9C at 0x0806EE9C (thumb)

undefined4 sub_0806EE9C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1703);
    sub_0809BAE0(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0xcd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0xbd) + 1;
    *(byte *)(param_1 + 0xbd) = bVar1;
    if (7 < bVar1) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xf) = 6;
      *(undefined *)(param_1 + 0x12) = 0x78;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

