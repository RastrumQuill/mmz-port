// sub_080AFC94 at 0x080AFC94 (thumb)

undefined4 sub_080AFC94(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) goto LAB_080afd3e;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080afce8:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    sub_080177F4(param_1);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x05') {
      return in_lr;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_0801749C(param_1);
      sub_080176EC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      *(undefined *)(param_1 + 0x25) = 0x11;
      *(undefined *)(param_1 + 0x12) = 0;
      sub_08017700(param_1,0xb900);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080afce8;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    sub_080177F4(param_1);
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
LAB_080afd3e:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

