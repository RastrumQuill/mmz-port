// sub_08048098 at 0x08048098 (thumb)

undefined4 sub_08048098(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_080480f6;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080032EC(0x55);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0x10;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080480f6:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

