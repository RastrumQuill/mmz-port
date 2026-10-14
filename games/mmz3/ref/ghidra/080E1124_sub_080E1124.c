// sub_080E1124 at 0x080E1124 (thumb)

undefined8 sub_080E1124(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = 0;
  do {
    if (bVar1 == 0) {
      local_1c = *param_1;
      local_18 = param_1[1];
    }
    else {
      if (bVar1 == 1) {
        local_1c = *param_1;
        iVar2 = 0x7800;
      }
      else {
        local_1c = *param_1;
        iVar2 = -0x7800;
      }
      local_1c = local_1c + iVar2;
    }
    iVar2 = sub_080E1024(&local_1c);
    if (*(byte *)(iVar2 + 9) < 0x44) {
      if (((&DAT_0836e280)[*(byte *)(iVar2 + 9)] == -1) ||
         (iVar3 = sub_0801A9A8(&DAT_02030288,iVar2 + 0x54), iVar3 != 0)) goto LAB_080e11ac;
      uVar4 = (uint)*(byte *)(iVar2 + 9);
      if (0xfd < (byte)(&DAT_0836e280)[uVar4]) goto LAB_080e11c6;
      if (uVar4 == 7) {
        if ((*(byte *)(iVar2 + 0x10) != 2) && (*(byte *)(iVar2 + 0x10) < 5)) goto LAB_080e11c6;
      }
      else if (uVar4 == 0x16) {
        if (1 < (byte)(*(char *)(iVar2 + 0x10) - 1U)) goto LAB_080e11c6;
      }
      else if (uVar4 == 0x39) {
        if (*(byte *)(iVar2 + 0x10) < 2) goto LAB_080e11c6;
      }
      else if ((&DAT_0836e280)[uVar4] == *(byte *)(iVar2 + 0x10)) goto LAB_080e11c6;
LAB_080e11ac:
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
LAB_080e11c6:
      if (iVar2 != 0) break;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 3);
  return CONCAT44(in_lr,iVar2);
}

