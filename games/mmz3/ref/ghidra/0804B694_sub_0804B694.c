// sub_0804B694 at 0x0804B694 (thumb)

undefined4 sub_0804B694(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      goto LAB_0804b6f0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08017700(param_1,0xa808);
    sub_0800471C(0x83);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_0804b6f0:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

