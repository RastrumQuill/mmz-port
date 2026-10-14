// sub_08027118 at 0x08027118 (thumb)

longlong sub_08027118(int param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  uint in_lr;
  
  iVar1 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0x234) = 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  uVar2 = sub_08009AC0(iVar1,*(undefined4 *)(param_1 + 0x58));
  if (((uVar2 & 0xf) < 2) &&
     (iVar1 = sub_08009BE4(iVar1,*(undefined4 *)(param_1 + 0x58)), iVar1 < 0)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0x234) = 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + (int)*param_2 +
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
            ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  uVar2 = sub_08009AC0(iVar1,*(undefined4 *)(param_1 + 0x58));
  if (((uVar2 & 0xf) < 2) &&
     (iVar1 = sub_08009BE4(iVar1,*(undefined4 *)(param_1 + 0x58)), iVar1 < 0)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0x234) = 0x10;
  }
  return (ulonglong)in_lr << 0x20;
}

