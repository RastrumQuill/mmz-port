// sub_08036A18 at 0x08036A18 (thumb)

undefined4 sub_08036A18(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 199) < 4) {
    uVar1 = *(uint *)(param_1 + 600);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        sub_0801CF00(param_1,0x2b02);
        *(undefined *)(param_1 + 0x157) = 0;
      }
      else if ((uVar1 & 0x30) == 0) {
        sub_0801CF00(param_1,0x2b04);
        *(undefined *)(param_1 + 0x157) = 4;
      }
      else {
        sub_0801CF00(param_1,0x2b03);
        *(undefined *)(param_1 + 0x157) = 2;
      }
    }
    else if ((uVar1 & 0x30) == 0) {
      sub_0801CF00(param_1,0x2b00);
      *(undefined *)(param_1 + 0x157) = 3;
    }
    else {
      sub_0801CF00(param_1,0x2b01);
      *(undefined *)(param_1 + 0x157) = 1;
    }
  }
  else {
    sub_0801CF00(param_1,0x2b02);
    *(undefined *)(param_1 + 0x157) = 0;
  }
  *(undefined *)(param_1 + 0x152) = 4;
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08036B08(param_1);
  return in_lr;
}

