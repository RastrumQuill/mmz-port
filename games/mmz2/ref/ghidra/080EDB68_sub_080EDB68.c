// sub_080EDB68 at 0x080EDB68 (thumb)

undefined4 sub_080EDB68(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar2 = (int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3];
  if (*piVar2 == *(int *)(&DAT_08100a24 + uVar1)) {
    if ((*(short *)(piVar2 + 1) == 0) || (piVar2[1] < 0)) {
      sub_080EE228(piVar2,*piVar2);
    }
  }
  else {
    sub_080EE228(piVar2,*(int *)(&DAT_08100a24 + uVar1));
  }
  return in_lr;
}

