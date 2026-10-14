// sub_0801492C at 0x0801492C (thumb)

undefined4 sub_0801492C(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(byte)DAT_0202ec30;
  DAT_0202ec3c = 0;
  DAT_0202ec38 = 0;
  DAT_0202edad = 0;
  DAT_0202edac = 0;
  DAT_0202edb4 = 0xffffffff;
  DAT_0202eda8 = param_1;
  sub_080154CC();
  sub_08014F38(&DAT_0202ed18,&DAT_08326178,param_1);
  sub_08007F64(*(undefined4 *)(&DAT_08326084 + uVar1 * 4),&DAT_0202ed50);
  if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08326164)[uVar1]) == 0) {
    sub_08012E04((&DAT_08326070)[uVar1],0);
  }
  else {
    sub_08012E04((&DAT_08326070)[uVar1],1);
  }
  sub_0801B320(&DAT_0202ec40,uVar1);
  sub_08013FFC(uVar1,&DAT_02036b44);
  sub_080141F8();
  return in_lr;
}

