// sub_0808C340 at 0x0808C340 (thumb)

undefined4 sub_0808C340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_1c [8];
  
  sub_08128B5C(abStack_1c,&DAT_0812948c,8);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(5);
  }
  if ((*puVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb8) == '\0') {
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
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb6) = *(undefined *)(param_1 + 0xd);
    sub_0808C724(param_1);
    return in_lr;
  }
  if ((*puVar3 & 1) == 0) {
LAB_0808c3ea:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808c430;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0802AD94(0,param_1,&UNK_0885c310 + uVar4 * 8);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_0808c3ea;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_0801D1F4(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885c2b0 + (uint)abStack_1c[uVar4 * 2 + 1] * 0x18);
    return in_lr;
  }
LAB_0808c430:
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885c2b0 + (uint)abStack_1c[uVar4 * 2] * 0x18);
  return in_lr;
}

