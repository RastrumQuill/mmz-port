// sub_0801BC68 at 0x0801BC68 (thumb)

undefined4 sub_0801BC68(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_0801BC08(param_1,1,1,1,1,*(char *)(param_1 + 0x219) == '\x01');
  bVar1 = *(byte *)(param_1 + 0x95);
  if ((uint)bVar1 < (uint)(iVar2 * 0x18)) {
    bVar1 = 0;
  }
  else {
    bVar1 = bVar1 + (char)iVar2 * -0x18;
  }
  *(byte *)(param_1 + 0x95) = bVar1;
  return in_lr;
}

