// sub_080D5908 at 0x080D5908 (thumb)

undefined8 sub_080D5908(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_3 - 1U < 0x51) &&
     (uVar1 = param_3 - (uint)(byte)(&DAT_0834a5ac)[param_2 * 2],
     uVar1 < (byte)(&DAT_0834a5ad)[param_2 * 2])) {
    iVar2 = 0;
    if (**(byte **)(&DAT_0834a5bc + param_2 * 4) <= uVar1) {
      do {
        uVar1 = uVar1 - *(byte *)(*(int *)(&DAT_0834a5bc + param_2 * 4) + iVar2);
        iVar2 = iVar2 + 1;
      } while (*(byte *)(*(int *)(&DAT_0834a5bc + param_2 * 4) + iVar2) <= uVar1);
    }
    iVar2 = (int)(char)iVar2;
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

