// sub_080914B0 at 0x080914B0 (thumb)

undefined4 sub_080914B0(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xbd) == '\0') {
    uVar1 = 9;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 != 0) {
      if (*(int *)(param_1 + 0x60) < 1) {
        *(undefined *)(param_1 + 0xbe) = 1;
        uVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        local_24 = *(undefined4 *)(param_1 + 0x58);
        local_28 = *(int *)(param_1 + 0x54) + 0x300;
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_28,&DAT_0885ce68,0,(uVar5 * 2 >> 0x11 & 1) << 4);
        local_28 = local_28 + -0x600;
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_28,&DAT_0885ce68,0,(uVar5 * 2 >> 0x11 & 1) << 4 | 1);
        uVar1 = 6;
      }
      else {
        uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        sub_080DC974(param_1 + 0x54,1,0);
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    sVar2 = sub_08007C7C(iVar4,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbe) = 0;
    if (*(int *)(param_1 + 0x5c) < 1) {
      uVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar5 * 2 >> 0x11 & 1) << 4);
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar5 * 2 >> 0x11 & 1) << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      uVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar5 * 2 >> 0x11 & 1) << 4 | 1);
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar5 * 2 >> 0x11 & 1) << 4 | 1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    uVar1 = 6;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

