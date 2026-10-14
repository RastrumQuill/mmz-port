// sub_080FA110 at 0x080FA110 (thumb)

undefined4 sub_080FA110(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x8c06);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
    sub_080DD180(param_1 + 0x54,5,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_14 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080D4898(&local_18,&DAT_0886724c,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(&local_18,&DAT_08867268,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(&local_18,&DAT_08867284,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(&local_18,&DAT_088672a0,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    sub_0802AB70(0,0xff,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

