// sub_080A3BD4 at 0x080A3BD4 (thumb)

undefined4 sub_080A3BD4(int param_1)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + -0xd00);
      if (sVar2 == 0) goto LAB_080a3cb8;
      iVar4 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar4 + 0xd00;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      uVar1 = 1;
    }
    else {
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + 0xd00);
      if (sVar2 == 0) goto LAB_080a3cb8;
      iVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar4 + -0xd00;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      uVar1 = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(int *)(param_1 + 0x5c) < 1) {
      sVar2 = sub_08007C7C(iVar4 + -0xd00,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) goto LAB_080a3cb8;
      iVar4 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = 0xd00;
    }
    else {
      sVar2 = sub_08007C7C(iVar4 + 0xd00,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) goto LAB_080a3cb8;
      iVar4 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = -0xd00;
    }
    *(int *)(param_1 + 0x54) = iVar4 + iVar3;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_080a3cb8:
  if (3 < *(byte *)(param_1 + 0x13)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

