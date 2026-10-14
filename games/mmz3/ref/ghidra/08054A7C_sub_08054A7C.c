// sub_08054A7C at 0x08054A7C (thumb)

undefined4 sub_08054A7C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x20))
    goto LAB_08054abe;
    iVar2 = sub_080253D8(0x17,param_1,&DAT_0836030c);
  }
  else {
    iVar2 = sub_08025794();
    if (iVar2 == 0) goto LAB_08054abe;
    iVar2 = 0;
  }
  *(int *)(param_1 + 0xb4) = iVar2;
LAB_08054abe:
  cVar1 = sub_0805478C(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08360284 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083602a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

