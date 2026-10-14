// sub_08128544 at 0x08128544 (thumb)

undefined4 sub_08128544(undefined4 param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_04000208;
  DAT_04000208 = 0;
  uVar1 = DAT_04000204;
  DAT_04000204 = uVar1 & 0xf8ff | *(ushort *)(DAT_0203d7b0 + 6);
  DAT_040000d4 = param_1;
  DAT_040000d8 = param_2;
  DAT_040000dc = param_3 & 0xffff | 0x80000000;
  uVar1 = DAT_040000dc._2_2_;
  while ((uVar1 & 0x8000) != 0) {
    uVar1 = DAT_040000dc._2_2_;
  }
  DAT_04000208 = uVar2;
  return in_lr;
}

