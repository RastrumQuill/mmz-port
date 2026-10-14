// sub_08099280 at 0x08099280 (thumb)

undefined8 sub_08099280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(short *)(DAT_0202300c + 10) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08005458(DAT_0202300c);
    *(undefined *)(iVar1 + 9) = 0x4a;
    *(undefined4 *)(iVar1 + 0x14) = 0x8099355;
    *(ushort *)(iVar1 + 0x1c) = DAT_020230a4;
    *(byte *)(iVar1 + 0x1e) = DAT_0202310a;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = param_2;
    iVar1 = sub_08005458(DAT_0202300c);
    *(undefined *)(iVar1 + 9) = 0x4a;
    *(undefined4 *)(iVar1 + 0x14) = 0x8099355;
    *(ushort *)(iVar1 + 0x1c) = DAT_020230a4;
    *(byte *)(iVar1 + 0x1e) = DAT_0202310a;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = param_2;
    sub_080014E8(&DAT_085005c8,(DAT_020230a4 - 0x1c0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_085005d4,(DAT_0202310a - 4) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

