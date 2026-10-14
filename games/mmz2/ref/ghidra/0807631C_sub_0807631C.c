// sub_0807631C at 0x0807631C (thumb)

undefined4 sub_0807631C(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1401);
    sub_08006E08(param_1 + 0x74,&DAT_0833fa64);
    *(undefined *)(param_1 + 0xb9) = 0;
    uVar3 = 0xffffffe0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x20;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sVar2 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + -0xc00);
  if ((sVar2 == 0) && (sVar2 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + 0x800), sVar2 != 0)) {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar3 = sub_0807721C(param_1,iVar4,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_08076E8C(param_1);
    }
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = -0x4000;
    }
    else {
      iVar4 = 0x4000;
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + iVar4;
    *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

