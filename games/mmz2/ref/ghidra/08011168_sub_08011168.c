// sub_08011168 at 0x08011168 (thumb)

undefined4 sub_08011168(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 2;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  psVar2 = (short *)(param_1 + 0x68);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + 1;
  if ((short)(sVar1 + 1) == 0x2d) {
    *psVar2 = 0;
  }
  return in_lr;
}

