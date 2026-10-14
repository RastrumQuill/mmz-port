// sub_0803C820 at 0x0803C820 (thumb)

undefined8 sub_0803C820(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint param_6;
  
  if ((*(byte *)(param_2 + 0x1fc) == param_6) &&
     (((*(char *)(param_2 + 0x212) == '\x03' || (*(char *)(param_2 + 0x213) == '\x03')) &&
      (*(ushort *)(param_1 + 0x66) == (*(ushort *)(param_2 + 0x218) & 0x200))))) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

