// sub_0800C990 at 0x0800C990 (thumb)

undefined4 sub_0800C990(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar1 == 0) {
    DAT_02022664 = uVar1;
    if ((DAT_02022adb & 2) != 0) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) + 1;
      DAT_02022690._0_2_ = 600;
    }
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    uVar1 = (uint)(ushort)DAT_02022690;
    DAT_02022690._0_2_ = (ushort)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x10000) >> 0x10 != -1) goto LAB_0800ca2e;
    DAT_0202268e = sub_08001EAC(0x51);
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x02') ||
       (DAT_02022664 = DAT_02022664 - 0x40, -0xa001 < (int)DAT_02022664)) goto LAB_0800ca2e;
    DAT_02022664 = 0xffff6000;
    sub_08001EE8((int)DAT_0202268e);
    DAT_0202268e = -1;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800ca2e:
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + ((int)DAT_02022664 >> 8);
  return in_lr;
}

