// sub_0803FEA8 at 0x0803FEA8 (thumb)

undefined4 sub_0803FEA8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  iVar2 = param_1 + 0x54;
  sub_0803FB14(uVar1,iVar2,0);
  sub_0803FB14(uVar1,iVar2,1);
  sub_0803FB14(uVar1,iVar2,2);
  sub_0803FB14(uVar1,iVar2,3);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

