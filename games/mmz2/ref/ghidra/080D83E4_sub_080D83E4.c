// sub_080D83E4 at 0x080D83E4 (thumb)

undefined4 sub_080D83E4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x5c) + -0x60;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar2 < 0xc01) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x5c) = 0xc00;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 != '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    iVar2 = sub_0801EFE8(uVar6,cVar1);
    iVar3 = sub_0801F004(uVar6,cVar1);
    iVar4 = *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x58);
    iVar7 = 0x2800 - *(int *)(param_1 + 0x5c);
    iVar2 = sub_080EF150(iVar7 * (iVar2 - iVar4),0x2800);
    iVar3 = sub_080EF150(iVar7 * (iVar3 - iVar5),0x2800);
    *(int *)(param_1 + 0x54) = iVar4 + iVar2;
    *(int *)(param_1 + 0x58) = iVar5 + iVar3;
  }
  return in_lr;
}

