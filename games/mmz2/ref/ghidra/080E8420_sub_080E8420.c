// sub_080E8420 at 0x080E8420 (thumb)

undefined4 sub_080E8420(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x1300;
  DAT_02000f96 = 0x4206;
  DAT_02000fa0 = 0;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002638(&DAT_08390e78,0x4000);
    sub_08002AEC(&DAT_08390e84,0);
  }
  else {
    sub_08002638(&DAT_08390e50,0x4000);
    sub_08002AEC(&DAT_08390e5c,0);
  }
  local_14[0] = 0;
  sub_080EEF68(local_14,param_1 + 0xee0,0x1000400);
  return in_lr;
}

