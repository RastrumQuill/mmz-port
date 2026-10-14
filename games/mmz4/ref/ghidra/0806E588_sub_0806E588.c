// sub_0806E588 at 0x0806E588 (thumb)

undefined4 sub_0806E588(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    iVar2 = (*(int *)(param_1 + 0x54) + -0x6800) - *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar3 = (*(int *)(param_1 + 0x58) + 0x3fff) - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x60) = iVar3;
    uVar1 = sub_081284F8(iVar2 * iVar2 + iVar3 * iVar3);
    iVar2 = FUN_081288bc(uVar1,0x280);
    iVar3 = sub_08128954(uVar1,0x280);
    if (iVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_1 + 100) = iVar2;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  iVar3 = *(int *)(param_1 + 100);
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  iVar2 = FUN_081288bc(iVar3 * *(int *)(param_1 + 0x5c),uVar4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + iVar2 + 0x6800;
  iVar2 = FUN_081288bc(iVar3 * *(int *)(param_1 + 0x60),uVar4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + iVar2 + -0x3fff;
  sub_0806F1B0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_08002B10(0x38);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

