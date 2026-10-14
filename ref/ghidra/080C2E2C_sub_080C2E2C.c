// sub_080C2E2C at 0x080C2E2C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080C2E2C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x1300;
  DAT_02004f36 = 0x4206;
  _DAT_02004f40 = 0;
  sub_080014E8(&DAT_082f1014,0x4000);
  sub_0800179C(&DAT_082f1020,0);
  *(undefined4 *)(param_1 + 0xae0) = 0xc;
  *(uint *)(param_1 + 0xae4) = *(uint *)(param_1 + 0xae4) & 0xffc00000 | 0x1000;
  *(ushort *)(param_1 + 0xae6) = *(ushort *)(param_1 + 0xae6) & 0x3f;
  local_18[0] = 0;
  FUN_080c88ec(local_18,param_1 + 0xaec,0x1000400);
  return in_lr;
}

