// sub_08099490 at 0x08099490 (thumb)

undefined4 sub_08099490(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0xbc);
  if (*(byte *)(iVar8 + 0xc) < 2) {
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar4 + 0x54);
      iVar6 = -0x1800;
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x54);
      iVar6 = 0x1800;
    }
    iVar7 = *(int *)(iVar4 + 0x58);
    uVar1 = *(undefined *)(param_1 + 0xc1);
    iVar4 = sub_080EF150((iVar3 + iVar6) - *(int *)(iVar8 + 0x54),uVar1);
    iVar3 = sub_080EF150((iVar7 + -0x1100) - *(int *)(iVar8 + 0x58),uVar1);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 1) == 0) {
      uVar5 = *(byte *)(param_1 + 0xc2) + 1 & 0xff;
    }
    else {
      uVar5 = (uint)*(byte *)(param_1 + 0xc2);
    }
    *(uint *)(param_1 + 0x54) = *(int *)(iVar8 + 0x54) + uVar5 * iVar4;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + uVar5 * iVar3;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar8 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar8 + 0x60);
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(iVar8 + 0xc3);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

