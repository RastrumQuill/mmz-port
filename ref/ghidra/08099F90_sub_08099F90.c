// sub_08099F90 at 0x08099F90 (thumb)

undefined8 sub_08099F90(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x4e;
    *(undefined4 *)(iVar1 + 0x14) = 0x809a109;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230ac;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202310e;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *param_2;
    }
    else {
      iVar2 = -*param_2;
    }
    *(int *)(iVar1 + 0x54) = iVar2;
    *(int *)(iVar1 + 0x58) = param_2[1];
  }
  return CONCAT44(in_lr,iVar1);
}

