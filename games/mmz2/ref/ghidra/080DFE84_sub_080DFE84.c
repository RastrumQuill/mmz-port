// sub_080DFE84 at 0x080DFE84 (thumb)

undefined4 sub_080DFE84(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  sub_0800404C();
  DAT_02000f96 = 0x4285;
  DAT_02000f98 = 0x485;
  DAT_02000fa0 = 0;
  DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x1300;
  sub_08002638(&DAT_08391490,0x4000);
  sub_08002AEC(&DAT_0839149c,0);
  sub_08002824(&DAT_083864a8,(DAT_02000f96 & 0x1f00) << 3,0x500);
  sub_08002880(0,(DAT_02000f96 & 0x1f00) << 3,0x1000);
  sub_08002880(0,(DAT_02000f98 & 0x1f00) * 8,0x800);
  sub_080DE1BC();
  *(byte *)(param_1 + 0x234) =
       (byte)((byte)((uint)-*(int *)(param_1 + 0x10) >> 0x18) |
             (byte)((uint)*(int *)(param_1 + 0x10) >> 0x18)) >> 7;
  *(undefined *)(param_1 + 0x235) = 0;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0;
  sub_08003264(0xc4);
  sub_080DFF78(param_1,param_2);
  return in_lr;
}

