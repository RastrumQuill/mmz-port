// sub_08030D10 at 0x08030D10 (thumb)

undefined4 sub_08030D10(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(undefined *)(param_1 + 0xc1) = 3;
  }
  sub_080297C0(param_1);
  pbVar2 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar2] * 4 + 0x2800
  ;
  *pbVar2 = *pbVar2 + 2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

