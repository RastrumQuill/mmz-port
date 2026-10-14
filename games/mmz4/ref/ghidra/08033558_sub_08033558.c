// sub_08033558 at 0x08033558 (thumb)

undefined4 sub_08033558(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = 0x20;
  }
  *(byte *)(param_1 + 0x153) = bVar1 | bVar2;
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    sub_0801CF00(param_1,0xb03);
  }
  else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xb03) {
    sub_0801CFC8(param_1,0x801,0,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined *)(param_1 + 0x101) = 2;
  }
  return in_lr;
}

