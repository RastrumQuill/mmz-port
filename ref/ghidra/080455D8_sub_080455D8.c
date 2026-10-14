// sub_080455D8 at 0x080455D8 (thumb)

undefined4 sub_080455D8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_15 [5];
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_080C8D70(auStack_15 + 1,&DAT_080c92a0,2);
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0xd);
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x10) + -1;
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar4 + 0x4c) + 0x1d00;
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x4c) + -0x1d00;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + 0x1400;
  *(undefined *)(param_1 + 0x12) = auStack_15[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08045698(param_1);
  return in_lr;
}

