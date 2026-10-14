// sub_0809BED8 at 0x0809BED8 (thumb)

undefined4 sub_0809BED8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  byte abStack_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_54[0] = 0xa70c;
  local_54[1] = 0xa70c;
  local_54[2] = 0xa711;
  local_54[3] = 0xa711;
  local_44[0] = 0xa70d;
  local_44[1] = 0xa70d;
  local_44[2] = 0xa712;
  local_44[3] = 0xa712;
  sub_08128B5C(abStack_34,&DAT_081295b0,4);
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  uVar4 = (uint)*(byte *)(param_1 + 0xb5);
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = true;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      if (uVar4 == 0) {
        sub_0801CF00(param_1,*(undefined2 *)(local_44 + uVar2));
      }
      else {
        sub_0801CF00(param_1,*(undefined2 *)(local_54 + uVar2));
      }
      *(char *)(param_1 + 0xb4) = '\0';
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  local_30 = *(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0xb4);
  local_2c = *(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0xb8);
  local_28 = *(int *)(&DAT_0885de34 + uVar2 * 8);
  local_24 = *(int *)(&DAT_0885de38 + uVar2 * 8);
  *(uint *)(param_1 + 0x54) = *(int *)(iVar3 + 0xb4) + local_28 * uVar4;
  *(uint *)(param_1 + 0x58) = *(int *)(iVar3 + 0xb8) + local_24 * uVar4;
  if ((local_28 != 0) && (iVar3 = FUN_081288bc(local_30,local_28), iVar3 < (int)(uVar4 + 1))) {
    bVar1 = false;
  }
  if ((local_24 != 0) && (iVar3 = FUN_081288bc(local_2c,local_24), iVar3 < (int)(uVar4 + 1))) {
    bVar1 = false;
  }
  if (bVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_34[uVar2]])
                );
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08005784(param_1 + 0x74,&DAT_0885dcd0);
  }
  return in_lr;
}

