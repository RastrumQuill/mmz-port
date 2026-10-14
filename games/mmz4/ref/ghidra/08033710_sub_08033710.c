// sub_08033710 at 0x08033710 (thumb)

undefined4 sub_08033710(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x153);
  if ((*pbVar3 & 1) != 0) {
    *(undefined *)(param_1 + 0x101) = 4;
  }
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 10;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 10 | bVar2;
  sub_08128884(param_1,*(undefined4 *)(&UNK_0884fb3c + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

