// sub_080130B0 at 0x080130B0 (thumb)

undefined4 sub_080130B0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 8;
  if ((byte)DAT_0202dadc == 0) {
    DAT_02000a42 = 0x1000;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10);
    uVar2 = uVar1 + 2;
    *(short *)(param_1 + 0x10) = (short)uVar2;
    uVar2 = uVar2 & 0xffff;
    if (uVar2 < 0x101) {
      iVar3 = ((int)((*(short *)((int)&DAT_08128c10 + ((uVar1 + 0x42) * 0x1000000 >> 0x17)) + 0x100
                     >> 5) + (uint)(byte)DAT_0202dadc * 4) >> 2) + 2;
      *(int *)(param_1 + 0x68) = iVar3;
      uVar1 = (ushort)iVar3;
      DAT_02000a42 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
    }
    else {
      uVar1 = (ushort)*(undefined4 *)(param_1 + 0x68);
      DAT_02000a42 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
      if (0x200 < uVar2) {
        *(undefined2 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return in_lr;
}

