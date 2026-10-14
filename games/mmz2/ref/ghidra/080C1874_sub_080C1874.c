// sub_080C1874 at 0x080C1874 (thumb)

undefined4 sub_080C1874(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  sub_080EF118(param_1,*(undefined4 *)
                        (&DAT_0834885c +
                        ((int)(-(uint)*(byte *)(param_1 + 0x10) | (uint)*(byte *)(param_1 + 0x10))
                         >> 0x1f & 4)));
  uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar1 < 0x4000) {
    uVar1 = (*(int *)(param_1 + 0xb4) >> 7) + DAT_0202e034;
    if ((uVar1 & 0x7f) == 0) {
      local_18 = *(int *)(param_1 + 0x54) + 0x2500;
      local_14 = *(int *)(param_1 + 0x58) + 0x1500;
      iVar2 = sub_080984AC(&local_18,0x400,0x80);
      if (iVar2 != 0) {
        sub_080032EC(0x2d);
      }
    }
    else if ((uVar1 & 0x3f) == 0) {
      local_10 = *(int *)(param_1 + 0x54) + -0x2500;
      local_c = *(int *)(param_1 + 0x58) + 0x1500;
      iVar2 = sub_080984AC(&local_10,0x400,0);
      if (iVar2 != 0) {
        sub_080032EC(0x2d);
      }
    }
  }
  return in_lr;
}

