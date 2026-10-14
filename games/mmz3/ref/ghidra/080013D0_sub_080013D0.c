// sub_080013D0 at 0x080013D0 (thumb)

undefined4 sub_080013D0(void)

{
  char in_ZR;
  
  sub_08001460();
  if ((in_ZR == '\0') || (sub_08000FB8(), in_ZR != '\0')) {
    sub_080014C0();
    if (in_ZR == '\0') {
      return 1;
    }
  }
  else {
    sub_08002498();
    sub_08001494();
  }
  return 0;
}

