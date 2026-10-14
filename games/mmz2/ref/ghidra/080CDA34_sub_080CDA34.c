// sub_080CDA34 at 0x080CDA34 (thumb)

undefined4 sub_080CDA34(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 0x100) == 0) {
    *(undefined *)(iVar3 + 0xb4) = 0;
  }
  else {
    *(undefined *)(iVar3 + 0xb4) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    cVar1 = sub_08022AB8(iVar2);
    if (cVar1 == '\0') {
      sub_080A8DFC(iVar2,*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54));
    }
  }
  return in_lr;
}

