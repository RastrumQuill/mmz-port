// sub_08078CD0 at 0x08078CD0 (thumb)

undefined4 sub_08078CD0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
      (cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0xd), cVar1 != '\t')) && (cVar1 != '\x12')) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ff38 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

