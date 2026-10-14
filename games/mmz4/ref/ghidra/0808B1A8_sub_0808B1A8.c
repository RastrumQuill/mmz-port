// sub_0808B1A8 at 0x0808B1A8 (thumb)

undefined4 sub_0808B1A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x14);
  }
  if ((*puVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if ((*puVar3 & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_0808B684(param_1);
    return in_lr;
  }
  if ((*puVar3 & 1) == 0) {
LAB_0808b232:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808b2a0;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0802AD94(0,param_1,&DAT_0885c1e8);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_0808b232;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_0801D1F4(param_1);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885c048 +
                 (uint)*(byte *)(*(int *)(*(char *)(param_1 + 0x71) * 4 +
                                         *(int *)(&DAT_0885c1b0 +
                                                 (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                           *(undefined *)(param_1 + 0x70)) - 0x2100)
                                                 * 4)) + 1) * 0x18);
    return in_lr;
  }
LAB_0808b2a0:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885c010 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885c01c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

