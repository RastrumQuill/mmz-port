// sub_080B765C at 0x080B765C (thumb)

undefined4 sub_080B765C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 7) {
    if ((bVar1 & 3) < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if ((bVar1 & 3) < 2) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x74);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x7c);
      uVar2 = *(undefined4 *)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  if (*(char *)(param_1 + 0x12) == '\b') {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar3 + 0x58);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x28 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

