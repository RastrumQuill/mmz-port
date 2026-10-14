// sub_08034CB4 at 0x08034CB4 (thumb)

undefined4 sub_08034CB4(int param_1)

{
  short sVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = *(byte *)(param_1 + 0x153);
    bVar4 = 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x153);
    bVar4 = 0x20;
  }
  *(byte *)(param_1 + 0x153) = bVar2 | bVar4;
  sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (sVar1 != 0x901) {
    if (sVar1 == 0x900) {
      sub_0801CFC8(param_1,0x901,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801CFC8(param_1,0x901,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x03') {
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x154) != '\x02') {
      return in_lr;
    }
    uVar3 = 1;
  }
  *(undefined *)(param_1 + 0x101) = uVar3;
  return in_lr;
}

