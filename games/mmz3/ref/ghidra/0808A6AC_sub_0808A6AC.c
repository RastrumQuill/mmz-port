// sub_0808A6AC at 0x0808A6AC (thumb)

undefined4 sub_0808A6AC(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) && (*(char *)(param_1 + 0x10) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808A800(param_1);
    return in_lr;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083653f4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar2 = sub_08063614(param_1);
    if ((iVar2 != 0) && (2 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0x11) = 1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB_0808a7e4;
  }
  iVar2 = sub_08063614(param_1);
  if (iVar2 != 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    piVar3 = (int *)(param_1 + 0xbc);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      cVar1 = *(char *)(param_1 + 0xc0);
      if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xc0) = cVar1, cVar1 == '\0'))
      {
        *(undefined *)(*piVar3 + 0x25) = 0x18;
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      cVar1 = *(char *)(param_1 + 0xc1);
      if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xc1) = cVar1, cVar1 == '\0'))
      {
        *(undefined *)(*(int *)(param_1 + 0x2c) + 0x25) = 0x18;
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      cVar1 = *(char *)(param_1 + 0xc2);
      if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xc2) = cVar1, cVar1 == '\0'))
      {
        *(undefined *)(*(int *)(param_1 + 0x28) + 0x25) = 0x18;
      }
    }
  }
LAB_0808a7e4:
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365408 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

