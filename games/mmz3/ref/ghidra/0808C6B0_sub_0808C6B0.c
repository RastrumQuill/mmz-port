// sub_0808C6B0 at 0x0808C6B0 (thumb)

undefined4 sub_0808C6B0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x12) * '\f' + '\x18';
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar3;
      if (cVar3 == '\0') {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08365738);
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(char *)(param_1 + 0x13) = ('\x02' - *(char *)(param_1 + 0x12)) * '\b' + '\x10';
    sub_08017700(param_1,0x7200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x300;
  sub_080177F4(param_1);
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

