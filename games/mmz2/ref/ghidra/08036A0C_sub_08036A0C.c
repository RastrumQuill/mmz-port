// sub_08036A0C at 0x08036A0C (thumb)

undefined8 sub_08036A0C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c4) - *(int *)(param_1 + 0x2d4);
  iVar1 = *(int *)(param_1 + 0x2c8) - *(int *)(param_1 + 0x2d8);
  iVar1 = sub_080EEF7C(iVar2 * iVar2 + iVar1 * iVar1);
  iVar1 = sub_080EF150((uint)(iVar1 << 0x10) >> 0xd,*(undefined2 *)(param_1 + 0x2c2));
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(char *)(param_1 + 0x2b9) = (char)iVar1;
  return CONCAT44(in_lr,iVar1);
}

