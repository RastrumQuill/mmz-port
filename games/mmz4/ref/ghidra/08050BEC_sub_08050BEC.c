// sub_08050BEC at 0x08050BEC (thumb)

undefined4 sub_08050BEC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa117);
    uVar4 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08002B10(0xeb);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08050dd6;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08050dd6;
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      local_1c = *(int *)(param_1 + 0x54);
      local_18 = sub_08008748(local_1c,*(undefined4 *)(param_1 + 0x58));
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar7 = uVar5 & 0x7fffffff;
      local_1c = local_1c + 0x1000 + (uVar5 * 2 >> 0x11 & 0x1f) * -0x100;
      if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
        uVar5 = uVar7 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_1c,&DAT_08854c7c,0,(uVar5 * 2 >> 0x11 & 1) << 4);
      }
      else {
        uVar5 = uVar7 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_1c,&DAT_08854c60,0,(uVar5 * 2 >> 0x11 & 1) << 4);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 3) < 2) {
      iVar6 = *(int *)(param_1 + 0x54) + 0x100;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x54) + -0x100;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar6 + -0x1700);
    if (sVar3 != 0) goto LAB_08050dd6;
    sub_0801CFC8(param_1,0xa103,3,4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
  }
  else {
    if (bVar1 != 2) {
      if (((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) &&
         ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_08050dd6;
    }
    iVar6 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar3 == 0) goto LAB_08050dd6;
    sub_0801CF00(param_1,0xa104);
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_08002B10(0xf0);
    sub_0801FE64(4,param_1 + 0x54);
    sub_080C1694(*(int *)(param_1 + 0x54) + -0x1800,*(undefined4 *)(param_1 + 0xb8),0,2);
    sub_080C1694(*(int *)(param_1 + 0x54) + 0x1800,*(undefined4 *)(param_1 + 0xb8),1,2);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08050dd6:
  sub_0801CFF0(param_1);
  return in_lr;
}

