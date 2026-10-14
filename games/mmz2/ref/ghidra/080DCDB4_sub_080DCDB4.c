// sub_080DCDB4 at 0x080DCDB4 (thumb)

undefined4 sub_080DCDB4(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080DD0C4();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DCEC0(param_1);
  }
  else {
    sVar2 = sub_080DD17C(param_1);
    if (sVar2 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      sub_080DD2F4(param_1);
      sub_080128D4(param_1);
    }
  }
  return in_lr;
}

