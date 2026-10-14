// sub_0808F8E8 at 0x0808F8E8 (thumb)

undefined8 sub_0808F8E8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar2 = 0;
      goto LAB_0808f946;
    }
    iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (*(int *)(param_1 + 100) < 0) {
      if (-1 < iVar1) {
LAB_0808f936:
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0808f946;
      }
    }
    else if (iVar1 < 1) goto LAB_0808f936;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (*(int *)(param_1 + 100) < 0) {
      uVar2 = 0xfffffc00;
      if (iVar1 < -0x400) {
LAB_0808f914:
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
      }
    }
    else {
      uVar2 = 0x400;
      if (0x400 < iVar1) goto LAB_0808f914;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = 1;
LAB_0808f946:
  return CONCAT44(in_lr,uVar2);
}

