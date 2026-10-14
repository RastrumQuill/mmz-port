// sub_080E8BE4 at 0x080E8BE4 (thumb)

undefined4 sub_080E8BE4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CDBC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865da6 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((uint)*(byte *)(param_1 + 0x11) * 0xf + -0x46) * 0x100;
  iVar1 = *(int *)(param_1 + 0x58) + -0xa00;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x78) = iVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  *(undefined2 *)(param_1 + 0x52) = 0x200;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080E88D0(param_1);
  return in_lr;
}

