// sub_08080614 at 0x08080614 (thumb)

undefined8 sub_08080614(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  sVar1 = sub_08007020(iVar3,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    iVar4 = iVar3 + -0x2000;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = iVar3 + 0x2000;
    }
    iVar3 = *(int *)(param_1 + 0x58);
    sVar1 = sub_08007C7C(iVar4,iVar3 + -0x800);
    if (sVar1 == 1) {
      sVar1 = sub_08007C7C(iVar4,iVar3 + -0x2800);
      if (sVar1 == 0) {
LAB_08080694:
        uVar2 = 1;
        goto LAB_0808069a;
      }
    }
    else {
      sVar1 = sub_08007C7C(iVar4,iVar3 + 0x800);
      if (sVar1 != 0) goto LAB_08080698;
      sVar1 = sub_08007C7C(iVar4,iVar3 + 0x4800);
      if (sVar1 != 0) goto LAB_08080694;
    }
    uVar2 = 2;
  }
  else {
LAB_08080698:
    uVar2 = 0;
  }
LAB_0808069a:
  return CONCAT44(in_lr,uVar2);
}

