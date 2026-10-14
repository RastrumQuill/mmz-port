// sub_0801550C at 0x0801550C (thumb)

undefined8 sub_0801550C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
    case 0:
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(iVar2 + 0x50);
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
      break;
    case 2:
      sub_0801D648(iVar2);
      break;
    case 3:
      if (*(char *)(iVar2 + 0xd) != '\0') {
LAB_08015594:
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
        uVar1 = 1;
        goto LAB_080155a6;
      }
      break;
    case 4:
      if (((*(uint *)(iVar2 + 0xc) & 0xffff00) != 0) || (1 < *(byte *)(iVar2 + 0xbe)))
      goto LAB_08015594;
    }
  }
  uVar1 = 0;
LAB_080155a6:
  return CONCAT44(in_lr,uVar1);
}

