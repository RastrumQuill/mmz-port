// sub_080E010C at 0x080E010C (thumb)

undefined4 sub_080E010C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E014C(param_1);
  }
  return in_lr;
}

