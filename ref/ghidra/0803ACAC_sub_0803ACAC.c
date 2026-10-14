// sub_0803ACAC at 0x0803ACAC (thumb)

undefined4 sub_0803ACAC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082add04)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    if (DAT_02022b60 == 0x10) {
      sub_08029874(param_1,&DAT_082adbd0,0x40);
    }
    else {
      sub_08029874(param_1,&DAT_082adbd0,0x40);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x803af45;
    uVar3 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    iVar1 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),uVar3);
    iVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),uVar3);
    iVar1 = iVar1 + iVar2 >> 1;
    *(int *)(param_1 + 0xc0) = iVar1 + -0x2000;
    *(int *)(param_1 + 0xc4) = iVar1 + 0x2000;
    sub_080014E8(&DAT_084e01f4,(DAT_02022fb2 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0200,(DAT_02022ff9 - 5) * 0x20 + 0x200);
    sub_080014E8(&DAT_08500488,(DAT_02023084 - 0x310) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08500494,(DAT_020230fa - 6) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined *)(param_1 + 0xd8) = 0;
    *(undefined *)(param_1 + 0xda) = 0;
    *(undefined *)(param_1 + 0xdb) = 0xff;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
  }
  sub_0803AE30(param_1);
  return in_lr;
}

