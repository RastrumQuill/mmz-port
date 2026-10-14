// sub_080863B8 at 0x080863B8 (thumb)

undefined4 sub_080863B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08017654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6a03);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08364db0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + -0x1600;
    uVar1 = 0xfffffc00;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + 0x1600;
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0xf00;
  *(undefined2 *)(param_1 + 0xc0) = 600;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x40;
  *(undefined2 *)(param_1 + 0x52) = 0x40;
  sub_0808647C(param_1);
  return in_lr;
}

