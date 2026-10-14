// sub_080442E8 at 0x080442E8 (thumb)

undefined4 sub_080442E8(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0x10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = -*(char *)(param_1 + 0x12) * 0x30;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  cVar1 = *(char *)(param_1 + 0x12) + (char)((uint)iVar4 >> 8);
  *(char *)(param_1 + 0x1f) = cVar1;
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(*(int *)(param_1 + 0xc0) + 0x13) = cVar1;
  *(char *)(*(int *)(param_1 + 0xc4) + 0x13) = cVar1;
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  sub_08042AFC(param_1,0,4);
  sub_08042AFC(param_1,1,4);
  bVar2 = sub_08042CE8(param_1,0,4);
  bVar3 = *(byte *)(short *)(param_1 + 0xe0);
  if ((bVar2 != bVar3) && (bVar2 < bVar3)) {
    sub_080429D4(param_1,0);
  }
  bVar3 = sub_08042CE8(param_1,1,4);
  if ((bVar3 != *(byte *)(param_1 + 0xe1)) && (bVar3 < *(byte *)(param_1 + 0xe1))) {
    sub_080429D4(param_1,1);
  }
  sub_08042C24(param_1,0,4);
  sub_08042C24(param_1,1,4);
  uVar5 = sub_0804276C(param_1);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(short *)(param_1 + 0xe0) == 0) {
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
      sub_0808588C(*(int *)(param_1 + 0xc0));
      sub_0808588C(*(int *)(param_1 + 0xc4));
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1400;
      sub_080435CC(param_1);
      return in_lr;
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

