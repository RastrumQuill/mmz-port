// sub_08112640 at 0x08112640 (thumb)

undefined4 sub_08112640(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x6260) = 0x11;
  DAT_020359bc = &DAT_02036600;
  DAT_020359b8 = &DAT_02036600;
  sub_0801E8D8(param_1 + 0x6270);
  sub_0801E944(param_1 + 0x6300);
  sub_081087BC(param_1 + 0x62b8);
  sub_08108900(param_1 + 0x62f0);
  sub_08038040(param_1 + 0x6348);
  sub_0801F134(*(undefined *)(undefined2 *)(param_1 + 0x6260),1);
  uVar1 = DAT_0202ea78;
  *(uint *)(param_1 + 0xdd0) = DAT_0202ea78;
  if (uVar1 != 0xffffffff) {
    sub_08002A98(uVar1 & 0xffff);
    DAT_0202ea78 = 0xffffffff;
  }
  *(undefined *)(param_1 + 0xdcd) = 1;
  *(undefined4 *)(param_1 + 0xdd4) = 0xffffffff;
  sub_08112080(param_1,5);
  return in_lr;
}

