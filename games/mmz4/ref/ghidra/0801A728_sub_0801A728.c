// sub_0801A728 at 0x0801A728 (thumb)

undefined8 sub_0801A728(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 - 0x82001U < 0x1dfff) {
    iVar2 = (param_2 >> 0xc) * (uint)DAT_02001290;
    uVar1 = -(uint)((&DAT_02001290)[iVar2 + (param_1 >> 0xc) + 2] ^
                   (&DAT_02001290)[iVar2 + (param_1 + -0x2d000 >> 0xc) + 2]) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

