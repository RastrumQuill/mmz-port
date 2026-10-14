// sub_08083ED8 at 0x08083ED8 (thumb)

undefined4 sub_08083ED8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x1c00);
    iVar2 = DAT_0202dbf0;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar2 = (*(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58)) + -0x1800;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar4 = iVar4 >> 8;
    iVar2 = iVar2 >> 8;
    sVar1 = sub_081284F8(iVar4 * iVar4 + iVar2 * iVar2);
    if (sVar1 == 0) {
      if ((*(byte *)(DAT_0202dbf0 + 10) & 0x10) == 0) {
        uVar3 = 0xfffffa00;
      }
      else {
        uVar3 = 0x600;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_081288bc(*(undefined4 *)(param_1 + 0x5c),sVar1);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar4 = FUN_081288bc(*(undefined4 *)(param_1 + 0x60),sVar1);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar4 * 6;
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885b4c8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08007C7C(iVar2 + *(int *)(param_1 + 0x5c));
  if ((sVar1 != 0) ||
     (sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) + -0x1800), sVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08083880(param_1);
  }
  return in_lr;
}

