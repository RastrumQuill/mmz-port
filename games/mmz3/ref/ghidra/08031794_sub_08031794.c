// sub_08031794 at 0x08031794 (thumb)

undefined4 sub_08031794(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\x02') {
    bVar2 = *(byte *)(param_1 + 0x124);
    bVar3 = 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x124);
    bVar3 = 0x20;
  }
  pbVar1 = (byte *)(param_1 + 0x124);
  *pbVar1 = bVar2 | bVar3;
  *pbVar1 = *pbVar1 | 1;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835afd0 + (uint)*(byte *)(param_1 + 0xed) * 4));
  return in_lr;
}

