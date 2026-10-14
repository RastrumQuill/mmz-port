// sub_08069150 at 0x08069150 (thumb)

undefined4 sub_08069150(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = *(int *)(iVar4 + 0x54) + 0x7800U & 0xfffff000;
      *(uint *)(param_1 + 0x54) = uVar2;
      iVar3 = sub_080093C4(uVar2,*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + -0xc800;
      *(undefined4 *)(param_1 + 0x60) = 0x700;
      if (*(char *)(param_1 + 0x10) == '\x04') {
        *(undefined *)(param_1 + 0x24) = 0x80;
      }
    }
    *(undefined *)(iVar4 + 0xe3) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
    sub_080032EC(0x51);
  }
  if (*(char *)(iVar4 + 0xe3) == '\0') {
    if (*(byte *)(param_1 + 0x10) == 4) {
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if ((*(int *)(iVar4 + 0x58) + -0x4000 < iVar3) &&
         (sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1400), sVar1 != 0)) {
        iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1400);
        *(int *)(param_1 + 0x58) = iVar3 + -0x1400;
        *(char *)(iVar4 + 0xe3) = '\x01';
        sub_08015518(1,param_1 + 0x54);
        sub_0800AEA4(param_1 + 0x54);
        sub_080032EC(0x61);
      }
    }
    else if (1 < *(byte *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x2c) + 0x58) + -0x3000;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

