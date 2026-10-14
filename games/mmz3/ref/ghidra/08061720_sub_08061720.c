// sub_08061720 at 0x08061720 (thumb)

undefined4 sub_08061720(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08361e90;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08361e98)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xb4 + uVar2) = 7;
    sub_080930CC(param_1,uVar2 & 0xff,*(undefined *)(param_1 + 0x10));
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  sub_0800393C(&DAT_085d83d4,(DAT_0202fb26 - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d83e0,(DAT_0202f926 - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7e34,(DAT_0202fa96 - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7e40,(DAT_0202f896 - 4) * 0x20 + 0x200);
  sub_0803D3D4(param_1,&DAT_08361e78,1);
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(uint *)(param_1 + 0x58) = iVar1 + -0x1800 + (uint)*(byte *)(param_1 + 0x10) * -0x1800;
  *(undefined *)(param_1 + 0x22) = 0;
  sub_08017700(param_1,0x8b00);
  iVar1 = sub_08017B8C(param_1);
  sub_080040A8(0xcb,(uint)(iVar1 << 0x18) >> 0x13 | 0x200);
  *(undefined *)(param_1 + 0x22) = 1;
  sub_08017700(param_1,0x8b00);
  iVar1 = sub_08017B8C(param_1);
  sub_080040A8(0xcc,(uint)(iVar1 << 0x18) >> 0x13 | 0x200);
  sub_0800471C(0xe0);
  sub_080618C0(param_1);
  return in_lr;
}

