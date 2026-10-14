// sub_0803D1BC at 0x0803D1BC (thumb)

undefined4 sub_0803D1BC(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar2 = CONCAT11(*(undefined *)(*(int *)(param_1 + 0xb4) + 0x1e),
                     *(undefined *)(*(int *)(param_1 + 0xb4) + 0x70));
    if (sVar2 == 0x1b00) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (1 < *(byte *)(param_1 + 0x12)) {
        sub_0801CFF0(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08005794(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                     *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                     *(undefined *)(param_1 + 0xc2),0xffffffff);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        return in_lr;
      }
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
      return in_lr;
    }
    if (sVar2 == 0x1b01) {
      if (*(char *)(param_1 + 0x10) == '\x16') {
        sub_0801CF00(param_1,0x6c01);
      }
      else {
        sub_0801CF00(param_1,0x6c03);
      }
      sub_0801CFF0(param_1);
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 | 1;
      if ((bVar1 & 0x10) == 0) {
        local_14 = *(int *)(param_1 + 0x54) + -0x1100;
      }
      else {
        local_14 = *(int *)(param_1 + 0x54) + 0x1100;
      }
      local_10 = *(int *)(param_1 + 0x58) + -0x200;
      sVar2 = sub_08007C7C(local_14,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar2 != 0) {
        iVar3 = sub_08008534(local_14,local_10);
        iVar6 = iVar3 - local_10;
        if (iVar6 < 0) {
          iVar6 = local_10 - iVar3;
        }
        if (iVar6 < 0xc00) {
          local_10 = iVar3;
          sub_0804B19C(&local_14,0,0);
          sub_0804B19C(&local_14,0,1);
          uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar5 & 0x7fffffff;
          sub_080D17D8(&local_14,4,uVar5 * 2 >> 0x11 & 1);
          sub_080D17D8(&local_14,5,0);
          sub_080D17D8(&local_14,5,1);
          sub_08002B10(0xa8);
        }
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

