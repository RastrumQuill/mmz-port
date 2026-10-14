// sub_080AEA6C at 0x080AEA6C (thumb)

undefined4 sub_080AEA6C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(iVar4 + 0x58);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = FUN_081288bc((*(int *)(iVar4 + 0x54) + -0x6800) - iVar2,*(undefined *)(param_1 + 0x12));
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar5 = FUN_081288bc((iVar5 + -0x200) - iVar6,*(undefined *)(param_1 + 0x12));
  *(int *)(param_1 + 0x60) = iVar5;
  iVar2 = iVar2 + iVar4;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = iVar6 + iVar5;
  iVar4 = DAT_0202dbf0;
  if (((*(uint *)(param_1 + 0x8c) & 0x800) == 0) ||
     (uVar3 = (uint)DAT_0202e918, (DAT_0202e918 & 8) != 0)) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(int *)(DAT_0202dbf0 + 0x54) = iVar2;
    *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + 0x1300;
    *(uint *)(iVar4 + 0x60) = uVar3 & 8;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(char *)(param_1 + 0xe) = (char)(uVar3 & 8);
    }
  }
  return in_lr;
}

