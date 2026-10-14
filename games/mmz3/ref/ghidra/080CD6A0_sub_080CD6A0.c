// sub_080CD6A0 at 0x080CD6A0 (thumb)

undefined4 sub_080CD6A0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  if (((uVar1 & 1) != 0) && ((uVar1 & 0x20000) != 0)) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x4800);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CD70C(param_1);
  }
  return in_lr;
}

