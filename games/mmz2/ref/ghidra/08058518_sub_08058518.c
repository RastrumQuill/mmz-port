// sub_08058518 at 0x08058518 (thumb)

undefined4 sub_08058518(int param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x4000U < 0x8000) &&
     ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4000U < 0x8000)) {
    puVar3 = (ushort *)(param_1 + 0xb6);
    uVar1 = *puVar3;
    *puVar3 = uVar1 + 1;
    if (0x1e < (ushort)(uVar1 + 1)) {
      sub_08058490(param_1);
      *puVar3 = 0;
      return in_lr;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xb6) = 0;
  }
  piVar2 = (int *)sub_0803F9C0(param_1);
  if (((piVar2 == (int *)0x0) || (0xbfff < (*piVar2 - *(int *)(param_1 + 0x54)) + 0x6000U)) ||
     (0xbfff < (piVar2[1] - *(int *)(param_1 + 0x58)) + 0x6000U)) {
    if (*(short *)(param_1 + 0xb8) == 0x1518) {
      sub_08058490(param_1);
    }
  }
  else {
    sub_08058490(param_1);
  }
  return in_lr;
}

