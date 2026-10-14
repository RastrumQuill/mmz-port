// sub_0809DEF0 at 0x0809DEF0 (thumb)

undefined8 sub_0809DEF0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x2c;
    *(undefined4 *)(iVar1 + 0x14) = 0x809df55;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_2;
    uVar2 = param_3[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_3;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined4 *)(iVar1 + 0xb4) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

