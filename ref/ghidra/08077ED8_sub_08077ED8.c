// sub_08077ED8 at 0x08077ED8 (thumb)

undefined4 sub_08077ED8(undefined4 *param_1,byte param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 7;
    *(undefined4 *)(iVar1 + 0x14) = 0x8077fc1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f8e;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe7;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    iVar2 = param_3 * (short)(&DAT_080c8e24)[param_2 + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar2 >> 8;
    param_3 = param_3 * (short)(&DAT_080c8e24)[param_2];
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_3 >> 8;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(byte *)(iVar1 + 0x12) = param_2;
  }
  return in_lr;
}

