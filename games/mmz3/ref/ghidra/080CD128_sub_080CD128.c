// sub_080CD128 at 0x080CD128 (thumb)

undefined4 sub_080CD128(int param_1)

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
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      goto LAB_080cd1ca;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c890 + (uint)*(byte *)(param_1 + 0x10) * 8));
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    sub_0800471C(0x111);
  }
  else {
    sub_0800471C(0x149);
  }
  sub_08017700(param_1,*(undefined2 *)(&DAT_0836c892 + (uint)*(byte *)(param_1 + 0x10) * 8));
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080cd1ca:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

