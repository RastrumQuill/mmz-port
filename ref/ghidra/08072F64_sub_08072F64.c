// sub_08072F64 at 0x08072F64 (thumb)

undefined4 sub_08072F64(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0808827C(1,param_1 + 0x4c);
  sub_08001EAC(2);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  sub_08099484(param_1,(uVar1 * 2 >> 0x11 & 0x3ff) - 0x1ff,0xfffffd00,8,0);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  sub_08099484(param_1,(uVar1 * 2 >> 0x11 & 0x3ff) - 0x1ff,0xfffffd00,9,0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

