// sub_08001794 at 0x08001794 (thumb)

void sub_08001794(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int unaff_r6;
  
  uVar2 = (uint)*(byte *)(unaff_r6 + 0xc);
  if ((5 < uVar2) || (uVar2 = (uint)*(byte *)(unaff_r6 + 0xe), 5 < uVar2)) {
    if ((int)uVar2 < (int)param_3) {
      uVar2 = param_3;
    }
    iVar1 = uVar2 + 8;
    if ((int)(uVar2 + 8) < DAT_02001024) {
      iVar1 = DAT_02001024;
    }
    DAT_02000fd0 = 0xc;
    DAT_02001024 = iVar1;
  }
  return;
}

