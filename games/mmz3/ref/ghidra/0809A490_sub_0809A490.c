// sub_0809A490 at 0x0809A490 (thumb)

undefined4 sub_0809A490(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar5 + 0x54) - *(int *)(param_2 + 8) >> 8;
  iVar1 = *(int *)(iVar5 + 0x58) - *(int *)(param_2 + 0xc) >> 8;
  iVar3 = iVar2 + -0x10;
  if (iVar3 < 0) {
    iVar3 = iVar2 + -9;
  }
  uVar4 = iVar3 >> 3;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0x1e < (int)(uVar4 + 4)) {
    uVar4 = 0x1a;
  }
  iVar3 = iVar1 + 0x10;
  if (iVar3 < 0) {
    iVar3 = iVar1 + 0x17;
  }
  iVar3 = iVar3 >> 3;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  else if (0x11 < iVar3) {
    iVar3 = 0x11;
  }
  sub_080E97D4(&DAT_080fec3c,uVar4,iVar3);
  sub_080E97D4(&DAT_080fec44,uVar4 + 2,iVar3 + 1U);
  sub_080E9824(*(undefined4 *)(iVar5 + 0x5c),uVar4 & 0xffff,iVar3 + 1U & 0xffff);
  return in_lr;
}

