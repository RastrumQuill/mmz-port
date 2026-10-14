// sub_0802E794 at 0x0802E794 (thumb)

undefined4 sub_0802E794(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0x1a;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08029874(param_1,&DAT_082ad198,0x40);
  *(undefined4 *)(param_1 + 0xb0) = 0x802e9dd;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0xff;
  *(undefined *)(param_1 + 0xc2) = 0;
  sub_080014E8(&DAT_084e00b4,(DAT_02022f92 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e00c0,(DAT_02022fe9 - 5) * 0x20 + 0x200);
  sub_080014E8(&DAT_08500280,(DAT_02023050 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_0850028c,(DAT_020230e0 - 5) * 0x20 + 0x200);
  sub_080014E8(&DAT_08500294,(DAT_02023052 - 0x300) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085002a0,(DAT_020230e1 - 4) * 0x20 + 0x200);
  uVar1 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  uVar2 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),uVar1);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar1 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),uVar1);
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined *)(param_1 + 0xc3) = 7;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar1 = sub_080785E8(param_1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  sub_080785C8(uVar1,2);
  *(undefined2 *)(param_1 + 0xd4) = 0xffff;
  sub_0802E920(param_1);
  return in_lr;
}

