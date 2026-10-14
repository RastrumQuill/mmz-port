// sub_08099154 at 0x08099154 (thumb)

undefined8 sub_08099154(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x49;
    *(undefined4 *)(iVar1 + 0x14) = 0x80991d9;
    *(ushort *)(iVar1 + 0x1c) = DAT_020230a2;
    *(byte *)(iVar1 + 0x1e) = DAT_02023109;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    sub_080014E8(&DAT_085005b4,(DAT_020230a2 - 0x1d0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_085005c0,(DAT_02023109 - 0xe) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

