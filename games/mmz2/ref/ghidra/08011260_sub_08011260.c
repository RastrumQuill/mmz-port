// sub_08011260 at 0x08011260 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08011260(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 1;
    DAT_0202e758 = 0x340;
    DAT_0202e558 = 9;
    _DAT_0202e03c = (uint)bVar1;
    DAT_0202e040._0_1_ = bVar1;
    sub_08002638(&DAT_08433ed0,0x12600);
    sub_08002AEC(&DAT_08433edc,(DAT_0202e558 - 6) * 0x20 + 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (_DAT_0202e03c == 0) {
    _DAT_0202e03c = sub_080D3FD0(2);
  }
  return in_lr;
}

