// sub_080A7DD0 at 0x080A7DD0 (thumb)

undefined4 sub_080A7DD0(int param_1)

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
      sub_0809C980(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_08001EAC(0xcb);
      DAT_02022864 = 0;
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080a7e3c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  sub_0809C930(param_1,4);
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a7e3c:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

