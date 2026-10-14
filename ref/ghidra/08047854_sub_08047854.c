// sub_08047854 at 0x08047854 (thumb)

undefined4 sub_08047854(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xb);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08001EAC(0xb8);
  }
  sub_080297C0(param_1);
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (4 < bVar2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

