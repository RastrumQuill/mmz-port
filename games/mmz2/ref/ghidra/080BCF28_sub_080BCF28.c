// sub_080BCF28 at 0x080BCF28 (thumb)

undefined4 sub_080BCF28(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_080128D4(param_1);
    iVar4 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar4 + -0x2c0;
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (bVar1 == 0) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if ((*(char *)(param_1 + 0xd) == '\x01') &&
            (sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4 + -0xac0), sVar3 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BCD00(param_1);
  }
  return in_lr;
}

