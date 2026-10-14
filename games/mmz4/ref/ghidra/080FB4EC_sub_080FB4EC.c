// sub_080FB4EC at 0x080FB4EC (thumb)

undefined4 sub_080FB4EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (((int)(uint)(byte)(&DAT_0202e8b4)
                        [*(uint *)(&DAT_088676a8 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] >>
       (*(uint *)(&DAT_088676a8 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
    sub_0801CF00(param_1,0xbc00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08867690,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080FB5CC(param_1);
  }
  else {
    sub_0801CF00(param_1,0xbc01);
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

