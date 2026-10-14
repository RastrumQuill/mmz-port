// sub_080633DC at 0x080633DC (thumb)

undefined4 sub_080633DC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    iVar2 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
    if (iVar2 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080032EC(0x39);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

