// sub_0800894C at 0x0800894C (thumb)

undefined8 sub_0800894C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x770fff < param_1)) || (0x4f5fff < param_2)) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = (uint)((*(ushort **)(*(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4) + 0x74))
                   [((uint)(byte)(&DAT_08312c8c)[param_2 >> 0xc] <<
                    (**(ushort **)(*(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4) + 0x74) &
                    0xff)) + (uint)(byte)(&DAT_0831348c)[param_1 >> 0xc] + 4] >> 0xc);
    if (uVar1 == 0xf) {
      uVar1 = 0xf0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

