// sub_0803A894 at 0x0803A894 (thumb)

undefined8 sub_0803A894(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint param_6;
  
  uVar1 = 0;
  if ((byte)(*(char *)(param_1 + 0x13) - 9U) < 2) {
    uVar1 = *(ushort *)(param_2 + 0x218) & 0x20;
  }
  if ((*(byte *)(param_2 + 0x1fc) == param_6) &&
     (((*(char *)(param_2 + 0x212) == '\x01' || (*(char *)(param_2 + 0x213) == '\x01')) &&
      (uVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

