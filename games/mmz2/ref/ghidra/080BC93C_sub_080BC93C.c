// sub_080BC93C at 0x080BC93C (thumb)

undefined4 sub_080BC93C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  if (*(char *)(param_1 + 0x11) == '\x04') {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if ((cVar2 == -1) ||
     (sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BC818(param_1);
  }
  return in_lr;
}

