// sub_080538B8 at 0x080538B8 (thumb)

undefined4 sub_080538B8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined *)(param_1 + 0x13) = 8;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      sub_080033F0(param_1 + 0x6c,0);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

