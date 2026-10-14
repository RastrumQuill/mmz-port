// sub_080A8750 at 0x080A8750 (thumb)

undefined4 sub_080A8750(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = 1;
  sub_0801CF00(param_1,0x8d07);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0x16;
  sub_080A8510(*(undefined4 *)(param_1 + 0x28),param_1,*(undefined *)(param_1 + 0x11));
  sub_080A8574(*(undefined4 *)(param_1 + 0x28),param_1,*(undefined4 *)(param_1 + 0x2c),
               *(undefined *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080A85F8(param_1);
  return in_lr;
}

