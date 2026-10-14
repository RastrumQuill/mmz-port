// sub_0806EE30 at 0x0806EE30 (thumb)

undefined4 sub_0806EE30(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1705);
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_080032EC(0xcc);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(byte *)(param_1 + 0x12) & 1) != 0) && (0x30 < *(byte *)(param_1 + 0x12))) {
    sub_080B3218(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

