// sub_080A7924 at 0x080A7924 (thumb)

undefined4 sub_080A7924(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\0') {
      sub_0801CFF0(param_1);
    }
    else {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885f208 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A7978(param_1);
  }
  return in_lr;
}

