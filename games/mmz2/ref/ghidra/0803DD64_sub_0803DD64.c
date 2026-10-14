// sub_0803DD64 at 0x0803DD64 (thumb)

undefined4 sub_0803DD64(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x5506);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08339d84,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803e471;
  *(undefined *)(param_1 + 0x13) = 0;
  uVar2 = 0x500;
  if (cVar1 == '\x02') {
    uVar2 = 0xfffffb00;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  sub_0803DDF4(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}

