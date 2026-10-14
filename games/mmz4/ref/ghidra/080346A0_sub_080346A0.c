// sub_080346A0 at 0x080346A0 (thumb)

undefined4 sub_080346A0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 199) < 4) {
    uVar1 = *(uint *)(param_1 + 600);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        sub_0801CF00(param_1,0x2a02);
        *(undefined *)(param_1 + 0x157) = 0;
      }
      else {
        sub_0801CF00(param_1,0x2a03);
        *(undefined *)(param_1 + 0x157) = 2;
      }
    }
    else if ((uVar1 & 0x30) == 0) {
      sub_0801CF00(param_1,0x2a00);
      *(undefined *)(param_1 + 0x157) = 3;
    }
    else {
      sub_0801CF00(param_1,0x2a01);
      *(undefined *)(param_1 + 0x157) = 1;
    }
  }
  else {
    sub_0801CF00(param_1,0x2a02);
    *(undefined *)(param_1 + 0x157) = 0;
  }
  *(undefined *)(param_1 + 0x152) = 4;
  *(undefined *)(param_1 + 0x101) = 1;
  sub_0803476C(param_1);
  return in_lr;
}

