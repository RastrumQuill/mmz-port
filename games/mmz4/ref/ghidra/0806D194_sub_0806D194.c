// sub_0806D194 at 0x0806D194 (thumb)

undefined4 sub_0806D194(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xb8) == 0)) &&
      (*(int *)(param_1 + 0xbc) == 0)) && (*(int *)(param_1 + 0xc0) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806D1F4(param_1);
  }
  else {
    sub_0801CFF0(param_1);
    sub_08128884(param_1,*(undefined4 *)(&DAT_08858fc4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

