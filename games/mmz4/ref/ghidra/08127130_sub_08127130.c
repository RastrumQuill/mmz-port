// sub_08127130 at 0x08127130 (thumb)

undefined4 sub_08127130(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar2 = (int *)(&DAT_08138864)[(uint)*(ushort *)(&DAT_08138910 + uVar1) * 3];
  if (*piVar2 == *(int *)(&DAT_0813890c + uVar1)) {
    if (*(short *)(piVar2 + 1) == 0) {
      sub_081277A4(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      sub_08126FF8(piVar2);
    }
  }
  else {
    sub_081277A4(piVar2,*(int *)(&DAT_0813890c + uVar1));
  }
  return in_lr;
}

