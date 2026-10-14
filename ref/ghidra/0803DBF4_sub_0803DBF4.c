// sub_0803DBF4 at 0x0803DBF4 (thumb)

undefined4 sub_0803DBF4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082ae31d)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) != '\x01') {
    sub_08029874(param_1,&DAT_082ade34,0x60);
    *(undefined4 *)(param_1 + 0xb0) = 0x803ddd5;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = sub_08081C44(param_1);
      *(undefined4 *)(param_1 + 0xcc) = uVar1;
      sub_080014E8(&DAT_084e0230,(DAT_02022fb8 - 0x210) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084e023c,(DAT_02022ffc - 4) * 0x20 + 0x200);
      sub_080014E8(&DAT_084e0244,(DAT_02022fba - 0x340) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084e0250,(DAT_02022ffd - 4) * 0x20 + 0x200);
    }
  }
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  sub_0803DD04(param_1);
  return in_lr;
}

