// sub_080011E4 at 0x080011E4 (thumb)

undefined4 sub_080011E4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_080007b4();
  if (iVar1 != 8) {
    if (iVar1 == 4) {
      uVar2 = 2;
      sub_08002498();
    }
    else {
      iVar1 = sub_08001714(1);
      if ((((iVar1 != 0xff) && (*(short *)(iVar1 + 6) == 2)) && (*(short *)(iVar1 + 8) != 0)) &&
         (uVar2 = 4, *(short *)(iVar1 + 8) == 1)) {
        uVar2 = 1;
      }
      sub_08001698(1,2,0x200);
      DAT_02001758 = 0x3c;
    }
  }
  return uVar2;
}

