// sub_0806C6E4 at 0x0806C6E4 (thumb)

undefined4 sub_0806C6E4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc5) = 2;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + '\x01';
    if (cVar1 == '\x10') {
      *(undefined *)(iVar3 + 0xd) = 0;
      *(undefined *)(param_1 + 0xc5) = 0;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    iVar3 = sub_08015D94(iVar2);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xc0) = 0;
      sub_0800561C(param_1 + 0x74,&DAT_082b0e58);
    }
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

