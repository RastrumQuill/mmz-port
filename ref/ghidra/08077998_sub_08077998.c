// sub_08077998 at 0x08077998 (thumb)

undefined8 sub_08077998(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80779ed;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f8a;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe5;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

