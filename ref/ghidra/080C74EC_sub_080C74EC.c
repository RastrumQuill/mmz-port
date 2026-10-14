// sub_080C74EC at 0x080C74EC (thumb)

undefined4 sub_080C74EC(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  piVar2 = (int *)(&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar1) * 3];
  if (*piVar2 == *(int *)(&DAT_080d2c04 + uVar1)) {
    if ((*(short *)(piVar2 + 1) == 0) || (piVar2[1] < 0)) {
      sub_080C7BAC(piVar2,*piVar2);
    }
  }
  else {
    sub_080C7BAC(piVar2,*(int *)(&DAT_080d2c04 + uVar1));
  }
  return in_lr;
}

