// sub_08084888 at 0x08084888 (thumb)

undefined4 sub_08084888(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7203);
    sub_08006E08(param_1 + 0x74,&DAT_08341300);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(byte *)(param_1 + 0x12) & 0x3f) == 0) &&
     (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
     (uVar3 * 2 >> 0x11 & 1) == 0)) {
    local_14 = *(int *)(param_1 + 0x54) + -0x1000;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_08086220(&local_14,0x200,1,2);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = DAT_0202e130;
  if (cVar2 == '\0') {
    if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
       ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(bool *)(param_1 + 0xb7) = *(int *)(param_1 + 0x54) < *(int *)(iVar1 + 0x54);
      *(undefined *)(param_1 + 0xb5) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 6;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

