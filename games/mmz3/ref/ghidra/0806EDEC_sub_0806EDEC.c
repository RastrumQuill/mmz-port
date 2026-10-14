// sub_0806EDEC at 0x0806EDEC (thumb)

undefined4 sub_0806EDEC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x10;
        if (*(char *)(param_1 + 0x10) == '\x01') {
          sub_080177CC(param_1,0x1d09,1,8);
        }
        if (*(char *)(param_1 + 0x10) == '\x03') {
          sub_080177CC(param_1,0x1d0f,1,8);
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
        sub_080177F4(param_1);
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xbd) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 8;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08017700(param_1,0x1d08);
    }
    if (*(char *)(param_1 + 0x10) == '\x03') {
      sub_08017700(param_1,0x1d0e);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
    sub_080177F4(param_1);
  }
  return in_lr;
}

