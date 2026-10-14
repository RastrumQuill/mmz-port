// sub_0809D844 at 0x0809D844 (thumb)

undefined4 sub_0809D844(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_0809DC34(param_1);
    sub_0809DD90(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885dfc8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_0809DD58(param_1);
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809D8B4(param_1);
  }
  return in_lr;
}

