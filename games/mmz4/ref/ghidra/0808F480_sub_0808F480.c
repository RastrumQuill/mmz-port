// sub_0808F480 at 0x0808F480 (thumb)

undefined4 sub_0808F480(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  puVar1 = (undefined *)(param_1 + 0x70);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c69c +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885ca70 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) - 0x3900)
                                        * 4)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) == 0x3902) {
      sub_0801CF00(param_1,0x3903);
      sub_0801CFF0(param_1);
      sub_08005784(param_1 + 0x74,
                   &DAT_0885c69c +
                   (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                    *(int *)(&DAT_0885ca70 +
                                            (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar1) -
                                            0x3900) * 4)) * 0x18);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

