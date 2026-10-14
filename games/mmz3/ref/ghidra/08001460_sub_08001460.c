// sub_08001460 at 0x08001460 (thumb)

undefined4 sub_08001460(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_080007b4();
  if (iVar1 == 4) {
    uVar2 = 0;
  }
  else if (iVar1 == 2) {
    DAT_02001740 = FUN_08000784(2,0,6,2);
    sub_080014D0();
  }
  return uVar2;
}

