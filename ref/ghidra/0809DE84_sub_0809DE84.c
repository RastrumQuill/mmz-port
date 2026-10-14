// sub_0809DE84 at 0x0809DE84 (thumb)

undefined8 sub_0809DE84(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x809df01;
    *(ushort *)(iVar1 + 0x1c) = DAT_02023176;
    *(byte *)(iVar1 + 0x1e) = DAT_02023123;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    sub_080014E8(&DAT_0851003c,(DAT_02023176 - 0x370) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08510048,(DAT_02023123 - 8) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

