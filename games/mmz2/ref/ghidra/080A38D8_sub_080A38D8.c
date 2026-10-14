// sub_080A38D8 at 0x080A38D8 (thumb)

/* WARNING: Removing unreachable block (ram,0x080a39ac) */
/* WARNING: Removing unreachable block (ram,0x080a39c4) */

undefined4 sub_080A38D8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08012738(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08344994,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
  }
  else {
    sub_0801260C();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083449c4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x4a01);
  *(undefined *)(param_1 + 0x24) = 0xa0;
  bVar1 = *(byte *)(param_1 + 0xbd);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(undefined4 *)(param_1 + 0x5c) = 0x279;
  *(undefined4 *)(param_1 + 0x60) = 0x279;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd87;
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A3674(param_1);
  return in_lr;
}

