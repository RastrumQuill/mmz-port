// sub_0805AC6C at 0x0805AC6C (thumb)

undefined4 sub_0805AC6C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
    DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
  }
  sub_08004768((int)*(short *)(param_1 + 200));
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(bool *)(param_1 + 0xc4) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  sub_08017700(param_1,0xb40b);
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(*(int *)(param_1 + 0x2c) + 0xf) = 1;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

