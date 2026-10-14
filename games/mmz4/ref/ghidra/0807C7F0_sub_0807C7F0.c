// sub_0807C7F0 at 0x0807C7F0 (thumb)

undefined4 sub_0807C7F0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 0xd4) = (byte)(1 << (uint)bVar1) | *(byte *)(param_1 + 0xd4);
    sub_0807E7E0(param_1,0x15);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (&DAT_0885a328)[bVar1] + 0x7800;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,0x18);
  DAT_02000a42 = *(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17)) >> 4 & 0x1fU |
                 0x1000;
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

