// sub_0810204C at 0x0810204C (thumb)

undefined4 sub_0810204C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_0202e8b6 & 0xc0) == 0x40) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  DAT_0202e3c6 = 0x200;
  DAT_0202ddc6 = 4;
  sub_0801CEEC(param_1);
  *(undefined2 *)(param_1 + 0xbe) = 0xc300;
  *(undefined2 *)(param_1 + 0xc0) = 0xc304;
  *(undefined2 *)(param_1 + 0xc2) = 0xc300;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08868648,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x100;
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined *)(param_1 + 0xb8) = 0x30;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

