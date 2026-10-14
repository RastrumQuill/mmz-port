// sub_080657A0 at 0x080657A0 (thumb)

undefined4 sub_080657A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0xb4) + 0xc) < 2) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362470 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836247c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080657FC(param_1);
  }
  return in_lr;
}

