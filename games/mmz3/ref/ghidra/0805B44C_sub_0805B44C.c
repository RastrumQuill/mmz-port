// sub_0805B44C at 0x0805B44C (thumb)

undefined4 sub_0805B44C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_0805b488;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805b488:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

