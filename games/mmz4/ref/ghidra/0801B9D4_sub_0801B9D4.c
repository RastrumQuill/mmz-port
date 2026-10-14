// sub_0801B9D4 at 0x0801B9D4 (thumb)

undefined4 sub_0801B9D4(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    sub_08002B10(0x1ca);
    uVar2 = sub_08103A78(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined2 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar1 = *(short *)(param_1 + 0x12) + *(short *)(param_1 + 0x10);
  *(ushort *)(param_1 + 0x10) = uVar1;
  if (0xff < uVar1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) +
       ((int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x10)] << 0x10) >> 0x17);
  return in_lr;
}

