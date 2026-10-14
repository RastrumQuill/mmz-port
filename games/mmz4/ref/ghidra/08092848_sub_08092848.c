// sub_08092848 at 0x08092848 (thumb)

undefined4 sub_08092848(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885cf4c);
    sub_0801CF00(param_1,*(undefined2 *)
                          (&DAT_0885cf8e + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)));
    sub_0801CFF0(param_1);
    iVar2 = DAT_0202dbf0;
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar2 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar3 = iVar3 >> 8;
    iVar2 = iVar2 >> 8;
    iVar2 = sub_081284F8(iVar3 * iVar3 + iVar2 * iVar2);
    uVar4 = (uint)(iVar2 << 0x10) >> 8;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_081288bc(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar3 = FUN_081288bc(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar3 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if ((sVar1 != 0) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    sub_08092698(param_1);
  }
  return in_lr;
}

