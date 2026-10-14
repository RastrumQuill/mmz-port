// sub_0804AC18 at 0x0804AC18 (thumb)

undefined4 sub_0804AC18(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  uVar4 = 0;
  piVar2 = &DAT_082af07c;
  do {
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *piVar2,*(int *)(param_1 + 0x50) + piVar2[1]);
    if (cVar1 != '\0') {
      uVar3 = uVar3 | 1 << (uVar4 & 0xff) & 0xffU;
    }
    piVar2 = piVar2 + 2;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  sub_080C8A9C(param_1,&DAT_082af07c,*(undefined4 *)(&UNK_082af03c + uVar3 * 4));
  return in_lr;
}

