// sub_080C58C4 at 0x080C58C4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080C58C4(int param_1)

{
  int iVar1;
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
  iVar1 = param_1 + 0xaec;
  local_18[0] = 0;
  FUN_080c88ec(local_18,iVar1,0x1000400);
  FUN_080c88ec(&DAT_082e40cc,iVar1,0x140);
  *(int *)(param_1 + 0x9e0) = iVar1;
  return in_lr;
}

