// sub_080C216C at 0x080C216C (thumb)

undefined4 sub_080C216C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     (iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar4 + 8) == '\0')) {
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar2 = sub_0801F090(iVar4);
    iVar3 = sub_0801F0B0(iVar4);
    uVar5 = *(undefined4 *)(iVar4 + 0x58);
    sVar1 = sub_08008CFC(iVar2 + -0x100,uVar5);
    if ((sVar1 != 0) && (sVar1 = sub_08008CFC(iVar3 + 0x100,uVar5), sVar1 != 0)) {
      *(undefined *)(iVar6 + 0xd) = 7;
    }
  }
  return in_lr;
}

