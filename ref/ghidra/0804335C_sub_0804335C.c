// sub_0804335C at 0x0804335C (thumb)

undefined4 sub_0804335C(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  
  cVar2 = sub_08042DE4();
  if (cVar2 != '\0') {
    return in_lr;
  }
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        sub_08029778(param_1,0);
        sub_0800561C(param_1 + 0x74,&DAT_082ae55c);
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,9);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

