// sub_08020F28 at 0x08020F28 (thumb)

undefined4 sub_08020F28(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_3 != 0) {
    uVar1 = sub_0801F3D0(*(uint *)(param_1 + 0x84));
    if (param_2 == (uVar1 & 0xff)) {
      *(uint *)(param_1 + 0x84) = (uint)DAT_020011bc;
    }
  }
  return in_lr;
}

