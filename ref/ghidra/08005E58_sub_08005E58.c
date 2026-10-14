// sub_08005E58 at 0x08005E58 (thumb)

undefined8 sub_08005E58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((DAT_02004fa0 & 0x80) == 0) {
    iVar2 = *(int *)(param_2 + 8);
    if (*(char *)(iVar2 + 0x10) != -1) {
      if (*(char *)(iVar2 + 0x10) == '\t') {
        if (*(char *)(*(int *)(param_1 + 8) + 4) != '\0') {
          iVar1 = 0x40;
          goto LAB_08005ed2;
        }
      }
      else {
        if (*(int *)(&DAT_08290c4c +
                    (uint)*(byte *)(*(int *)(param_1 + 8) + 5) * 4 +
                    (uint)*(byte *)(iVar2 + 0x10) * 0x10) == 9) goto LAB_08005e9e;
        iVar3 = *(int *)(&DAT_08290c4c +
                        (uint)*(byte *)(*(int *)(param_1 + 8) + 5) * 4 +
                        (uint)*(byte *)(iVar2 + 0x10) * 0x10) *
                (uint)*(byte *)(*(int *)(param_1 + 8) + 3);
        iVar1 = iVar3 >> 2;
        if ((*(char *)(iVar2 + 1) == '\x01') && ((DAT_02022ae0 & 0x20) != 0)) {
          iVar1 = iVar3 >> 3;
        }
        if (iVar1 != 0) goto LAB_08005ed2;
      }
      iVar1 = 1;
      goto LAB_08005ed2;
    }
  }
LAB_08005e9e:
  iVar1 = 0;
LAB_08005ed2:
  return CONCAT44(in_lr,iVar1);
}

