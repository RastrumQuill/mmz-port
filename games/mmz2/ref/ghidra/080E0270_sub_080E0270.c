// sub_080E0270 at 0x080E0270 (thumb)

undefined4 sub_080E0270(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_2 + 0x5e0);
  if (cVar2 != '\0') {
    *(char *)(param_2 + 0x5e0) = cVar2 + -2;
    *(char *)(param_2 + 0x5e1) = *(char *)(param_2 + 0x5e1) + -2;
  }
  sub_080E00C4(param_2);
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = *(int *)(param_2 + 0x5d4);
        iVar3 = (-0x1000 - iVar4) * 0x18;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xff;
        }
        iVar4 = iVar4 + (iVar3 >> 8);
        *(int *)(param_2 + 0x5d4) = iVar4;
        if (iVar4 < 0x800) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          *(undefined *)(param_1 + 7) = 0;
        }
      }
      goto LAB_080e0324;
    }
    if (bVar1 != 0) goto LAB_080e0324;
    *(undefined4 *)(param_2 + 0x5d4) = 0xf000;
    *(undefined4 *)(param_2 + 0x5d8) = 0x2000;
    *(undefined *)(param_2 + 0x5e2) = 0x14;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  cVar2 = *(char *)(param_2 + 0x5e2) + -1;
  *(char *)(param_2 + 0x5e2) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
LAB_080e0324:
  DAT_02000fa0._0_2_ = -(short)((uint)*(undefined4 *)(param_2 + 0x5d4) >> 8);
  DAT_02000fa0._2_2_ = -(short)((uint)*(undefined4 *)(param_2 + 0x5d8) >> 8);
  return in_lr;
}

