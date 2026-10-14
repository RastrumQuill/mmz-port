// sub_0801484C at 0x0801484C (thumb)

undefined4 sub_0801484C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x14e) != 0) {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 0xf;
    if (uVar1 <= (*(ushort *)(param_1 + 0x14e) & 0xff)) {
      sub_0801412C(uVar1,&DAT_02022c7c);
    }
  }
  return in_lr;
}

