// sub_080F7FE0 at 0x080F7FE0 (thumb)

undefined4 sub_080F7FE0(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xdc4) = ((ushort)DAT_020023d0 & 0x1ff) * 0x100 + 0x7800;
  param_1 = param_1 + 0xbac;
  sub_0800507C(param_1);
  sub_08016FB4(DAT_02030640);
  sub_0801713C(DAT_02030640,param_1);
  sub_0800502C(param_1);
  return in_lr;
}

