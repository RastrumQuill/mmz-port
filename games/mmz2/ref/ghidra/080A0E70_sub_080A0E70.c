// sub_080A0E70 at 0x080A0E70 (thumb)

undefined8 sub_080A0E70(int param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B50(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1105;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 4;
    if (param_1 == 0) {
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      iVar2 = param_2[1];
    }
    else {
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      iVar2 = *(int *)(param_1 + 0x58) + 0x1000;
    }
    *(int *)(iVar1 + 0x58) = iVar2;
    *(undefined *)(iVar1 + 0xb6) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

