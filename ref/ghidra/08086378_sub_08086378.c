// sub_08086378 at 0x08086378 (thumb)

undefined4 sub_08086378(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_080C8D70(auStack_14,&DAT_080c93e4,7);
  uVar3 = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\x05') {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      sub_080033F0(param_1 + 0x6c,auStack_14[*(byte *)(param_1 + 0xd)]);
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 1;
    break;
  default:
    goto switchD_08086402_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 5;
    break;
  case 4:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 2;
    break;
  case 6:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    goto switchD_08086402_caseD_1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
switchD_08086402_caseD_1:
  return in_lr;
}

