// sub_080EDBB4 at 0x080EDBB4 (thumb)

undefined4 sub_080EDBB4(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar2 = (int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3];
  if (*piVar2 == *(int *)(&DAT_08100a24 + uVar1)) {
    if (*(short *)(piVar2 + 1) == 0) {
      sub_080EE228(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      sub_080EDA7C(piVar2);
    }
  }
  else {
    sub_080EE228(piVar2,*(int *)(&DAT_08100a24 + uVar1));
  }
  return in_lr;
}

