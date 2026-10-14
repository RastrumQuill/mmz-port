// sub_080E735C at 0x080E735C (thumb)

undefined4 sub_080E735C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_28;
  int local_24;
  
  iVar5 = 0;
  iVar6 = 0x800;
  uVar7 = 0xfffff800;
  uVar8 = 0x1400;
  uVar9 = 0x400;
  uVar10 = 0x1400;
  uVar11 = 0xfffffe00;
  uVar12 = 0x1600;
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08002B10(0x52);
  }
  local_28 = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * iVar5;
  local_24 = *(int *)(param_1 + 0x58) + iVar6;
  uVar3 = uVar3 | uVar3 << 4;
  sub_080D4898(&local_28,&DAT_08865bb0,0,uVar3,iVar5,iVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  iVar4 = 0;
  iVar2 = 3;
  do {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0x1f) * 0x100 + 0x100;
    sub_080D4898(&local_28,&DAT_08865bb0 + iVar4,0,uVar3,iVar5,iVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                 ,uVar12);
    iVar4 = iVar4 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

