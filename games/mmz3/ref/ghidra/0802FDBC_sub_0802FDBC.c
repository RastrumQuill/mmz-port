// sub_0802FDBC at 0x0802FDBC (thumb)

undefined4 sub_0802FDBC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\x02') {
    bVar1 = *(byte *)(param_1 + 0x124);
    bVar2 = 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x124);
    bVar2 = 0x20;
  }
  *(byte *)(param_1 + 0x124) = bVar1 | bVar2;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835aed0 + (uint)*(byte *)(param_1 + 0xed) * 4));
  return in_lr;
}

