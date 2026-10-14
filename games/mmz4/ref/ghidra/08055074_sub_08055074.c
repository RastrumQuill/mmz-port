// sub_08055074 at 0x08055074 (thumb)

undefined8 sub_08055074(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  while ((*(byte *)(param_1 + 0xb6) & 4) == 0) {
    iVar2 = *(int *)(param_1 + 100);
    iVar1 = *(int *)(param_1 + 0x5c) + iVar2;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar2 < 0) {
      uVar3 = 0xfffffe00;
      if (iVar1 < -0x200) {
LAB_080550a8:
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
      }
    }
    else {
      uVar3 = 0x200;
      if (0x200 < iVar1) goto LAB_080550a8;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar1 = FUN_081288bc(iVar4,-iVar2);
    iVar1 = (iVar4 * 2 + -iVar2 * (-iVar1 + 1)) * -iVar1 >> 1;
    iVar2 = *(int *)(param_1 + 0x54);
    if (((iVar2 + iVar1) - *(int *)(param_1 + 0xc0)) + 0x7800U < 0xf001) {
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((uint)(iVar1 * 2) < (uint)((iVar2 - param_2) + iVar1)) {
        *(int *)(param_1 + 0x54) = iVar2 + iVar4;
        goto LAB_08055170;
      }
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
  }
  iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar2 = *(int *)(param_1 + 0xc0) + -0x7800;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x54) = iVar2;
    uVar3 = 0;
    goto LAB_08055172;
  }
  iVar2 = *(int *)(param_1 + 0xc0) + 0x7800;
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x54) = iVar2;
    uVar3 = 0;
    goto LAB_08055172;
  }
  if (*(int *)(param_1 + 100) < 0) {
    if ((param_2 != 0) && (iVar1 <= param_2)) {
LAB_08055154:
      *(int *)(param_1 + 0x54) = param_2;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_08055172;
    }
    if (0 < *(int *)(param_1 + 0x5c)) {
LAB_08055162:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    if ((param_2 != 0) && (param_2 <= iVar1)) goto LAB_08055154;
    if (*(int *)(param_1 + 0x5c) < 0) goto LAB_08055162;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar3 = 0;
  }
  else {
LAB_08055170:
    uVar3 = 1;
  }
LAB_08055172:
  return CONCAT44(in_lr,uVar3);
}

