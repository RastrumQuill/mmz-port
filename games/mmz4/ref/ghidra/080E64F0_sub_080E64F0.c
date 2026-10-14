// sub_080E64F0 at 0x080E64F0 (thumb)

undefined4 sub_080E64F0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(byte *)(param_1 + 0x12) < 0x28) {
    pcVar2 = (char *)(param_1 + 0x74);
    if (*pcVar2 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *pcVar2 = '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *pcVar2 = '\0';
    }
  }
  cVar1 = sub_080E65C8(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

