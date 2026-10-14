// sub_08046B6C at 0x08046B6C (thumb)

undefined4 sub_08046B6C(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_080296B0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x1f) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0x40;
  }
  else {
    uVar1 = 0x60;
  }
  *(undefined *)(param_1 + 0xcb) = uVar1;
  sub_08029874(param_1,&DAT_082aeaa4,*(undefined *)(param_1 + 0xcb));
  *(undefined4 *)(param_1 + 0xb0) = 0x80487fd;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x4c) + -0x800;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0x800;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0xbc00;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x6000;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xc9) = 1;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xe4) = 0;
  uVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar2 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined *)(param_1 + 0xd6) = 0x14;
  *(undefined *)(param_1 + 0xd5) = 0x14;
  *(undefined *)(param_1 + 0xd4) = 0x14;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  sub_080014E8(&DAT_08500604,(DAT_020230aa - 0x310) * 0x20 + 0x10000);
  sub_0800179C(&DAT_08500610,(DAT_0202310d - 7) * 0x20 + 0x200);
  sub_080014E8(&DAT_084e030c,(DAT_02022fce - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e0318,(DAT_02023007 - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08046B38(param_1);
  return in_lr;
}

