// sub_08003BE0 at 0x08003BE0 (thumb)

undefined4 sub_08003BE0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined local_c [4];
  
  DAT_02002248 = param_1;
  DAT_0200224c = param_2;
  DAT_02002244 = param_3;
  DAT_02002250 = param_4 & 0xffff | param_4 << 0x10;
  DAT_040000d4 = local_c;
  DAT_040000d8 = param_1;
  DAT_040000dc = param_3 >> 2 | 0x85000000;
  uVar1 = DAT_040000dc;
  return in_lr;
}

