// sub_0808E8A0 at 0x0808E8A0 (thumb)

undefined4 sub_0808E8A0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x1a);
  }
  if ((*puVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
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
    sub_0808F558(param_1);
    return in_lr;
  }
  if ((*puVar3 & 1) == 0) {
LAB_0808e940:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808e9fc;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      sub_0808FC6C(param_1);
    }
    else {
      uVar1 = sub_0802AD94(0,param_1,&DAT_0885c634);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    goto LAB_0808e940;
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
    *(int *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_0801D1F4(param_1);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885c69c +
                 (uint)*(byte *)(*(int *)(*(char *)(param_1 + 0x71) * 4 +
                                         *(int *)(&DAT_0885ca70 +
                                                 (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                           *(undefined *)(param_1 + 0x70)) - 0x3900)
                                                 * 4)) + 1) * 0x18);
    return in_lr;
  }
LAB_0808e9fc:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885c650 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

