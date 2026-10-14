// sub_08034E04 at 0x08034E04 (thumb)

undefined4 sub_08034E04(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x153);
  if ((*pbVar3 & 1) == 0) {
    bVar2 = *pbVar3 | 8;
    *pbVar3 = bVar2;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      bVar1 = 0x10;
    }
    else {
      bVar1 = 0x20;
    }
    *pbVar3 = bVar2 | bVar1;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fc18 + (uint)*(byte *)(param_1 + 0x101) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08033710(param_1);
  }
  return in_lr;
}

