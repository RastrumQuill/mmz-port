// sub_08001598 at 0x08001598 (thumb)

undefined4 sub_08001598(void)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = 2;
  cVar2 = '\0';
  sub_08001610();
  if ((cVar2 == '\0') || (sub_080015D0(), cVar2 != '\0')) {
    uVar1 = 1;
  }
  else {
    sub_080015EC();
    if (cVar2 != '\0') {
      uVar1 = 0;
    }
  }
  return uVar1;
}

