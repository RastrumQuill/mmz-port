// sub_0802F8E4 at 0x0802F8E4 (thumb)

undefined4 sub_0802F8E4(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x124);
  if ((*pbVar3 & 0x40) != 0) {
    *(undefined *)(param_1 + 0xed) = 4;
  }
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 4;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 4 | bVar2;
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835aeb0 + (uint)*(byte *)(param_1 + 0xed) * 4));
  return in_lr;
}

