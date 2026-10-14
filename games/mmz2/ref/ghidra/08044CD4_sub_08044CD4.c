// sub_08044CD4 at 0x08044CD4 (thumb)

undefined8 sub_08044CD4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 100) < param_2) {
    uVar2 = 0;
    iVar1 = 0;
    while (param_2 + 0x800 < *(int *)(param_1 + 0xcc) - iVar1) {
      uVar2 = uVar2 + 1 & 0xff;
      if (6 < uVar2) goto LAB_08044d12;
      iVar1 = (&DAT_0833a780)[uVar2];
    }
    if (6 < uVar2) {
LAB_08044d12:
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 7;
    iVar1 = 0;
    while (param_2 + 0x800 < *(int *)(param_1 + 0xd0) - iVar1) {
      uVar2 = uVar2 + 1 & 0xff;
      if (0xd < uVar2) goto LAB_08044d4a;
      iVar1 = (&DAT_0833a780)[uVar2];
    }
    if (0xd < uVar2) {
LAB_08044d4a:
      uVar2 = 0xd;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

