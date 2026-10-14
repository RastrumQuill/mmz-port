// sub_08034C00 at 0x08034C00 (thumb)

undefined4 sub_08034C00(int param_1)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = *(byte *)(param_1 + 0x153);
    bVar3 = 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x153);
    bVar3 = 0x20;
  }
  *(byte *)(param_1 + 0x153) = bVar2 | bVar3;
  sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (sVar1 != 0x900) {
    if (sVar1 == 0x901) {
      sub_0801CFC8(param_1,0x900,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801CFC8(param_1,0x900,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    sub_0801CFC8(param_1,0x901,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x101) = 2;
  }
  return in_lr;
}

