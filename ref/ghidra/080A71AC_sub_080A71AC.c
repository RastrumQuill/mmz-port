// sub_080A71AC at 0x080A71AC (thumb)

undefined4 sub_080A71AC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (((uint)(*(int *)(iVar2 + 0x4c) - *(int *)(param_2 + 8)) < 0xf801) &&
       (-0xa801 < *(int *)(iVar2 + 0x50) - *(int *)(param_2 + 0xc))) {
      if (*(char *)(iVar2 + 0xe) == '\0') {
        *(undefined *)(iVar2 + 0xe) = 1;
      }
      DAT_02004f80 = DAT_02004f80 | 0x4000;
      DAT_02004f8d = 0xff;
      DAT_02004f8e = DAT_02004f8e & 0xfb;
      iVar1 = (*(int *)(iVar2 + 0x4c) - *(int *)(param_2 + 8)) + -0x800 >> 8;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xf0 < iVar1) {
        iVar1 = 0xf0;
      }
      DAT_02004f86 = (ushort)(iVar1 << 8) | 0xf0;
      iVar1 = (*(int *)(iVar2 + 0x50) - *(int *)(param_2 + 0xc)) + 0x800 >> 8;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xa0 < iVar1) {
        iVar1 = 0xa0;
      }
      DAT_02004f8a = (ushort)iVar1 & 0xff;
      DAT_02004f46 = DAT_02004f46 -
                     ((short)((uint)(*(int *)(iVar2 + 0x50) - *(int *)(iVar2 + 0xc0)) >> 8) + -0x70)
      ;
    }
    else if (*(char *)(iVar2 + 0xe) != '\0') {
      DAT_02004f80 = DAT_02004f80 & 0xbfff;
      DAT_02004f8e = DAT_02004f8e | 0xfe;
      *(undefined *)(iVar2 + 0xe) = 0;
    }
  }
  return in_lr;
}

