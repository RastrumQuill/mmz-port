// sub_0800F03C at 0x0800F03C (thumb)

undefined4 sub_0800F03C(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xa06;
    DAT_0202cabc = 0x14000;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x44) == 0x100) && (0x1e0 < *(int *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xc0;
  }
  puVar2 = (ushort *)(param_1 + 0x6c);
  if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x34)) * 0x10 + 0xf00 < (int)(uint)*puVar2) {
    *puVar2 = 0;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x34) & 0xfff;
  }
  *puVar2 = *puVar2 + 8;
  uVar1 = *(short *)(param_1 + 0x10) + 1;
  *(ushort *)(param_1 + 0x10) = uVar1;
  if (0xff < uVar1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return in_lr;
}

