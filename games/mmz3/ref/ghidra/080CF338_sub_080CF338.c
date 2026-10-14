// sub_080CF338 at 0x080CF338 (thumb)

undefined4 sub_080CF338(int param_1)

{
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_10 = *(int *)(param_1 + 0x54) + -0x1000;
  local_c = *(int *)(param_1 + 0x58) + -0x800;
  sub_080B2484(1,&local_10);
  local_10 = *(int *)(param_1 + 0x54) + 0x1000;
  local_c = *(undefined4 *)(param_1 + 0x58);
  sub_080B2484(1,&local_10);
  sub_0800471C(0x2a);
  sub_080B7A3C(param_1,&local_10,&DAT_0836ce98,3);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

