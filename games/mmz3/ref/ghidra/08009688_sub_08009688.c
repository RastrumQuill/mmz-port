// sub_08009688 at 0x08009688 (thumb)

undefined8 sub_08009688(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x770fff < param_1)) || (0x4f5fff < param_2)) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = (uint)((*(ushort **)(*(int *)(&DAT_08336ac0 + (DAT_02002650 & 0x7f) * 4) + 0x74))
                   [((uint)(byte)(&DAT_083356c0)[param_2 >> 0xc] <<
                    (**(ushort **)(*(int *)(&DAT_08336ac0 + (DAT_02002650 & 0x7f) * 4) + 0x74) &
                    0xff)) + (uint)(byte)(&DAT_08335ec0)[param_1 >> 0xc] + 4] >> 0xc);
    if (uVar1 == 0xf) {
      uVar1 = 0xf0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

