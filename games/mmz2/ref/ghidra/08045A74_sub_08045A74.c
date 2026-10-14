// sub_08045A74 at 0x08045A74 (thumb)

undefined4 sub_08045A74(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = sub_08072398(param_1,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    sub_080C1AD0(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 0x40;
    uVar2 = sub_080032EC(0x4e);
    *(undefined2 *)(param_1 + 0xcc) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((0x18 < *(byte *)(param_1 + 0x12)) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x2900;
      cVar1 = *(char *)(param_1 + 0x13) + -9;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x2900;
      cVar1 = *(char *)(param_1 + 0x13) + '\t';
    }
    *(char *)(param_1 + 0x13) = cVar1;
    local_10 = *(int *)(param_1 + 0x58) + -0x2a00;
    if ((*(byte *)(param_1 + 0x12) & 3) == 2) {
      sub_080B3AD8(&local_14,2,*(undefined *)(param_1 + 0x13));
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080B3AD8(&local_14,2,uVar4 * 2 >> 0x11 & 0xff);
    }
    else {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080B3AD8(&local_14,2,uVar4 * 2 >> 0x11 & 0xff);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_08003338((int)*(short *)(param_1 + 0xcc));
    *(short *)(param_1 + 0xcc) = 0;
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

