// sub_080D9E88 at 0x080D9E88 (thumb)

undefined4 sub_080D9E88(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080DAA20();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DA660(param_1);
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b9e0 + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080DAB2C(param_1);
    sub_080128D4(param_1);
  }
  return in_lr;
}

