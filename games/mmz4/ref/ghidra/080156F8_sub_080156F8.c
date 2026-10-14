// sub_080156F8 at 0x080156F8 (thumb)

undefined4 sub_080156F8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      DAT_02000a40 = 0x3b44;
      *(undefined4 *)(param_1 + 0x68) = 0x1400;
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    uVar1 = *(short *)(param_1 + 0x10) + 4;
    *(ushort *)(param_1 + 0x10) = uVar1;
    if (0xff < uVar1) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x1400;
    }
    iVar2 = *(int *)(param_1 + 0x68) + (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x10)];
    *(int *)(param_1 + 0x68) = iVar2;
    DAT_02000a42 = (ushort)(iVar2 >> 10) & 0x1f | ((short)(0x1400 - iVar2 >> 10) + 0xc) * 0x100;
  }
  else if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0x1000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

