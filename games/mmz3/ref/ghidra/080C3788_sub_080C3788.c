// sub_080C3788 at 0x080C3788 (thumb)

undefined4 sub_080C3788(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
  *(undefined *)(param_1 + 0x13) = uVar1;
  iVar2 = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar2 = (iVar2 >> 4) + 0x138;
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
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

