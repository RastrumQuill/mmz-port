// sub_080D02DC at 0x080D02DC (thumb)

undefined4 sub_080D02DC(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x71) == '\x05') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 +
                        ((uint)*(byte *)(param_1 + 0x10) * 0x20000000 + 0x40000000 >> 0x17)) / 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x10) << 0x1d) >> 0x17)) /
         2;
  }
  if (**(ushort **)(param_1 + 0x28) >> 8 == 0xff) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

