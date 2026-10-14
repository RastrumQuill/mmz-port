// sub_0800F664 at 0x0800F664 (thumb)

void sub_0800F664(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0xffff) < 0x41) &&
     (uVar1 = (uint)DAT_02022b2e + (param_1 & 0xffff), uVar1 < 10000)) {
    DAT_02022b2e = (ushort)uVar1;
  }
  return;
}

