// sub_08066C20 at 0x08066C20 (thumb)

undefined4 sub_08066C20(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa913);
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa916);
    sub_08002B10(0x5e);
    *(undefined *)(param_1 + 0x12) = 0x50;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if ((*(char *)(param_1 + 0x73) == '\x03') &&
         (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x56ff)) {
        sub_0801CF00(param_1);
      }
      bVar1 = DAT_0202e922 & 1;
      if ((DAT_0202e922 & 1) != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa917);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

