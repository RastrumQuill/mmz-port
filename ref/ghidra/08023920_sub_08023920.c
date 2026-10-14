// sub_08023920 at 0x08023920 (thumb)

undefined4 sub_08023920(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08017490(param_1,1);
  if ((iVar2 * 0x1000000 < 1) || (cVar1 = sub_0801B828(param_1), cVar1 == '\0')) {
    if ((*(byte *)(param_1 + 0x19b) < 100) ||
       (iVar2 = sub_08017490(param_1,1), iVar2 * 0x1000000 < 1)) {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        sub_080184E8(param_1);
        sub_08018680(param_1);
      }
    }
    else {
      sub_0801821C(param_1);
    }
  }
  else {
    sub_080181E4(param_1);
  }
  return in_lr;
}

