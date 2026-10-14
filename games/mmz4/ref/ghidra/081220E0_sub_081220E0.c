// sub_081220E0 at 0x081220E0 (thumb)

undefined8 sub_081220E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(short *)(param_1 + 10) < 4) && ((DAT_02000766 & 0x80) != 0)) {
    sub_08002B10(1);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  }
  if ((0 < *(short *)(param_1 + 10)) && ((DAT_02000766 & 0x40) != 0)) {
    sub_08002B10(1);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  }
  sub_0810D214(&DAT_0886a17c,3,*(short *)(param_1 + 10) * 2 + 4);
  if ((DAT_02000764 & 2) != 0) {
    sub_08002B10(3);
    iVar1 = -2;
    goto LAB_081221c6;
  }
  if ((DAT_02000764 & 1) != 0) {
    if (*(char *)(param_1 + 0xdcd) != '\x01') {
LAB_08122190:
      if (*(char *)(param_1 + 0xdcd) == '\x02') {
        if (*(char *)(param_1 + 0xdd9 + (int)*(short *)(param_1 + 10)) == '\0') goto LAB_08122182;
      }
      sub_08002B10(2);
      iVar1 = (int)((*(byte *)(param_1 + 10) + 1) * 0x1000000) >> 0x18;
      goto LAB_081221c6;
    }
    if (*(char *)(param_1 + 0xdd9 + (int)*(short *)(param_1 + 10)) == '\x01') goto LAB_08122190;
LAB_08122182:
    sub_08002B10(4);
  }
  iVar1 = 0;
LAB_081221c6:
  return CONCAT44(in_lr,iVar1);
}

