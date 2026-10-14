// sub_08085994 at 0x08085994 (thumb)

undefined4 sub_08085994(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    uVar3 = 0xfffffe80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = 0xfffff600;
    *(undefined4 *)(param_1 + 100) = 0xfffff600;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xa00;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    sub_08005784(param_1 + 0x74,&DAT_0885b6d4);
    sub_0801CF00(param_1,0x1b05);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-1 < iVar4) goto LAB_08085a3a;
  }
  else if (iVar4 < 0) goto LAB_08085a3a;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (0xa000 < iVar4) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_08085a3a:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(int *)(param_1 + 0x58) + -0x800), sVar2 != 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar4 = sub_08008AA4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  sub_080852A8(param_1,*(int *)(param_1 + 0x5c) + iVar4,0x800);
  return in_lr;
}

