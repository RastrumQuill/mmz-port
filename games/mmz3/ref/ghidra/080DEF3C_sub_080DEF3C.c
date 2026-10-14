// sub_080DEF3C at 0x080DEF3C (thumb)

undefined4 sub_080DEF3C(int param_1)

{
  undefined4 in_lr;
  
  if (((int)(uint)(byte)(&DAT_02002430)
                        [*(ushort *)(&DAT_0836e05a + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] >>
       (*(ushort *)(&DAT_0836e05a + (uint)*(byte *)(param_1 + 0x10) * 2) & 7) & 1U) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e050 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x25) = 0x1f;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x400;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080DF028(param_1);
  }
  return in_lr;
}

