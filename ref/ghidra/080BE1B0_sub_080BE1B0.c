// sub_080BE1B0 at 0x080BE1B0 (thumb)

undefined4 sub_080BE1B0(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  iVar2 = 0xf;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = (ushort)(param_3 * (uVar1 & 0x1f) >> 8) |
               (ushort)((param_3 * (uVar1 >> 5 & 0x1f) >> 8) << 5) |
               (ushort)((param_3 * (uVar1 >> 10 & 0x1f) >> 8) << 10);
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

