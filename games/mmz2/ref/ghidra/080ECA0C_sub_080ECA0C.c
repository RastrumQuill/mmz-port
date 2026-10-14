// sub_080ECA0C at 0x080ECA0C (thumb)

undefined4 sub_080ECA0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x1300;
  DAT_02000f96 = 0x4206;
  DAT_02000fa0 = 0;
  sub_08002638(&DAT_08390e14,0x4000);
  sub_08002AEC(&DAT_08390e20,0);
  iVar1 = param_1 + 0xee0;
  local_20[0] = 0;
  sub_080EEF68(local_20,iVar1,0x1000400);
  sub_08002638(&DAT_08390ea0,(DAT_02000f96 & 0xc) * 0x1000);
  sub_08002AEC(&DAT_08390eac,0);
  sub_080EEF68(&DAT_083887e0,iVar1,0x140);
  *(int *)(param_1 + 0xdd4) = iVar1;
  return in_lr;
}

