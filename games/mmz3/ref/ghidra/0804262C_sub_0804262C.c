// sub_0804262C at 0x0804262C (thumb)

undefined4 sub_0804262C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835ea28)[*(byte *)(param_1 + 0x10)];
  *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d7c40,(DAT_0202fa64 - 0x340) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7c4c,(DAT_0202f864 - 8) * 0x20 + 0x200);
  }
  else {
    sub_0800393C(&DAT_085d7df8,(DAT_0202fa90 - 0x328) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7e04,(DAT_0202f890 - 8) * 0x20 + 0x200);
  }
  sub_0800393C(&DAT_085d7c54,(DAT_0202fa66 - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7c60,(DAT_0202f866 - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7c68,(DAT_0202fa68 - 0x300) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7c74,(DAT_0202f868 - 6) * 0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801749C(param_1);
  if ((((DAT_02002446 & 4) == 0) || (*(char *)(param_1 + 0x10) != '\0')) &&
     (((DAT_02002446 & 8) == 0 || (*(char *)(param_1 + 0x10) != '\x01')))) {
    sub_0803D3D4(param_1,&DAT_0835e8c0,0x40);
  }
  else {
    sub_0803D3D4(param_1,&DAT_0835e8c0,0x50);
  }
  *(undefined4 *)(param_1 + 0x98) = 0x80425d1;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined2 *)(param_1 + 0xb8) = 0xc0;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  iVar2 = *(int *)(param_1 + 0x54) >> 8;
  *(int *)(param_1 + 0xc4) = iVar2;
  iVar2 = FUN_080fe2f8(iVar2,0xf0);
  *(int *)(param_1 + 0xc4) = iVar2 * 0xf000 + 0x7800;
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_08042838(param_1);
  return in_lr;
}

