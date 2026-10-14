// sub_0808ECD4 at 0x0808ECD4 (thumb)

undefined4 sub_0808ECD4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb8) = 1;
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
  iVar1 = FUN_081288bc(*(undefined4 *)(param_1 + 0x5c),-*(int *)(param_1 + 100));
  if ((iVar1 == -0x11 || -iVar1 < 0x11) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

