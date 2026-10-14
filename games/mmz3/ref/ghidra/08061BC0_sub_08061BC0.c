// sub_08061BC0 at 0x08061BC0 (thumb)

undefined4 sub_08061BC0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  do {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 0xf;
    pcVar2 = (char *)(param_1 + 0xc2);
    pcVar3 = (char *)(param_1 + 0xc3);
    if (*pcVar2 != (&DAT_083620e4)[uVar1]) break;
  } while (*pcVar3 != '\0');
  if (*pcVar2 == (&DAT_083620e4)[uVar1]) {
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    *pcVar2 = (&DAT_083620e4)[uVar1];
    *pcVar3 = '\0';
  }
  *(undefined *)(param_1 + 0xd) = (&DAT_083620e4)[uVar1];
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

