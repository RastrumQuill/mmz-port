// sub_08011C6C at 0x08011C6C (thumb)

undefined4 sub_08011C6C(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    puVar2 = &DAT_02000f94 + uVar1;
    *puVar2 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x4044;
    (&DAT_02000f9c)[uVar1] = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    sub_080EEF68(&DAT_08375368,(*puVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080EEF68(&DAT_08375b70,&DAT_06000800 + (*puVar2 & 0x1f00) * 8,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return in_lr;
}

