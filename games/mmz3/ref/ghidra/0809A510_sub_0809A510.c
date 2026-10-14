// sub_0809A510 at 0x0809A510 (thumb)

undefined4 sub_0809A510(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar6 + 0x54) - *(int *)(param_2 + 8) >> 8;
  iVar1 = *(int *)(iVar6 + 0x58) - *(int *)(param_2 + 0xc) >> 8;
  iVar4 = iVar3 + -0x10;
  if (iVar4 < 0) {
    iVar4 = iVar3 + -9;
  }
  uVar5 = iVar4 >> 3;
  if ((int)((uVar5 - *(byte *)(iVar6 + 0x13)) + 1) < 0) {
    uVar5 = *(byte *)(iVar6 + 0x13) - 1;
  }
  else if (0x1e < (int)(uVar5 + 7)) {
    uVar5 = 0x17;
  }
  iVar4 = iVar1 + 0x10;
  if (iVar4 < 0) {
    iVar4 = iVar1 + 0x17;
  }
  uVar2 = iVar4 >> 3;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  else if (0x11 < (int)uVar2) {
    uVar2 = 0x11;
  }
  if (1 < *(int *)(iVar6 + 0x68)) {
    sub_080E9824(*(int *)(iVar6 + 0x68),uVar5 & 0xffff,uVar2 & 0xffff);
    sub_080E97D4("COMBO",uVar5 + 2,uVar2);
  }
  sub_080E97D4("+  SEC",uVar5,uVar2 + 1);
  sub_080E9824(*(undefined4 *)(iVar6 + 0x5c),uVar5 + 1 & 0xffff,uVar2 + 1 & 0xffff);
  return in_lr;
}

