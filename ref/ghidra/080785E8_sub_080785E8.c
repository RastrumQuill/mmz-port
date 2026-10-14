// sub_080785E8 at 0x080785E8 (thumb)

undefined8 sub_080785E8(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x807880d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f92;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe9;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

