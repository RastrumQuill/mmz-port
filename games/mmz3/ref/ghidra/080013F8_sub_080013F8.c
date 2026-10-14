// sub_080013F8 at 0x080013F8 (thumb)

undefined4 sub_080013F8(void)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = 0;
  cVar2 = '\x01';
  sub_08001460();
  if ((cVar2 != '\0') && (sub_08000FB8(), cVar2 == '\0')) {
    sub_08002498();
    sub_08001494();
    uVar1 = 1;
  }
  return uVar1;
}

