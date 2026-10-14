// sub_080FCD10 at 0x080FCD10 (thumb)

undefined4 sub_080FCD10(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar2 = (int *)(&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + uVar1) * 3];
  if (*piVar2 == *(int *)(&DAT_0810bfe8 + uVar1)) {
    if ((*(short *)(piVar2 + 1) == 0) || (piVar2[1] < 0)) {
      sub_080FD3D0(piVar2,*piVar2);
    }
  }
  else {
    sub_080FD3D0(piVar2,*(int *)(&DAT_0810bfe8 + uVar1));
  }
  return in_lr;
}

