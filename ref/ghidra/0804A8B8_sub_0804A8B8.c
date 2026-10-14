// sub_0804A8B8 at 0x0804A8B8 (thumb)

undefined8 sub_0804A8B8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar4 = ~(uint)(*(byte *)(param_1 + 10) >> 5) & 1;
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((int)(iVar2 - (*(int *)(param_1 + 0x50) + uVar4 * 0x1000)) < 0x440) {
    *(uint *)(param_1 + 0x50) = iVar2 + uVar4 * -0x1000;
    if (0x40 < *(int *)(param_1 + 0x58)) {
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x02')) {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    iVar2 = (bVar1 & 1) * 0x1000 + -0x800;
    iVar3 = *(int *)(param_1 + 0x50) + -0x800 + uVar4 * 0x1000;
    if ((bVar1 & 1) == 0) {
      iVar2 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar2,iVar3);
      if ((iVar2 < 1) || (iVar2 < -0x4ff)) goto LAB_0804a956;
    }
    else {
      iVar2 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar2,iVar3);
      if ((-1 < iVar2) || (0x4ff < iVar2)) goto LAB_0804a956;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
    uVar5 = 1;
  }
LAB_0804a956:
  return CONCAT44(in_lr,uVar5);
}

