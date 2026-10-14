// sub_0801B730 at 0x0801B730 (thumb)

undefined4 sub_0801B730(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar4 = (ushort *)(param_1 + 0x148);
  DAT_0202ec34 = *puVar4;
  if (DAT_0202ec34 == 0) {
    DAT_0202ec34 = DAT_02000d10 & 0x7fff;
    DAT_0202ec36 = DAT_02000d28 & 0x7fff;
  }
  else if (DAT_0202ec34 == 0xffff) {
    DAT_0202ec34 = 0;
    DAT_0202ec36 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      sub_08022FB8(iVar3);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 8) == '\0')) {
        sub_08022FB8(iVar2);
      }
    }
  }
  else {
    DAT_0202ec36 = DAT_0202ec34;
    if (iVar3 != 0) {
      if ((DAT_0202ec34 & 0x1000) != 0) {
        uVar1 = sub_0801EEC4(iVar3,0);
        DAT_0202ec34 = DAT_0202ec34 | uVar1;
      }
      if ((*puVar4 & 0x2000) != 0) {
        uVar1 = sub_0801EEC4(iVar3,1);
        DAT_0202ec34 = DAT_0202ec34 | uVar1;
      }
      if ((*puVar4 & 0x4000) != 0) {
        uVar1 = sub_0801EEC4(iVar3,2);
        DAT_0202ec34 = DAT_0202ec34 | uVar1;
      }
    }
  }
  return in_lr;
}

