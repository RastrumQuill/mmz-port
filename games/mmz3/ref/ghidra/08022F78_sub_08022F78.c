// sub_08022F78 at 0x08022F78 (thumb)

undefined8 sub_08022F78(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar3 + 1) == '\0') {
    if (*(int *)(param_1 + 0x144) != 0) {
      *(int *)(param_1 + 0xc) = iVar3 + -8;
      uVar2 = 1;
      goto LAB_08022fb4;
    }
  }
  else {
    bVar1 = *(byte *)(iVar3 + 1);
    *(uint *)(param_1 + 0x144) = (uint)bVar1;
    if ((bVar1 & 8) != 0) {
      DAT_03002ac0 = 0;
    }
  }
  uVar2 = 0;
LAB_08022fb4:
  return CONCAT44(in_lr,uVar2);
}

