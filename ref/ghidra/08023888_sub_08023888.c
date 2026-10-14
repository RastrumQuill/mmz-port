// sub_08023888 at 0x08023888 (thumb)

undefined4 sub_08023888(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_08017490(param_1,1);
  if ((0 < iVar3 * 0x1000000) && (cVar1 = sub_0801B828(param_1), cVar1 != '\0')) {
    sub_080181E4(param_1);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x120) < '\x01') &&
     ((*(byte *)(param_1 + 0x19b) < 100 ||
      (bVar2 = sub_0801B50C(param_1,1), (bVar2 & *(byte *)(param_1 + 0x12d)) == 0)))) {
    if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0) {
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 4;
      sub_08018BE8(param_1,0x1d);
    }
  }
  else {
    sub_0801821C(param_1);
  }
  return in_lr;
}

