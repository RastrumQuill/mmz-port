// sub_0807137C at 0x0807137C (thumb)

undefined4 sub_0807137C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xc2) - 1;
  if (iVar2 < 1) {
    iVar2 = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  *(undefined *)(param_1 + 0xf) = 0;
  *(char *)(param_1 + 0xc2) = (char)iVar2;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

