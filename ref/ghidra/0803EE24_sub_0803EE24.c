// sub_0803EE24 at 0x0803EE24 (thumb)

undefined4 sub_0803EE24(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),5);
        sub_0800561C(param_1 + 0x74,&DAT_082adedc);
        sub_08029778(param_1,2);
        *(undefined *)(param_1 + 0x12) = 6;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 == '\0') {
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffc;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),3);
    sub_0800561C(param_1 + 0x74,&DAT_082adff4);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,0x1c);
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 200) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 2;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 200) == '\x10') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

