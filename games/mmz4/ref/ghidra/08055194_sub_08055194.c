// sub_08055194 at 0x08055194 (thumb)

undefined8 sub_08055194(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  while ((*(byte *)(param_1 + 0xb6) & 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x60) + iVar2;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar2 < 0) {
      uVar3 = 0xfffffd00;
      if (iVar1 < -0x300) {
LAB_080551c8:
        *(undefined4 *)(param_1 + 0x60) = uVar3;
      }
    }
    else {
      uVar3 = 0x300;
      if (0x300 < iVar1) goto LAB_080551c8;
    }
    iVar4 = *(int *)(param_1 + 0x60);
    iVar1 = FUN_081288bc(iVar4,-iVar2);
    iVar1 = (iVar4 * 2 + -iVar2 * (-iVar1 + 1)) * -iVar1 >> 1;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((uint)(iVar1 * 2) < (uint)((*(int *)(param_1 + 0x58) - param_2) + iVar1)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      goto LAB_08055250;
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 8;
  }
  iVar1 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) < 0) {
    if ((param_2 != 0) && (iVar1 <= param_2)) {
LAB_08055234:
      *(int *)(param_1 + 0x58) = param_2;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto LAB_08055252;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
LAB_08055242:
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    if ((param_2 != 0) && (param_2 <= iVar1)) goto LAB_08055234;
    if (*(int *)(param_1 + 0x60) < 0) goto LAB_08055242;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar3 = 0;
  }
  else {
LAB_08055250:
    uVar3 = 1;
  }
LAB_08055252:
  return CONCAT44(in_lr,uVar3);
}

