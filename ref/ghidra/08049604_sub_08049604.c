// sub_08049604 at 0x08049604 (thumb)

undefined4 sub_08049604(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,4);
    sub_0800561C(param_1 + 0x74,&DAT_082aec64);
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x80;
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar4 = sub_08015A64(0,param_1,&DAT_082aec9c);
      *(int *)(param_1 + 0xc4) = iVar4;
      if (iVar4 != 0) goto LAB_0804967c;
    }
    else {
LAB_0804967c:
      sub_0800561C(param_1 + 0x74,&DAT_082aec80);
    }
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0804970e;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 3 >> 2;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
    iVar4 = sub_08015D94(*(undefined4 *)(param_1 + 0xc4));
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0804970e:
  cVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
  if (cVar3 != '\0') {
    uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar5;
  }
  return in_lr;
}

