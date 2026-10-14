// sub_080AF77C at 0x080AF77C (thumb)

undefined4 sub_080AF77C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
    sub_080D0C00(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),0);
    sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
    sub_080D0C00(*(int *)(param_1 + 0x54) + -0x500,*(undefined4 *)(param_1 + 0x58),0);
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_080D0894(2,param_1 + 0x54);
      sub_080AFF74(param_1);
      sub_080E49F8(param_1 + 0x54,1,0);
    }
    else {
      sub_080E49F8(param_1 + 0x54,0,0);
    }
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    sub_0802AB70(2,10,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

