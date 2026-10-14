// sub_080AA278 at 0x080AA278 (thumb)

undefined4 sub_080AA278(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0x8c00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined *)(param_1 + 0xb4) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083455e4,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80aa4d1;
  }
  else {
    sub_08012580(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
    sub_080127E4(param_1,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_08006DE4(param_1 + 0x74,&DAT_08345614,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080032EC(0x35);
  }
  sub_080AA358(param_1);
  return in_lr;
}

