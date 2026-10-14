// sub_0802DC88 at 0x0802DC88 (thumb)

undefined4 sub_0802DC88(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x124);
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 1;
  if (*(char *)(param_1 + 0xc0) == '\x02') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 1 | bVar2;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ada4 + (uint)*(byte *)(param_1 + 0xed) * 4));
  return in_lr;
}

