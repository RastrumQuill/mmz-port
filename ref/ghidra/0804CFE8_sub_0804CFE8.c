// sub_0804CFE8 at 0x0804CFE8 (thumb)

undefined8 sub_0804CFE8(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x804d069;
    *(ushort *)(iVar1 + 0x1c) = DAT_02022ea6;
    *(byte *)(iVar1 + 0x1e) = DAT_02022f33;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = 0;
    sub_080014E8(&DAT_084b803c,(DAT_02022ea6 - 0x230) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8048,(DAT_02022f33 - 5) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

