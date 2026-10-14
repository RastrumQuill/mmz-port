// sub_08001438 at 0x08001438 (thumb)

undefined4 sub_08001438(void)

{
  char in_ZR;
  
  sub_08001460();
  if (in_ZR == '\0') {
    sub_08000FB8();
    if (in_ZR == '\0') {
      return 2;
    }
  }
  else {
    sub_08000FB8();
    if (in_ZR == '\0') {
      sub_08002498();
      return 0;
    }
  }
  sub_08002498();
  return 1;
}

