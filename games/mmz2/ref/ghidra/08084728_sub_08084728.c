// sub_08084728 at 0x08084728 (thumb)

undefined4 sub_08084728(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7200);
    sub_08006E08(param_1 + 0x74,&DAT_083412d0);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (((bVar1 & 0x3f) == 0) &&
     (uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar2 & 0x7fffffff,
     (uVar2 * 2 >> 0x11 & 1) == 0)) {
    local_14 = *(int *)(param_1 + 0x54) + -0x1000;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_08086220(&local_14,0x200,1,2);
  }
  if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
     ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

