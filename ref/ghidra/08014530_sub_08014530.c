// sub_08014530 at 0x08014530 (thumb)

undefined4 sub_08014530(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar3 = (ushort *)(param_1 + 0x148);
  DAT_02022b62 = *puVar3;
  if (DAT_02022b62 == 0) {
    DAT_02022b62 = DAT_02004ca4 & 0x7fff;
  }
  else if (DAT_02022b62 == 0xffff) {
    DAT_02022b62 = 0;
    sub_0801D890(iVar2);
  }
  else if (iVar2 != 0) {
    if ((DAT_02022b62 & 0x1000) != 0) {
      uVar1 = sub_0801BCB4(iVar2,4);
      DAT_02022b62 = uVar1 | DAT_02022b62;
    }
    if ((*puVar3 & 0x2000) != 0) {
      uVar1 = sub_0801BCB4(iVar2,5);
      DAT_02022b62 = uVar1 | DAT_02022b62;
    }
    if ((*puVar3 & 0x4000) != 0) {
      uVar1 = sub_0801BCB4(iVar2,6);
      DAT_02022b62 = uVar1 | DAT_02022b62;
    }
  }
  return in_lr;
}

