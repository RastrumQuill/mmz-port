// sub_08044D80 at 0x08044D80 (thumb)

void sub_08044D80(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 & 0xff) < 7) {
    piVar1 = (int *)(param_1 + 0xcc);
  }
  else {
    piVar1 = (int *)(param_1 + 0xd0);
  }
  sub_080093C4(*piVar1 - (&DAT_0833a780)[param_2 & 0xff],0x1a000);
  return;
}

