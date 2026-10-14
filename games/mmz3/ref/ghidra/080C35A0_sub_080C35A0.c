// sub_080C35A0 at 0x080C35A0 (thumb)

undefined4 sub_080C35A0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x40;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c3711;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 2;
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = iVar3 + -0x500;
    *(int *)(iVar1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = iVar3 + 0x500;
    }
    *(int *)(iVar1 + 0x54) = iVar2;
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  }
  return in_lr;
}

