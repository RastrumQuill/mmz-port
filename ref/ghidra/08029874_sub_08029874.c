// sub_08029874 at 0x08029874 (thumb)

undefined4 sub_08029874(int param_1,undefined4 param_2,ushort param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_02022ae0;
  if ((DAT_02022ae0 & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,param_2,param_1 + 0x4c,(int)(short)param_3);
    *(int *)(param_1 + 0xb4) = param_1;
    *(uint *)(param_1 + 0xb0) = uVar1 & 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,param_2,param_1 + 0x4c,(int)((uint)param_3 << 0x10) >> 0x11);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    DAT_02022ae0 = DAT_02022ae0 & 0xfe;
  }
  return in_lr;
}

