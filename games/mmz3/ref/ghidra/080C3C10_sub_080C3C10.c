// sub_080C3C10 at 0x080C3C10 (thumb)

undefined4 sub_080C3C10(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080175BC(param_1);
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | 0xd0;
    *(int *)(param_1 + 0x40) = iVar4 + 0x54;
    *(ushort *)(param_1 + 0x48) =
         *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar4 + 0x48) & 0x3ff;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
  *(undefined *)(param_1 + 0x13) = uVar1;
  iVar2 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12) >> 1] * 0x28;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = (iVar2 >> 8) + 0xf0;
  iVar3 = ((uint)*(byte *)(param_1 + 0x13) * -0x10 + 0x110) * iVar2;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(short *)(param_1 + 0x50) = (short)((uint)iVar3 >> 8);
  iVar2 = iVar2 * ((uint)*(byte *)(param_1 + 0x13) * -0x10 + 0x100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(short *)(param_1 + 0x52) = (short)((uint)iVar2 >> 8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar4 + 0x4e);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar4 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*(byte *)(iVar4 + 10) >> 4 & 1) << 4);
  if (0x8f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

