// sub_0801CA34 at 0x0801CA34 (thumb)

undefined8 sub_0801CA34(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    uVar4 = *(uint *)(param_1 + 0x158);
    if (uVar4 != 0xffffffff) {
      sub_08003274(uVar4 & 0xffff);
      *(uint *)(param_1 + 0x158) = 0xffffffff;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x158);
      if (uVar4 != 0xffffffff) {
        sub_08003274(uVar4 & 0xffff);
      }
      sub_08003264(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
      *(uint *)(param_1 + 0x158) = *(uint *)(*(int *)(param_1 + 0xc) + 4);
    }
  }
  else if (((bVar1 == 2) && (*(uint *)(param_1 + 0x158) != 0xffffffff)) &&
          (iVar2 = sub_080032AC(*(uint *)(param_1 + 0x158) & 0xffff), iVar2 != 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar3 = 1;
    goto LAB_0801cabc;
  }
  uVar3 = 0;
LAB_0801cabc:
  return CONCAT44(in_lr,uVar3);
}

