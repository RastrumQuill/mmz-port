// sub_08074640 at 0x08074640 (thumb)

undefined4 sub_08074640(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,4);
    sub_0800561C(param_1 + 0x74,&DAT_082b161c);
    if (*(int *)(param_1 + 0xbc) < 0) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar3 = sub_08015A64(0,param_1,&DAT_082b1670);
      *(int *)(param_1 + 0xc4) = iVar3;
      if (iVar3 != 0) goto LAB_0807469c;
    }
    else {
LAB_0807469c:
      sub_0800561C(param_1 + 0x74,&DAT_082b1638);
    }
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0807472e;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 3 >> 2;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    iVar3 = sub_08015D94(*(undefined4 *)(param_1 + 0xc4));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0807472e:
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
  if (cVar2 != '\0') {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  return in_lr;
}

