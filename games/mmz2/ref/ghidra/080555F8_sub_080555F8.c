// sub_080555F8 at 0x080555F8 (thumb)

undefined4 sub_080555F8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa62e);
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080032EC(0x97);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd0) = 1;
    sub_080573FC(param_1);
  }
  return in_lr;
}

