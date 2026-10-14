// sub_08039EB4 at 0x08039EB4 (thumb)

undefined8 sub_08039EB4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  uint param_6;
  
  if ((*(byte *)(param_2 + 0x1fc) == param_6) &&
     (((*(char *)(param_2 + 0x212) == '\x02' || (*(char *)(param_2 + 0x213) == '\x02')) &&
      (*(ushort *)(param_1 + 0xbc) == (*(ushort *)(param_2 + 0x218) & 0x100))))) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    sub_0803A248(param_1);
    for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfe;
    }
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

