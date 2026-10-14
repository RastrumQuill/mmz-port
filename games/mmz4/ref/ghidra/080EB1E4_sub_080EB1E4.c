// sub_080EB1E4 at 0x080EB1E4 (thumb)

undefined4 sub_080EB1E4(int param_1)

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
      sub_0801CFF0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      goto LAB_080eb272;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088661a0 + (uint)*(byte *)(param_1 + 0x10) * 8));
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  sub_08002B10(*(undefined2 *)(&DAT_088661de + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_088661a2 + (uint)*(byte *)(param_1 + 0x10) * 8));
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080eb272:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

