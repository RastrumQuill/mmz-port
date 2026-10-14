// sub_08007770 at 0x08007770 (thumb)

undefined8 sub_08007770(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000c80 & 0x7f) == 4) {
    iVar2 = *(int *)(&DAT_088290b0 + (uint)(DAT_0202cac0 >> 4) * 4);
    param_1 = sub_08128954(param_1 + -0xf000,0x3c000);
    param_1 = param_1 + 0xf000;
  }
  else {
    if ((((param_1 < 0) || (param_2 < 0)) || (0x770fff < param_1)) || (0x4f5fff < param_2)) {
      uVar1 = 0xf;
      goto LAB_0800781a;
    }
    iVar2 = *(int *)(&DAT_08829090 + (uint)(DAT_0202cac0 >> 4) * 4 + (DAT_02000c80 & 0x7f) * 8);
  }
  uVar1 = (uint)((*(ushort **)(iVar2 + 0x74))
                 [((uint)(byte)(&DAT_08827c90)[param_2 >> 0xc] <<
                  (**(ushort **)(iVar2 + 0x74) & 0xff)) +
                  (uint)(byte)(&DAT_08828490)[param_1 >> 0xc] + 4] >> 0xc);
  if (uVar1 == 0xf) {
    uVar1 = 0xf0;
  }
LAB_0800781a:
  return CONCAT44(in_lr,uVar1);
}

