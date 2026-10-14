// sub_08089FC0 at 0x08089FC0 (thumb)

undefined8 sub_08089FC0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar3 = *(int *)(param_1 + 0x58) + 0x800;
    sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + 0x800,iVar3);
    if (sVar1 == 0) {
      sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0x800,iVar3);
      if (sVar1 == 0) {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
        uVar2 = 1;
        goto LAB_0808a00e;
      }
    }
  }
  uVar2 = 0;
LAB_0808a00e:
  return CONCAT44(in_lr,uVar2);
}

