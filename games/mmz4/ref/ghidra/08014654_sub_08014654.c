// sub_08014654 at 0x08014654 (thumb)

undefined8 sub_08014654(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  if ((DAT_0202cac0 & 0xf) != 2) {
    if (param_1[1] - 0xa001U < 0x9fff) {
      iVar3 = 0x12c000;
      iVar2 = param_1[1] + -0xa000 >> 8;
      if (iVar2 - 0x10U < 0x90) {
        iVar3 = iVar2 * -0x40 + 0x12c000;
      }
    }
    if ((iVar3 < *param_1) && (*param_1 < iVar3 + 0xa000)) {
      uVar1 = 1;
      goto LAB_080146b6;
    }
  }
  uVar1 = 0;
LAB_080146b6:
  return CONCAT44(in_lr,uVar1);
}

