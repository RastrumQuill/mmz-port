// sub_080A5E14 at 0x080A5E14 (thumb)

undefined4 sub_080A5E14(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      cVar1 = sub_080A6510(param_1);
      if (cVar1 == '\0') {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885ef44 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        sub_080A65DC(param_1);
      }
    }
    else {
      sub_080A65DC(param_1);
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A5E88(param_1);
  }
  return in_lr;
}

