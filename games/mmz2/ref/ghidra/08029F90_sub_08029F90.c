// sub_08029F90 at 0x08029F90 (thumb)

undefined4 sub_08029F90(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x2b7);
  iVar2 = sub_08035A40(param_1,uVar1);
  if (((iVar2 == 0) ||
      (iVar3 = sub_08035B60(param_1,iVar2,*(undefined *)(param_1 + 0x2bf),uVar1), iVar3 == 0)) ||
     (iVar3 = sub_08035ADC(param_1,iVar2), iVar3 == 0)) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (iVar2 == 0) {
        sub_08035014(param_1);
        sub_080353F0(param_1);
      }
      else {
        sub_08035ADC(param_1,iVar2);
      }
    }
  }
  else if (iVar3 == 1) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c6c + (uint)*(byte *)(param_1 + 0x178) * 4));
  }
  return in_lr;
}

