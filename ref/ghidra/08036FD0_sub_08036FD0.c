// sub_08036FD0 at 0x08036FD0 (thumb)

undefined4 sub_08036FD0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined *)(param_1 + 0xf) = 1;
  iVar2 = sub_080C8AD0(*(undefined4 *)(param_1 + 0x54),0x3c0);
  *(int *)(param_1 + 0x54) = iVar2;
  uVar3 = sub_080C8AD0(iVar2 * 0x6cc0,0x1e);
  cVar1 = sub_08038B00(param_1,uVar3);
  if (cVar1 == '\0') {
    sub_08038A5C(param_1,2);
  }
  else {
    sub_08038A78(param_1,2,0,2);
  }
  return in_lr;
}

