// sub_08015448 at 0x08015448 (thumb)

undefined8 sub_08015448(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    psVar4 = (short *)(param_1 + 0x158);
    if (*psVar4 != -1) {
      sub_08001E44(*psVar4);
      *psVar4 = -1;
    }
    psVar4 = (short *)(param_1 + 0x15a);
    if (*psVar4 != -1) {
      sub_08001E44(*psVar4);
      *psVar4 = -1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sub_08001E34(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
      *(short *)(param_1 + 0x158) = (short)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    }
  }
  else if (((bVar1 == 2) && (*(short *)(param_1 + 0x158) != -1)) &&
          (iVar2 = sub_08001E7C(*(short *)(param_1 + 0x158)), iVar2 != 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar3 = 1;
    goto LAB_080154dc;
  }
  uVar3 = 0;
LAB_080154dc:
  return CONCAT44(in_lr,uVar3);
}

