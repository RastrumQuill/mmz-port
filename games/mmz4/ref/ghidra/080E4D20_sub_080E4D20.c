// sub_080E4D20 at 0x080E4D20 (thumb)

undefined4 sub_080E4D20(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x13) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 | 1;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 == 10) {
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    else if (bVar2 < 3) {
      *(undefined *)(param_1 + 0x13) = 2;
    }
    else if (bVar2 < 5) {
      *(undefined *)(param_1 + 0x13) = 3;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 4;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  return in_lr;
}

