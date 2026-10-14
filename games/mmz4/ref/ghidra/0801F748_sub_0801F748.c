// sub_0801F748 at 0x0801F748 (thumb)

undefined8 sub_0801F748(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 != 0) && (((*(uint *)(iVar2 + 0x8c) & 0x200) != 0 || (*(short *)(iVar2 + 0xa4) == 0))))
  {
    DAT_0202e918 = DAT_0202e918 & 0xfffe | 8;
  }
  uVar4 = DAT_0202e918 & 1;
  if (((DAT_0202e918 & 1) == 0) && ((DAT_0202e918 & 8) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    puVar3 = *(undefined **)(param_1 + 0x18);
    DAT_0202f370 = uVar4;
    if (((puVar3 != &DAT_0883f800) && (puVar3 != &DAT_0883f878)) && (puVar3 != &DAT_0884cfa4)) {
      if ((DAT_0202ea64 == 0) || ((DAT_0202ea64 & 1) != 0)) {
        sub_080275F0(&DAT_0202e920,&DAT_0883f800);
      }
      else {
        sub_080275F0(&DAT_0202e920);
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

