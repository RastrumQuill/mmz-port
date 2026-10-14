// sub_080298DC at 0x080298DC (thumb)

undefined4 sub_080298DC(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029874(param_1,&DAT_082acc9c,0x20);
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0xffff;
  uVar1 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  puVar2 = (undefined4 *)(param_1 + 0xc0);
  *puVar2 = uVar1;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  uVar1 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*puVar2);
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*puVar2);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  sub_08089588(param_1,(undefined *)(param_1 + 0xb9));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080014E8(&DAT_08500064,(DAT_0202301a - 0x218) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08500070,(DAT_020230c5 - 7) * 0x20 + 0x200);
    sub_0804CF6C(param_1);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    sub_080014E8(&DAT_08500064,(DAT_0202301a - 0x218) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08500070,(DAT_020230c5 - 7) * 0x20 + 0x200);
    sub_0804CFE8(param_1);
    *(undefined *)(param_1 + 0xd) = 4;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08029A34(param_1);
  return in_lr;
}

