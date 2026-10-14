// sub_0807BE40 at 0x0807BE40 (thumb)

undefined4 sub_0807BE40(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5106);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08340348,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0x24) = 0x20;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffbc0;
    uVar1 = 0xfffffc00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar1 = 0xfffffb00;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807BF04(param_1);
  return in_lr;
}

