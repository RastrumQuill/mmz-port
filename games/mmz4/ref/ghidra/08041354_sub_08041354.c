// sub_08041354 at 0x08041354 (thumb)

undefined8 sub_08041354(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (uVar1 == 0x2201) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = -0x1300;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = 0x1300;
    }
    *param_2 = iVar2 + iVar4;
    iVar2 = *(int *)(param_1 + 0x58);
    iVar4 = -0x1900;
LAB_080413fe:
    param_2[1] = iVar2 + iVar4;
    uVar3 = 0;
  }
  else {
    if (uVar1 < 0x2202) {
      if (uVar1 == 0x1f01) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar2 = *(int *)(param_1 + 0x54);
          iVar4 = -0x1700;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x54);
          iVar4 = 0x1700;
        }
        *param_2 = iVar2 + iVar4;
        iVar2 = *(int *)(param_1 + 0x58);
        iVar4 = -0x1600;
        goto LAB_080413fe;
      }
    }
    else if (uVar1 == 0x2400) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = 0x1700;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = -0x1700;
      }
      *param_2 = iVar2 + iVar4;
      iVar2 = *(int *)(param_1 + 0x58);
      iVar4 = -0x1100;
      goto LAB_080413fe;
    }
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

