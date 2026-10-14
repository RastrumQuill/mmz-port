// sub_08112548 at 0x08112548 (thumb)

undefined4 sub_08112548(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x625e) = 0;
  DAT_020359bc = &DAT_02036600;
  DAT_020359b8 = &DAT_02036600;
  *(undefined2 *)(param_1 + 0x6260) = 1;
  *(undefined2 *)(param_1 + 0x625c) = 0;
  pbVar1 = (byte *)(param_1 + 0x6270);
  sub_0801E8D8(pbVar1);
  sub_0801E944(param_1 + 0x6300);
  sub_081087BC(param_1 + 0x62b8);
  sub_08108900(param_1 + 0x62f0);
  iVar2 = param_1 + 0x6348;
  sub_08038040(iVar2);
  if (DAT_0202f605 == '\x02') {
    *(undefined2 *)(param_1 + 0x625e) = 1;
    *pbVar1 = *pbVar1 | 1;
    sub_080380F8(iVar2);
  }
  else if (DAT_0202f605 == '\x03') {
    *(undefined2 *)(param_1 + 0x625e) = 2;
    *pbVar1 = *pbVar1 | 2;
    sub_08038100(iVar2);
  }
  else if (DAT_0202f605 == '\0') {
    *(undefined2 *)(param_1 + 0x625e) = 3;
    *pbVar1 = *pbVar1 | 4;
    sub_08038108(iVar2);
  }
  sub_0801F124(*(undefined *)(param_1 + 0x6260));
  sub_08112080(param_1,0x300);
  return in_lr;
}

