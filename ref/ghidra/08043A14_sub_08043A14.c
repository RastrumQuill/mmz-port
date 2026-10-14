// sub_08043A14 at 0x08043A14 (thumb)

undefined4 sub_08043A14(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0x13);
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54) / 2;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  sub_08042AFC(param_1,0,1);
  sub_08042AFC(param_1,1,1);
  bVar1 = sub_08042CE8(param_1,0,1);
  bVar2 = *(byte *)(short *)(param_1 + 0xe0);
  if ((bVar1 != bVar2) && (bVar1 < bVar2)) {
    sub_080429D4(param_1,0);
  }
  bVar2 = sub_08042CE8(param_1,1,1);
  if ((bVar2 != *(byte *)(param_1 + 0xe1)) && (bVar2 < *(byte *)(param_1 + 0xe1))) {
    sub_080429D4(param_1,1);
  }
  sub_08042C24(param_1,0,1);
  sub_08042C24(param_1,1,1);
  uVar3 = sub_080426A0(param_1);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(short *)(param_1 + 0xe0) == 0) {
      sub_0808588C(*(undefined4 *)(param_1 + 0xc0));
      sub_0808588C(*(undefined4 *)(param_1 + 0xc4));
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

