// sub_0807FD38 at 0x0807FD38 (thumb)

undefined4 sub_0807FD38(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58) + 0x800;
  sVar1 = sub_08007C7C(iVar3 + 0x400,iVar2);
  if (sVar1 == 0) {
    sVar1 = sub_08007C7C(iVar3 + -0x400,iVar2);
    if (sVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

