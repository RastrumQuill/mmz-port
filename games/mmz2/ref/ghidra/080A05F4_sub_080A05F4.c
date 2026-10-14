// sub_080A05F4 at 0x080A05F4 (thumb)

undefined4 sub_080A05F4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0834447c)[*(byte *)(param_1 + 0x10)];
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) != '\x02') {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    sub_08006DE4(param_1 + 0x74,&DAT_083443bc,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined *)(param_1 + 0xb4) = 0;
  sub_080A0668(param_1);
  return in_lr;
}

