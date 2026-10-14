// sub_080EA9F0 at 0x080EA9F0 (thumb)

undefined4 sub_080EA9F0(int param_1,undefined param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int iVar5;
  
  uVar2 = sub_0801EBDC(*(undefined4 *)(param_1 + 0x10));
  iVar3 = *(int *)(param_1 + 0x14) + 0x2a6;
  iVar5 = 4;
  do {
    iVar4 = iVar5 + -1;
    uVar1 = sub_080EA9C8(*(undefined *)((int)&DAT_0835e702 + iVar5 + 1),uVar2);
    sub_080EAAB8(iVar3 + -0x40,uVar1,param_2);
    sub_080EAB0C(iVar3 + -0x3e,param_2);
    iVar3 = iVar3 + -0x40;
    iVar5 = iVar4;
  } while (iVar4 != 0);
  return in_lr;
}

