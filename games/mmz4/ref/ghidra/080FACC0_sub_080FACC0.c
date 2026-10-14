// sub_080FACC0 at 0x080FACC0 (thumb)

undefined4 sub_080FACC0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\0') {
    sub_080E2C9C(param_1 + 100,(*(uint *)(param_1 + 0x8c) & 0x10000) == 0,0);
  }
  else {
    sub_080E2C9C(param_1 + 100,2,0);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(2,0xd,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

