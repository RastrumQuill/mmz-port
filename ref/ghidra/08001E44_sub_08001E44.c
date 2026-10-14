// sub_08001E44 at 0x08001E44 (thumb)

undefined4 sub_08001E44(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08001E7C(param_1 & 0xffff);
  if (iVar1 != 0) {
    sub_080C7658((&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + (param_1 & 0xffff) * 8) * 3],6);
  }
  return in_lr;
}

