// sub_08071D48 at 0x08071D48 (thumb)

undefined4 sub_08071D48(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)
      ) && (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x1d')) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ef30 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08071DA0(param_1);
  }
  return in_lr;
}

