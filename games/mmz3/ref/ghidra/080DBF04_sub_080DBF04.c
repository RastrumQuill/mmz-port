// sub_080DBF04 at 0x080DBF04 (thumb)

undefined4 sub_080DBF04(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  local_1c = *(int *)(param_1 + 0x54) + -0x400;
  local_18 = *(int *)(param_1 + 0x58) + -0xf00;
  sub_080B5F14(&local_1c,&DAT_0836dd38,0,0);
  local_1c = *(int *)(param_1 + 0x54) + 0x800;
  local_18 = *(int *)(param_1 + 0x58) + -0xf00;
  sub_080B5F14(&local_1c,&DAT_0836dd54,0,0);
  local_1c = *(int *)(param_1 + 0x54) + -0x400;
  local_18 = *(int *)(param_1 + 0x58) + 0x100;
  sub_080B5F14(&local_1c,&DAT_0836dd70,0,0);
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0xc00;
  sub_080B2484(1,&local_1c);
  if (DAT_0202e48c < *(int *)(param_1 + 0x58)) {
    sub_0800471C(0x31);
  }
  else {
    sub_0800471C(0x2a);
  }
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 0xb4) {
    sub_080E0A70(bVar1,param_1 + 0x54,1);
  }
  else if (bVar1 == 0xfe) {
    sub_08024FE4(4,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

