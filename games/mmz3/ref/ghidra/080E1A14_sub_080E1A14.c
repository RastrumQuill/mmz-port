// sub_080E1A14 at 0x080E1A14 (thumb)

undefined4 sub_080E1A14(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xc0) + 1;
  *(byte *)(param_1 + 0xc0) = (char)iVar2 + (char)(iVar2 >> 5) * -0x20;
  iVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x68);
  if (((iVar3 + 0x200U < 0x401) && (iVar2 + 0x200U < 0x401)) &&
     (iVar3 * iVar3 + iVar2 * iVar2 < 0x40001)) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8);
  }
  else {
    iVar2 = sub_080E90EC(iVar3,iVar2);
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) +
         *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * 2;
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x68) +
         *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * 2;
    pcVar4 = (char *)(param_1 + 0xc1);
    cVar1 = *pcVar4;
    *pcVar4 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      sub_080BF760(param_1 + 0x54,0);
      *pcVar4 = ' ';
    }
  }
  return in_lr;
}

