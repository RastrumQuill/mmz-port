// sub_0808EA30 at 0x0808EA30 (thumb)

undefined4 sub_0808EA30(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar6 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x171);
    sub_0808F8C4(param_1,0,0x10,bVar6);
    sub_0801CF00(param_1,0x3900);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0xbb) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c69c +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885ca70 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x3900) * 4)) *
               0x18);
  if ((*(char *)(param_1 + 0xbb) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0808FA0C(param_1);
    *(char *)(param_1 + 0xbb) = '\0';
  }
  sub_0808F8E8(param_1);
  iVar5 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar3 = FUN_081288bc(iVar4,-iVar5);
  iVar3 = *(int *)(param_1 + 0x54) + ((iVar4 * 2 + -iVar5 * (-iVar3 + 1)) * -iVar3 >> 1);
  if ((bVar1 & 1) == 0) {
    if (iVar3 <= *(int *)(param_1 + 0xb4) + -0xc000) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(byte *)(param_1 + 0xf) = bVar6;
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xb4) + 0xc000 <= iVar3) {
    uVar2 = 2;
    goto LAB_0808eb62;
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    return in_lr;
  }
  if ((*(int *)(param_1 + 0xbc) - iVar3) + 0x4000U < 0x8001) {
    return in_lr;
  }
  uVar2 = 1;
LAB_0808eb62:
  *(undefined *)(param_1 + 0xe) = uVar2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

