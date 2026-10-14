// sub_0811BF18 at 0x0811BF18 (thumb)

undefined4 sub_0811BF18(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xde5) = 0;
  cVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_08885fb0 + (uint)*(byte *)(param_1 + 2) * 4));
  if (cVar1 != '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08885fb8 + (uint)*(byte *)(param_1 + 2) * 4));
  }
  if (*(char *)(param_1 + 0xde7) != '\0') {
    *(undefined *)(param_1 + 1) = 3;
  }
  sub_080025D8(0x2f);
  if (*(char *)(param_1 + 0xde5) == '\0') {
    if (*(char *)(param_1 + 0xde6) == '2') {
      *(undefined *)(param_1 + 0xde6) = 0x31;
      sub_08002624(0x30);
      sub_08002624(0x32);
      sub_0800249C(0x31,0);
      sub_0800249C(0x3a,0);
    }
    sub_080025D8(0x31);
    sub_080025D8(0x3a);
  }
  else {
    if (*(char *)(param_1 + 0xde6) == '1') {
      *(undefined *)(param_1 + 0xde6) = 0x32;
      sub_08002624(0x31);
      sub_08002624(0x3a);
      sub_0800249C(0x30,0);
      sub_0800249C(0x32,0);
    }
    sub_080025D8(0x30);
    sub_080025D8(0x32);
  }
  return in_lr;
}

