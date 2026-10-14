// sub_080B72C0 at 0x080B72C0 (thumb)

undefined4 sub_080B72C0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar1 = 5;
    }
    else {
      uVar1 = 4;
    }
    sub_080E10C8(param_1 + 0x54,uVar1,0);
  }
  else {
    sub_080E10C8(param_1 + 0x54,6,0);
  }
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  sub_0802AB70(2,0xe,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

