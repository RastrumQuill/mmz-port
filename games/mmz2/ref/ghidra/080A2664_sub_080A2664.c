// sub_080A2664 at 0x080A2664 (thumb)

undefined4 sub_080A2664(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar2 = (uint)*(ushort *)(param_1 + 0xbc) - (uint)*(ushort *)(param_1 + 0xba);
  *(ushort *)(param_1 + 0xbc) = (ushort)iVar2;
  *(char *)(param_1 + 0x24) = (char)((uint)iVar2 >> 8);
  iVar2 = (uint)*(ushort *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xba);
  *(ushort *)(param_1 + 0xb8) = (ushort)iVar2;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[(uint)(iVar2 * 0x10000) >> 0x18] * 0x34;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = *(short *)(param_1 + 0xbe) + -1;
  *(short *)(param_1 + 0xbe) = sVar1;
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

