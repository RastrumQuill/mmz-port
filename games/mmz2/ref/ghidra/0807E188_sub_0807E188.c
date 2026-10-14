// sub_0807E188 at 0x0807E188 (thumb)

undefined4 sub_0807E188(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_083407ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xbd) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807E1E8(param_1);
  }
  return in_lr;
}

