// sub_080D8628 at 0x080D8628 (thumb)

undefined4 sub_080D8628(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xb00;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sVar1 = sub_0800BED0();
  if (sVar1 == 0) {
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + 0x2000;
    sVar1 = sub_0800BED0(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    sVar1 = sub_0800BED0(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
    if (sVar1 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2000;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836d8a0;
    *(undefined2 *)(param_1 + 0x26) = 0x3801;
    sub_0800BF10(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    sub_08017700(param_1,0xcb01);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d888,param_1 + 0x54,0x50);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x10) = 2;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    sub_08017700(param_1,0xcb00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d870,param_1 + 0x54,0x50);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  sub_080D8784(param_1);
  return in_lr;
}

