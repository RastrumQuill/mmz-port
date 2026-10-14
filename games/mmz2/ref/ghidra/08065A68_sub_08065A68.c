// sub_08065A68 at 0x08065A68 (thumb)

undefined8 sub_08065A68(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f06c;
  sub_08006B48(DAT_0202f06c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    if (*(char *)(iVar2 + 0x10) == param_1) goto LAB_08065aa6;
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  iVar2 = 0;
LAB_08065aa6:
  return CONCAT44(in_lr,iVar2);
}

