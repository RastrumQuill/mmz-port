// sub_080C0B6C at 0x080C0B6C (thumb)

undefined4 sub_080C0B6C(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861c90);
    sub_0801CF00(param_1,0x3a00);
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sVar2 = sub_08007C7C(iVar4,local_1c);
    if (sVar2 != 0) goto LAB_080c0c1c;
    uVar1 = 1;
  }
  else {
    sVar2 = sub_08007C7C(iVar4);
    if (sVar2 == 0) {
      sVar2 = sub_08007C7C(iVar4,local_1c);
      if (sVar2 != 0) {
        local_1c = sub_08008534(iVar4,local_1c);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      goto LAB_080c0c1c;
    }
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
LAB_080c0c1c:
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = local_1c;
  iVar4 = sub_08059BD4(uVar3);
  if ((((iVar4 + -0x3000 <= *(int *)(param_1 + 0x54)) &&
       (iVar4 = sub_08059BE0(uVar3), *(int *)(param_1 + 0x54) <= iVar4 + 0x3000)) &&
      (iVar4 = sub_08059BEC(uVar3), iVar4 + -0x3000 <= *(int *)(param_1 + 0x58))) &&
     (iVar4 = sub_08059BF8(uVar3), *(int *)(param_1 + 0x58) <= iVar4 + 0x3000)) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  sub_080C0F8C(param_1);
  return in_lr;
}

