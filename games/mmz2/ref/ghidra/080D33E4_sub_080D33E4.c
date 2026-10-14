// sub_080D33E4 at 0x080D33E4 (thumb)

undefined4 sub_080D33E4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x10) - 6 & 0xff;
  if ((*(uint *)(DAT_0202ebf0 + 0x14) & 4) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    if ((4 < uVar1) ||
       (((int)(uint)(byte)(&DAT_0202ebb4)[*(ushort *)(&DAT_0834a050 + uVar1 * 2) >> 3] >>
         (*(ushort *)(&DAT_0834a050 + uVar1 * 2) & 7) & 1U) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_0834a008,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined2 *)(param_1 + 0xbe) =
           *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
      *(short *)(param_1 + 0xc0) =
           *(short *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2) + 2;
      *(undefined2 *)(param_1 + 0xc2) =
           *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
      *(undefined *)(param_1 + 0xb9) = 1;
      *(undefined *)(param_1 + 0xb8) = 0x30;
      *(undefined2 *)(param_1 + 0xbc) = 0x100;
      *(undefined *)(param_1 + 0xd) = 1;
      sub_080D292C(param_1);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

