// sub_0800C624 at 0x0800C624 (thumb)

undefined4 sub_0800C624(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000f94)[uVar1] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    (&DAT_02000f9c)[uVar1] = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    sub_080EEF68(&DAT_08370b18,((ushort)(&DAT_02000f94)[uVar1] & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x68) + 1;
  *(int *)(param_1 + 0x68) = iVar2;
  (&DAT_02000f9c)[*(uint *)(param_1 + 0x5c) >> 4] =
       *(int *)(param_1 + 0x38) << 0x11 | *(int *)(param_1 + 0x34) * 2 + iVar2 * 0x10 & 0xffffU;
  return in_lr;
}

