// sub_08037CF0 at 0x08037CF0 (thumb)

undefined4 sub_08037CF0(int param_1)

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
  sub_0801CFC8(param_1,0xd01,0,2);
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined *)(param_1 + 0x101) = 2;
  }
  return in_lr;
}

