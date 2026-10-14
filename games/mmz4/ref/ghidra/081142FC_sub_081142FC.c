// sub_081142FC at 0x081142FC (thumb)

undefined4 sub_081142FC(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x625e) = 0;
  DAT_020359bc = &DAT_02036600;
  DAT_020359b8 = &DAT_02036600;
  pbVar2 = (byte *)(param_1 + 0x6270);
  sub_0801E8D8(pbVar2);
  sub_0801E944(param_1 + 0x6300);
  sub_081087BC(param_1 + 0x62b8);
  sub_08108900(param_1 + 0x62f0);
  sub_08038040(param_1 + 0x6348);
  DAT_0202e8b4 = DAT_0202e8b4 | 0x40;
  *pbVar2 = *pbVar2 | 0x40;
  *(undefined2 *)(param_1 + 0x6368) = 1;
  *(undefined2 *)(param_1 + 0x636a) = 0x200;
  *(undefined2 *)(param_1 + 0x636c) = 2;
  *(undefined2 *)(param_1 + 0x636e) = 0x100;
  *(undefined *)(param_1 + 0x6372) = 0;
  *(undefined *)(param_1 + 0x6373) = 1;
  *(undefined *)(param_1 + 0x6374) = 0;
  sVar1 = *(short *)(param_1 + 0x6260);
  if (sVar1 == 3) {
    DAT_02035964 = 2;
    DAT_02035965 = 0;
    DAT_0202cac0 = 3;
  }
  else if (sVar1 == 4) {
    DAT_02035964 = 0;
    DAT_02035965 = 1;
    DAT_0202cac0 = 0x12;
  }
  else if (sVar1 == 5) {
    DAT_02035964 = 2;
    DAT_02035965 = 1;
    DAT_0202cac0 = 0x13;
  }
  else {
    DAT_02035964 = 2;
    DAT_02035965 = 0;
    DAT_0202cac0 = 0x10;
  }
  sub_0801F124(*(undefined *)(param_1 + 0x6260));
  sub_08112080(param_1,0x300);
  return in_lr;
}

